#pragma once

#include "editor.h"
#include "t_10_p.h"
#include "t_p_10.h"

class Control
{
    shared_ptr<T10p>  m_T10p;
    shared_ptr<Tp10>  m_Tp10;
    shared_ptr<Editor> m_editor;
public:
    Control()
        : m_T10p(T10p::Create(16, 5))
        , m_Tp10(Tp10::Create(16))
        , m_editor(Editor::Create("0"))
    {
    }

    string SendCommand(int command)
    {
        string result;
        if (command >= 0 && command <= 20) result = m_editor->Edit(command);
        else
        {
            switch (command)
            {
                case 21:
                    result = m_T10p->DoTransfer(m_Tp10->DoTransfer(m_editor->GetNumber()));
                default:
                    break;
            }
        }
        return result;
    }

    void SetP1(int p)
    {
        m_editor->Clear();
        m_Tp10->SetP(p);
    }

    void SetP2(int p)
    {
        m_T10p->SetP(p);
    }
};