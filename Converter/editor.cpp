#include "editor.h"

string Editor::AddNum(int d)
{
    if (m_number == "0") m_number = "";
    m_number.push_back((d > 9 ? (d < 16 ? 'A' + d - 10 : -1) : (d >= 0 ? '0' + d : -1)));
    return m_number;
}

string Editor::AddSep()
{
    if(m_number.find('.') == m_number.npos) m_number.push_back('.');
    return m_number;
}

string Editor::addSign()
{
    if (m_number == "0") return m_number;
    if (m_number.front() == '-')
        m_number = string(m_number.begin() + 1, m_number.end());
    else m_number = "-" + m_number;
    return m_number;
}

string Editor::Clear()
{
    m_number = "0";
    return m_number;
}

string Editor::AddNul()
{
    if(m_number != "0") m_number.push_back('0');
    return m_number;
}

string Editor::Backspace()
{
    m_number.pop_back();
    if (!m_number.size() || m_number.size() == 1 && m_number[0] == '-') m_number = "0";
    return m_number;
}

string Editor::GetNumber()
{
    return m_number;
}

void Editor::SetNumber(string & a)
{
    m_number = a;
}

string Editor::Edit(int i)
{
    switch (i)
    {
        case 0:  return AddNul();
        case 16: return AddSep();
        case 17: return addSign();
        case 18: return Backspace();
        case 19: return Clear();
        default: return AddNum(i);
    }
}

shared_ptr<Editor> Editor::Create(const string& n)
{
    return make_shared<Editor>(n);
}