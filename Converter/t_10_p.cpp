#include "t_10_p.h"

T10_p::T10_p( const int p, const int a )
{
}

char T10_p::PIntToChar( const int d ) const
{
    return ( d > 9 ? ( d < 16 ? 'A' + d - 10 : -1 ) : ( d >=  0 ? '0' + d : -1 ) );
}

string T10_p::Int10ToP( int64_t r ) const
{
    string result = "";
    while (Fp != 0) {
        result = PIntToChar( r % Fp );
        r /= Fp;
    }
    return result;
}

string T10_p::Frac10ToP( double f ) const
{
    string result = "";
    for (int i = 0; i < Fa; ++i)
        result += PIntToChar( int( f *= Fp ) );
    return result;
}

string T10_p::DoTransfer( const double & number ) const
{
    auto sign = number < 0;
    return ( sign ? "-" : "" ) + Int10ToP( int64_t( ( sign ? -number : number ) ) ) + '.' + Frac10ToP( ( sign ? -number : number ) - int64_t( ( sign ? -number : number ) ) );
}

int T10_p::GetP( void ) const
{
    return Fp;
}

int T10_p::SetP( const int p )
{
    if (p > 2 && p < 16) {
        Fp = p;
        return 0;
    }
    return -1;
}

shared_ptr<T10_p>&& T10_p::Create( const int p, const int a )
{
    auto ptr = new T10_p( p, a );
    return shared_ptr<T10_p>( ptr );
}
