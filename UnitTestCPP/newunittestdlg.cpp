//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2008 by Eran Ifrah
// file name            : newunittestdlg.cpp
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

#include "newunittestdlg.h"
#include "windowattrmanager.h"
#include "iconfigtool.h"
#include "unittestpp.h"
#include "project.h"

NewUnitTestDlg::NewUnitTestDlg(wxWindow* parent, UnitTestPP* plugin, IConfigTool* config)
    : NewUnitTestBaseDlg(parent)
    , m_plugin(plugin)
    , m_config(config)
{
    m_textCtrlTestName->SetFocus();

    // populate the unit tests project list
    std::vector<ProjectPtr> projects = m_plugin->GetUnitTestProjects();
    for(size_t i = 0; i < projects.size(); i++) {
        m_choiceProjects->Append(projects.at(i)->GetName());
    }

    if(m_choiceProjects->IsEmpty() == false) {
        m_choiceProjects->SetSelection(0);
    }
    SetName("NewUnitTestDlg");
    WindowAttrManager::Load(this);
}

NewUnitTestDlg::~NewUnitTestDlg() {}
