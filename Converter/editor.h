#pragma once
#include <string>
#include <memory>
using namespace std;
class Editor
{
private:
    string m_number;
    string AddNum(int d);
    string AddSep();
    string addSign();
    
    string AddNul();
    string Backspace();
public:
    Editor(const string& n) : m_number(n)
    {
    }
    string Clear();
    string GetNumber();
    string Edit( int i );

    void SetNumber(string& a);

    static shared_ptr<Editor> Create(const string& n);
};