///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Mar 22 2011)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __WmmUIDialog__
#define __WmmUIDialog__

#include <wx/intl.h>

#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/dialog.h>
#include <wx/radiobox.h>
#include <wx/checkbox.h>
#include <wx/slider.h>
#include <wx/button.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class WmmUIDialog
///////////////////////////////////////////////////////////////////////////////
class WmmUIDialog : public wxDialog 
{
	private:
	
	protected:
		wxStaticText* m_staticText8;
		wxStaticText* m_staticText9;
		wxStaticText* m_staticText10;
		wxStaticText* m_staticText11;
		wxStaticText* m_staticText12;
		wxStaticText* m_staticText14;
		wxStaticText* m_staticText13;
		wxStaticText* m_staticText81;
		wxStaticText* m_staticText91;
		wxStaticText* m_staticText101;
		wxStaticText* m_staticText111;
		wxStaticText* m_staticText121;
		wxStaticText* m_staticText141;
		wxStaticText* m_staticText131;
	
	public:
		wxBoxSizer* bSframe;
		wxStaticBoxSizer* sbSboat;
		wxGridSizer* gSboat;
		wxTextCtrl* m_tbF;
		wxTextCtrl* m_tbH;
		wxTextCtrl* m_tbX;
		wxTextCtrl* m_tbY;
		wxTextCtrl* m_tbZ;
		wxTextCtrl* m_tbI;
		wxTextCtrl* m_tbD;
		wxStaticBoxSizer* sbScursor;
		wxGridSizer* gScursor;
		wxTextCtrl* m_tcF;
		wxTextCtrl* m_tcH;
		wxTextCtrl* m_tcX;
		wxTextCtrl* m_tcY;
		wxTextCtrl* m_tcZ;
		wxTextCtrl* m_tcI;
		wxTextCtrl* m_tcD;
		
		WmmUIDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WMM"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 240,415 ), long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE|wxSTAY_ON_TOP|wxTAB_TRAVERSAL ); 
		~WmmUIDialog();
	
};

///////////////////////////////////////////////////////////////////////////////
/// Class WmmPrefsDialog
///////////////////////////////////////////////////////////////////////////////
class WmmPrefsDialog : public wxDialog 
{
	private:
	
	protected:
		wxStdDialogButtonSizer* m_sdbSizer1;
		wxButton* m_sdbSizer1OK;
		wxButton* m_sdbSizer1Cancel;
	
	public:
		wxRadioBox* m_rbViewType;
		wxCheckBox* m_cbShowAtCursor;
		wxSlider* m_sOpacity;
		
		WmmPrefsDialog( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("WMM Preferences"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAPTION|wxDEFAULT_DIALOG_STYLE ); 
		~WmmPrefsDialog();
	
};

#endif //__WmmUIDialog__
