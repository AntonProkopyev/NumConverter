#pragma once

#include <cstdint>
#include <string>
#include <memory>
using namespace std;

class Tp_10
{

private:

    int     Fp;

    Tp_10   ( void );
    Tp_10   ( const int p );

    int64_t PCharToInt( const char c )   const;
    
    double  PIntTo10( const string& s )  const;
    double  PFracTo10( const string& f ) const;

public:

    double  DoTransfer( const string& str ) const;

    int     GetP( void ) const;
    int     SetP( const int p );

    static shared_ptr<Tp_10>&&  Create( const int p );
};