///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/button.h>
#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/slider.h>
#include <wx/panel.h>
#include <wx/timer.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MyFrame1
///////////////////////////////////////////////////////////////////////////////
class MyFrame1 : public wxFrame
{
	private:

	protected:
		wxButton* m_button_loadfile;
		wxButton* m_button_savefile;
		wxStaticText* m_staticText_rotationX;
		wxSlider* m_slider_rotationX;
		wxStaticText* m_staticText_rotationX_value;
		wxStaticText* m_staticText_rotationY;
		wxSlider* m_slider_rotationY;
		wxStaticText* m_staticText_rotationY_value;
		wxStaticText* m_staticText_rotationZ;
		wxSlider* m_slider_rotationZ;
		wxStaticText* m_staticText_rotationZ_value;
		wxStaticText* m_staticText_tranlsationX;
		wxSlider* m_slider_translationX;
		wxStaticText* m_staticText_translationX_value;
		wxStaticText* m_staticText_translationY;
		wxSlider* m_slider_translationY;
		wxStaticText* m_staticText_translationY_value;
		wxStaticText* m_staticText_translationZ;
		wxSlider* m_slider_translationZ;
		wxStaticText* m_staticText_translationZ_value;
		wxStaticText* m_staticText_scaleX;
		wxSlider* m_slider_scaleX;
		wxStaticText* m_staticText_scaleX_value;
		wxStaticText* m_staticText_scaleY;
		wxSlider* m_slider_scaleY;
		wxStaticText* m_staticText_scaleY_value;
		wxStaticText* m_staticText_scaleZ;
		wxSlider* m_slider_scaleZ;
		wxStaticText* m_staticText_scaleZ_value;
		wxStaticText* m_staticText_spacing;
		wxSlider* m_slider_spacing;
		wxStaticText* m_staticText_spacing_value;
		wxButton* m_button_color_one;
		wxButton* m_button_color_two;
		wxButton* m_button_animate;
		wxPanel* m_panel;
		wxTimer m_timer;

		// Virtual event handlers, override them in your derived class
		virtual void m_button_loadfileOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_savefileOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_slider_rotationXOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_rotationYOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_rotationZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_translationXOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_translationYOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_translationZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_scaleXOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_scaleYOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_scaleZOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_slider_spacingOnScroll( wxScrollEvent& event ) { event.Skip(); }
		virtual void m_button_color_oneOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_color_twoOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_button_animateOnButtonClick( wxCommandEvent& event ) { event.Skip(); }
		virtual void m_panelOnSize( wxSizeEvent& event ) { event.Skip(); }
		virtual void m_timerOnTimer( wxTimerEvent& event ) { event.Skip(); }


	public:

		MyFrame1( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Anaglify"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 869,537 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MyFrame1();

};

