#include "t_10_p.h"

T10p::T10p(const int p, const int a) : Fp(p), Fa(a)
{
}

char T10p::PIntToChar(const int d) const
{
    return (d > 9 ? (d < 16 ? 'A' + d - 10 : -1) : (d >= 0 ? '0' + d : -1));
}

string T10p::Int10ToP(int64_t r) const
{
    string result = "0";
    if (r != 0) result = "";
    while (r != 0)
    {
        result = PIntToChar(r % Fp) + result;
        r /= Fp;
    }
    return result;
}

string T10p::Frac10ToP(double f) const
{
    string result = "";
    for (int i = 0; i < Fa; ++i)
    {
        auto a = int(f *= Fp);
        result += PIntToChar(a);
        f -= a;
    }
    return result;
}

string T10p::DoTransfer(const double & number) const
{
    auto sign = number < 0;
    auto frac = '.' + Frac10ToP((sign ? -number : number) - int64_t((sign ? -number : number)));
    while (frac.back() == '0') frac.pop_back();
    return (sign ? "-" : "") + Int10ToP(int64_t((sign ? -number : number))) + ((frac == ".") ? "": frac);
}

int T10p::GetP(void) const
{
    return Fp;
}

int T10p::SetP(const int p)
{
    if (p >= 2 && p <= 16)
    {
        Fp = p;
        return 0;
    }
    return -1;
}

shared_ptr<T10p> T10p::Create(const int p, const int a)
{
    auto ptr = new T10p(p, a);
    return shared_ptr<T10p>(ptr);
}
