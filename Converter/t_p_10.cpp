#include "t_p_10.h"

Tp10::Tp10(const int p) : Fp(p)
{
}

int64_t Tp10::PCharToInt(const char c) const
{
    int C = toupper(c);
    if (C >= 'A' && C <= 'F') return C - 'A' + 10;
    if (C >= '0' && C <= '9') return C - '0';
    return -1;
}

double Tp10::PIntTo10(const string & s) const
{
    double result = 0.0;
    for (auto c : s)
    {
        (result *= Fp) += PCharToInt(c);
    }
    return result;
}

double Tp10::PFracTo10(const string & f) const
{
    double result = 0.0;
    double denom = 1.0;
    for (auto c : f)
    {
        result += (denom /= Fp) * PCharToInt(c);
    }
    return result;
}

double Tp10::DoTransfer(const string & str) const
{
    auto it = find(begin(str), end(str), '.');
    if (begin(str) == end(str)) return 0;
    bool isNotPos = false;
    if (str[0] == '-')isNotPos = true;
    string intPart(begin(str) + isNotPos, it);
    double result = 0.;
    if (it != end(str))
    {
        string fracPart(++it, end(str));
        result = PIntTo10(intPart) + PFracTo10(fracPart);
    }
    else result = PIntTo10(intPart);

    if (isNotPos) result *= -1;

    return result;
}

int Tp10::GetP(void) const
{
    return Fp;
}

int Tp10::SetP(const int p)
{
    if (p > 2 && p < 16)
    {
        Fp = p;
        return 0;
    }
    return -1;
}

shared_ptr<Tp10> Tp10::Create(const int p)
{
    auto ptr = new Tp10(p);
    return shared_ptr<Tp10>(ptr);
}
