//
// This file was automatically generated by wxrc, do not edit by hand.
//

#include <wx/wxprec.h>

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

#include <wx/filesys.h>
#include <wx/fs_mem.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_all.h>

#if wxCHECK_VERSION(2,8,5) && wxABI_VERSION >= 20805
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFileWithMimeType(name, data, size, mime)
#else
    #define XRC_ADD_FILE(name, data, size, mime) \
        wxMemoryFSHandler::AddFile(name, data, size)
#endif

static size_t xml_res_size_0 = 498;
static unsigned char xml_res_file_0[] = {
137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,16,0,0,0,16,8,6,0,0,
0,31,243,255,97,0,0,0,6,98,75,71,68,0,255,0,255,0,255,160,189,167,147,0,
0,1,167,73,68,65,84,56,141,181,146,207,75,84,81,20,199,63,119,156,17,116,
104,19,132,4,225,162,9,11,166,6,10,52,97,192,137,172,133,171,92,10,22,182,
44,144,126,109,139,176,63,160,69,251,32,138,118,70,8,21,173,204,22,249,
3,158,32,18,227,98,22,131,26,37,14,226,32,188,247,154,121,247,157,115,91,
148,34,229,188,69,212,119,115,23,231,123,63,247,124,207,185,240,63,181,
120,239,220,203,133,219,231,187,146,60,169,164,162,107,234,104,218,232,
178,119,179,112,242,239,0,86,56,118,225,242,17,76,198,243,110,228,139,7,
121,12,192,194,245,188,107,5,57,125,231,22,225,198,55,214,166,222,132,18,
53,199,250,159,149,95,253,1,152,31,61,229,10,15,38,126,61,43,160,130,115,
2,78,65,99,180,81,199,250,150,234,228,84,232,26,223,31,246,61,95,121,188,
11,72,3,168,85,16,33,218,92,106,25,167,173,61,203,241,145,225,206,213,201,
183,143,230,175,230,115,253,39,202,227,102,2,77,3,184,72,136,131,0,187,
93,79,152,72,29,147,233,160,123,232,98,246,203,187,15,99,115,159,123,122,
161,210,251,19,96,21,9,124,108,125,59,1,0,169,246,78,76,70,145,134,197,
217,216,237,139,32,168,31,16,39,116,208,150,61,76,108,13,95,63,206,4,77,
63,120,58,240,126,253,238,30,192,69,74,202,111,112,168,187,136,211,24,39,
49,136,221,59,101,167,134,221,81,214,62,205,134,98,229,126,105,122,253,
201,46,216,0,204,20,143,182,92,99,225,202,32,193,102,141,85,111,37,116,
34,215,74,179,27,175,247,215,77,82,230,233,190,46,151,59,147,211,106,185,
234,59,209,161,65,175,54,247,187,39,157,4,112,86,168,46,85,106,42,148,46,
45,111,85,14,242,36,127,229,72,94,152,166,57,219,234,242,63,209,15,99,239,
209,86,3,110,246,131,0,0,0,0,73,69,78,68,174,66,96,130};

static size_t xml_res_size_1 = 294;
static unsigned char xml_res_file_1[] = {
60,63,120,109,108,32,118,101,114,115,105,111,110,61,34,49,46,48,34,32,101,
110,99,111,100,105,110,103,61,34,85,84,70,45,56,34,63,62,10,60,114,101,
115,111,117,114,99,101,32,120,109,108,110,115,61,34,104,116,116,112,58,
47,47,119,119,119,46,119,120,119,105,100,103,101,116,115,46,111,114,103,
47,119,120,120,114,99,34,62,10,32,32,60,33,45,45,32,72,97,110,100,108,101,
114,32,71,101,110,101,114,97,116,105,111,110,32,105,115,32,79,78,32,45,
45,62,10,32,32,60,111,98,106,101,99,116,32,99,108,97,115,115,61,34,119,
120,66,105,116,109,97,112,34,32,110,97,109,101,61,34,97,114,114,111,119,
65,99,116,105,118,101,34,62,108,105,115,116,99,116,114,108,112,97,110,101,
108,95,102,111,114,109,98,117,105,108,100,101,114,95,98,105,116,109,97,
112,115,46,99,112,112,36,67,95,95,115,114,99,95,99,111,100,101,108,105,
116,101,95,99,111,100,101,108,105,116,101,45,105,99,111,110,115,95,116,
111,111,108,98,97,114,115,95,49,54,95,115,116,97,110,100,97,114,100,95,
102,111,114,119,97,114,100,46,112,110,103,60,47,111,98,106,101,99,116,62,
10,60,47,114,101,115,111,117,114,99,101,62,10};

void wxCF3AAInitBitmapResources()
{

    // Check for memory FS. If not present, load the handler:
    {
        wxMemoryFSHandler::AddFile(wxT("XRC_resource/dummy_file"), wxT("dummy one"));
        wxFileSystem fsys;
        wxFSFile *f = fsys.OpenFile(wxT("memory:XRC_resource/dummy_file"));
        wxMemoryFSHandler::RemoveFile(wxT("XRC_resource/dummy_file"));
        if (f) delete f;
        else wxFileSystem::AddHandler(new wxMemoryFSHandlerBase);
    }

    XRC_ADD_FILE(wxT("XRC_resource/listctrlpanel_formbuilder_bitmaps.cpp$C__src_codelite_codelite-icons_toolbars_16_standard_forward.png"), xml_res_file_0, xml_res_size_0, wxT("image/png"));
    XRC_ADD_FILE(wxT("XRC_resource/listctrlpanel_formbuilder_bitmaps.cpp$C__src_codelite_formbuilder_listctrlpanel_formbuilder_bitmaps.xrc"), xml_res_file_1, xml_res_size_1, wxT("text/xml"));
    wxXmlResource::Get()->Load(wxT("memory:XRC_resource/listctrlpanel_formbuilder_bitmaps.cpp$C__src_codelite_formbuilder_listctrlpanel_formbuilder_bitmaps.xrc"));
}
