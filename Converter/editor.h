#pragma once
#include <string>
#include <memory>
using namespace std;
class Editor
{
private:
    string m_number;
public:
    Editor(const string& n) : m_number(n)
    {
    }
    string AddNum(int d);
    string AddSep();
    string addSign();
    string Clear();
    string AddNul();
    string Backspace();
    string GetNumber();
    string Edit( int i );

    void SetNumber(string& a);

    static shared_ptr<Editor> Create(const string& n);
};