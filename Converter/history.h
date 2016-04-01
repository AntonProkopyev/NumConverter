#pragma once

#include<vector>
#include<memory>

using namespace std;

class History
{
private:
    vector<string> m_historylist;
public:
    History() : m_historylist(vector<string>(0))
    {
    }

    void Add(const string& s)
    {
        if (s != "") m_historylist.push_back(s);
    }

    void Clear()
    {
        m_historylist.clear();
    }

    vector<string>::const_iterator Begin()
    {
        return m_historylist.cbegin();
    }

    vector<string>::const_iterator End()
    {
        return m_historylist.cend();
    }

    static shared_ptr<History> Create()
    {
        return make_shared<History>();
    }
};