#include "t_p_10.h"

Tp_10::Tp_10( const int p ) : Fp(p)
{
}

int64_t Tp_10::PCharToInt( const char c ) const
{
    int C = toupper( c );
    if (C >= 'A' && C <= 'F') return C - 'A' + 10;
    if (C >= '0' && C <= '9') return C - '0';
    return -1;
}

double Tp_10::PIntTo10( const string & s ) const
{
    double result = 0.0;
    for (auto c : s) {
        (result *= Fp) += PCharToInt( c );
    }
    return result;
}

double Tp_10::PFracTo10( const string & f ) const
{
    double result = 0.0;
    double denom = 1.0;
    for (auto c : f) {
        result += ( denom /= Fp ) * PCharToInt( c );
    }
    return result;
}

double Tp_10::DoTransfer( const string & str ) const
{
    auto it = find( begin( str ), end( str ), '.' );
    string intPart( begin( str ), it );
    string fracPart( ++it, end( str ) );
    return PIntTo10(intPart) + PFracTo10(fracPart);
}

int Tp_10::GetP( void ) const
{
    return Fp;
}

int Tp_10::SetP( const int p )
{
    if (p > 2 && p < 16) {
        Fp = p;
        return 0;
    }
    return -1;
}

shared_ptr<Tp_10>&& Tp_10::Create( const int p )
{
    return make_shared<Tp_10>( p );
}
