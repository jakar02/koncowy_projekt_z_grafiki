///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version 3.10.1-0-g8feb16b3)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "GUI.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer_main;
	bSizer_main = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer_interface;
	bSizer_interface = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer_files;
	bSizer_files = new wxBoxSizer( wxHORIZONTAL );

	m_button_loadfile = new wxButton( this, wxID_ANY, wxT("Wczytaj plik"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_files->Add( m_button_loadfile, 1, wxALL, 5 );

	m_button_savefile = new wxButton( this, wxID_ANY, wxT("Zapisz plik"), wxDefaultPosition, wxDefaultSize, 0 );

	m_button_savefile->SetBitmapPosition( wxRIGHT );
	bSizer_files->Add( m_button_savefile, 1, wxALL, 5 );


	bSizer_interface->Add( bSizer_files, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_rotationX;
	bSizer_rotationX = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_rotationX = new wxStaticText( this, wxID_ANY, wxT("Obrot X :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationX->Wrap( -1 );
	bSizer_rotationX->Add( m_staticText_rotationX, 1, wxALL, 5 );

	m_slider_rotationX = new wxSlider( this, wxID_ANY, 0, 0, 359, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_rotationX->Add( m_slider_rotationX, 0, wxALL, 5 );

	m_staticText_rotationX_value = new wxStaticText( this, wxID_ANY, wxT("0     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationX_value->Wrap( -1 );
	bSizer_rotationX->Add( m_staticText_rotationX_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_rotationX, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_rotationY;
	bSizer_rotationY = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_rotationY = new wxStaticText( this, wxID_ANY, wxT("Obrot Y :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationY->Wrap( -1 );
	bSizer_rotationY->Add( m_staticText_rotationY, 1, wxALL, 5 );

	m_slider_rotationY = new wxSlider( this, wxID_ANY, 0, 0, 359, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_rotationY->Add( m_slider_rotationY, 0, wxALL, 5 );

	m_staticText_rotationY_value = new wxStaticText( this, wxID_ANY, wxT("0     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationY_value->Wrap( -1 );
	bSizer_rotationY->Add( m_staticText_rotationY_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_rotationY, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_rotationZ;
	bSizer_rotationZ = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_rotationZ = new wxStaticText( this, wxID_ANY, wxT("Obrot Z :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationZ->Wrap( -1 );
	bSizer_rotationZ->Add( m_staticText_rotationZ, 1, wxALL, 5 );

	m_slider_rotationZ = new wxSlider( this, wxID_ANY, 0, 0, 359, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_rotationZ->Add( m_slider_rotationZ, 0, wxALL, 5 );

	m_staticText_rotationZ_value = new wxStaticText( this, wxID_ANY, wxT("0     "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_rotationZ_value->Wrap( -1 );
	bSizer_rotationZ->Add( m_staticText_rotationZ_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_rotationZ, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_translationX;
	bSizer_translationX = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_tranlsationX = new wxStaticText( this, wxID_ANY, wxT("Translacja X :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_tranlsationX->Wrap( -1 );
	bSizer_translationX->Add( m_staticText_tranlsationX, 1, wxALL, 5 );

	m_slider_translationX = new wxSlider( this, wxID_ANY, 0, -300, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_translationX->Add( m_slider_translationX, 0, wxALL, 5 );

	m_staticText_translationX_value = new wxStaticText( this, wxID_ANY, wxT("0.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_translationX_value->Wrap( -1 );
	bSizer_translationX->Add( m_staticText_translationX_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_translationX, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_translationY;
	bSizer_translationY = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_translationY = new wxStaticText( this, wxID_ANY, wxT("Translacja Y :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_translationY->Wrap( -1 );
	bSizer_translationY->Add( m_staticText_translationY, 1, wxALL, 5 );

	m_slider_translationY = new wxSlider( this, wxID_ANY, 0, -300, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_translationY->Add( m_slider_translationY, 0, wxALL, 5 );

	m_staticText_translationY_value = new wxStaticText( this, wxID_ANY, wxT("0.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_translationY_value->Wrap( -1 );
	bSizer_translationY->Add( m_staticText_translationY_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_translationY, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_translationZ;
	bSizer_translationZ = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_translationZ = new wxStaticText( this, wxID_ANY, wxT("Translacja Z :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_translationZ->Wrap( -1 );
	bSizer_translationZ->Add( m_staticText_translationZ, 1, wxALL, 5 );

	m_slider_translationZ = new wxSlider( this, wxID_ANY, 0, -300, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_translationZ->Add( m_slider_translationZ, 0, wxALL, 5 );

	m_staticText_translationZ_value = new wxStaticText( this, wxID_ANY, wxT("0.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_translationZ_value->Wrap( -1 );
	bSizer_translationZ->Add( m_staticText_translationZ_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_translationZ, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_scaleX;
	bSizer_scaleX = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_scaleX = new wxStaticText( this, wxID_ANY, wxT("Skala X :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleX->Wrap( -1 );
	bSizer_scaleX->Add( m_staticText_scaleX, 1, wxALL, 5 );

	m_slider_scaleX = new wxSlider( this, wxID_ANY, 100, 1, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_scaleX->Add( m_slider_scaleX, 0, wxALL, 5 );

	m_staticText_scaleX_value = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleX_value->Wrap( -1 );
	bSizer_scaleX->Add( m_staticText_scaleX_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_scaleX, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_scaleY;
	bSizer_scaleY = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_scaleY = new wxStaticText( this, wxID_ANY, wxT("Skala Y :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleY->Wrap( -1 );
	bSizer_scaleY->Add( m_staticText_scaleY, 1, wxALL, 5 );

	m_slider_scaleY = new wxSlider( this, wxID_ANY, 100, 1, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_scaleY->Add( m_slider_scaleY, 0, wxALL, 5 );

	m_staticText_scaleY_value = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleY_value->Wrap( -1 );
	bSizer_scaleY->Add( m_staticText_scaleY_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_scaleY, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_scaleZ;
	bSizer_scaleZ = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_scaleZ = new wxStaticText( this, wxID_ANY, wxT("Skala Z :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleZ->Wrap( -1 );
	bSizer_scaleZ->Add( m_staticText_scaleZ, 1, wxALL, 5 );

	m_slider_scaleZ = new wxSlider( this, wxID_ANY, 100, 1, 300, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_scaleZ->Add( m_slider_scaleZ, 0, wxALL, 5 );

	m_staticText_scaleZ_value = new wxStaticText( this, wxID_ANY, wxT("1.00"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_scaleZ_value->Wrap( -1 );
	bSizer_scaleZ->Add( m_staticText_scaleZ_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_scaleZ, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_spacing;
	bSizer_spacing = new wxBoxSizer( wxHORIZONTAL );

	m_staticText_spacing = new wxStaticText( this, wxID_ANY, wxT("Rozstawienie :"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_spacing->Wrap( -1 );
	bSizer_spacing->Add( m_staticText_spacing, 1, wxALL, 5 );

	m_slider_spacing = new wxSlider( this, wxID_ANY, 50, 0, 100, wxDefaultPosition, wxDefaultSize, wxSL_HORIZONTAL );
	bSizer_spacing->Add( m_slider_spacing, 0, wxALL, 5 );

	m_staticText_spacing_value = new wxStaticText( this, wxID_ANY, wxT("5.0 "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText_spacing_value->Wrap( -1 );
	bSizer_spacing->Add( m_staticText_spacing_value, 0, wxALL, 5 );


	bSizer_interface->Add( bSizer_spacing, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer_colors;
	bSizer_colors = new wxBoxSizer( wxHORIZONTAL );

	m_button_color_one = new wxButton( this, wxID_ANY, wxT("Kolor pierwszy"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_colors->Add( m_button_color_one, 1, wxALL, 5 );

	m_button_color_two = new wxButton( this, wxID_ANY, wxT("Kolor drugi"), wxDefaultPosition, wxDefaultSize, 0 );

	m_button_color_two->SetBitmapPosition( wxRIGHT );
	bSizer_colors->Add( m_button_color_two, 1, wxALL, 5 );


	bSizer_interface->Add( bSizer_colors, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_animate;
	bSizer_animate = new wxBoxSizer( wxVERTICAL );

	m_button_animate = new wxButton( this, wxID_ANY, wxT("Animacja"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer_animate->Add( m_button_animate, 1, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );


	bSizer_interface->Add( bSizer_animate, 0, wxEXPAND, 5 );


	bSizer_main->Add( bSizer_interface, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer_panel;
	bSizer_panel = new wxBoxSizer( wxVERTICAL );

	m_panel = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	m_panel->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNHIGHLIGHT ) );

	bSizer_panel->Add( m_panel, 1, wxEXPAND | wxALL, 5 );


	bSizer_main->Add( bSizer_panel, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer_main );
	this->Layout();
	m_timer.SetOwner( this, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	m_button_loadfile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_loadfileOnButtonClick ), NULL, this );
	m_button_savefile->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_savefileOnButtonClick ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Connect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_button_color_one->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_color_oneOnButtonClick ), NULL, this );
	m_button_color_two->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_color_twoOnButtonClick ), NULL, this );
	m_button_animate->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_animateOnButtonClick ), NULL, this );
	m_panel->Connect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::m_panelOnSize ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MyFrame1::m_timerOnTimer ) );
}

MyFrame1::~MyFrame1()
{
	// Disconnect Events
	m_button_loadfile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_loadfileOnButtonClick ), NULL, this );
	m_button_savefile->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_savefileOnButtonClick ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationXOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationYOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_rotationZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_rotationZOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationXOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationYOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_translationZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_translationZOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleX->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleXOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleY->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleYOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_scaleZ->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_scaleZOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_TOP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_BOTTOM, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_LINEUP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_LINEDOWN, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_PAGEUP, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_PAGEDOWN, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_THUMBTRACK, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_THUMBRELEASE, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_slider_spacing->Disconnect( wxEVT_SCROLL_CHANGED, wxScrollEventHandler( MyFrame1::m_slider_spacingOnScroll ), NULL, this );
	m_button_color_one->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_color_oneOnButtonClick ), NULL, this );
	m_button_color_two->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_color_twoOnButtonClick ), NULL, this );
	m_button_animate->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( MyFrame1::m_button_animateOnButtonClick ), NULL, this );
	m_panel->Disconnect( wxEVT_SIZE, wxSizeEventHandler( MyFrame1::m_panelOnSize ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( MyFrame1::m_timerOnTimer ) );

}
