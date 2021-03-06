#pragma once

#include <cstdint>
#include <string>
#include <memory>
using namespace std;

class T10p
{
private:

    int     Fp;
    int     Fa;

    T10p(void);
    T10p(const int p, const int a);

    char    PIntToChar(const int d)     const;

    string  Int10ToP(int64_t r)  const;
    string  Frac10ToP(double f)  const;

public:

    string  DoTransfer(const double& number) const;

    int     GetP(void) const;
    int     SetP(const int p);

    static  shared_ptr<T10p> Create(const int p, const int a);
};
