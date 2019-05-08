///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Apr 22 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ShipDrivergui.h"

///////////////////////////////////////////////////////////////////////////

ShipDriverBase::ShipDriverBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxSize( 300,250 ), wxSize( -1,-1 ) );
	this->SetFont( wxFont( 10, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	this->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );

	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );

	m_bpPlay = new wxButton( this, wxID_ANY, _("Start"), wxDefaultPosition, wxSize( -1,-1 ), 0 );
	m_bpPlay->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_bpPlay->SetForegroundColour( wxColour( 8, 51, 13 ) );
	m_bpPlay->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_bpPlay->SetToolTip( _("Press here to start loading grib and simulator") );

	bSizer10->Add( m_bpPlay, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_bpStop = new wxButton( this, wxID_ANY, _("Stop"), wxDefaultPosition, wxDefaultSize, 0 );
	m_bpStop->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_bpStop->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_bpStop->SetToolTip( _("Press here to stop the simulator") );

	bSizer10->Add( m_bpStop, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	wxFlexGridSizer* fgSizer82;
	fgSizer82 = new wxFlexGridSizer( 3, 4, 0, 0 );
	fgSizer82->AddGrowableCol( 0 );
	fgSizer82->AddGrowableCol( 1 );
	fgSizer82->AddGrowableCol( 2 );
	fgSizer82->AddGrowableCol( 3 );
	fgSizer82->AddGrowableRow( 0 );
	fgSizer82->AddGrowableRow( 1 );
	fgSizer82->SetFlexibleDirection( wxVERTICAL );
	fgSizer82->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_buttonStandby = new wxButton( this, wxID_ANY, _("Stby"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonStandby->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonStandby->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_buttonStandby->SetToolTip( _("Manual ") );
	m_buttonStandby->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonStandby, 1, wxALL|wxEXPAND, 2 );

	m_buttonAuto = new wxButton( this, wxID_ANY, _("Auto"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonAuto->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonAuto->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_buttonAuto->SetToolTip( _("Autopilot Control") );
	m_buttonAuto->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonAuto, 1, wxALL|wxEXPAND, 2 );

	m_button7 = new wxButton( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	m_button7->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_button7->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_button7, 1, wxALL|wxEXPAND, 2 );

	m_buttonWind = new wxButton( this, wxID_ANY, _("Sail"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonWind->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonWind->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_buttonWind->SetToolTip( _("Using Sail") );
	m_buttonWind->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonWind, 1, wxALL|wxEXPAND, 2 );

	m_buttonMinus1 = new wxButton( this, wxID_ANY, _("-1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMinus1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMinus1->SetToolTip( _("AP Set Value -1") );
	m_buttonMinus1->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonMinus1, 1, wxALL|wxEXPAND, 2 );

	m_buttonMinus10 = new wxButton( this, wxID_ANY, _("-10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMinus10->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMinus10->SetToolTip( _("AP Set Value -10") );
	m_buttonMinus10->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonMinus10, 1, wxALL|wxEXPAND, 2 );

	m_buttonPlus10 = new wxButton( this, wxID_ANY, _("+10"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPlus10->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonPlus10->SetToolTip( _("AP Set Value +10") );
	m_buttonPlus10->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonPlus10, 1, wxALL|wxEXPAND, 2 );

	m_buttonPlus1 = new wxButton( this, wxID_ANY, _("+1"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonPlus1->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonPlus1->SetToolTip( _("AP Set Value +1") );
	m_buttonPlus1->SetMinSize( wxSize( 50,-1 ) );

	fgSizer82->Add( m_buttonPlus1, 1, wxALL|wxEXPAND, 2 );


	bSizer10->Add( fgSizer82, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer14;
	bSizer14 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxHORIZONTAL );

	m_SliderRudder = new wxSlider( this, wxID_ANY, 35, 0, 70, wxDefaultPosition, wxSize( 300,-1 ), wxSL_AUTOTICKS|wxSL_BOTH|wxSL_HORIZONTAL );
	m_SliderRudder->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_WINDOW ) );
	m_SliderRudder->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_SliderRudder->SetToolTip( _("Rudder Slider Control") );

	bSizer13->Add( m_SliderRudder, 1, wxALIGN_CENTER_VERTICAL|wxALL, 5 );


	bSizer14->Add( bSizer13, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	wxBoxSizer* bSizer131;
	bSizer131 = new wxBoxSizer( wxHORIZONTAL );


	bSizer131->Add( 0, 0, 1, wxEXPAND, 5 );

	m_textCtrlRudderPort = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_CENTER|wxBORDER_RAISED|wxBORDER_SUNKEN );
	m_textCtrlRudderPort->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrlRudderPort->SetToolTip( _("Port Rudder Angle Value") );

	bSizer131->Add( m_textCtrlRudderPort, 0, wxALIGN_CENTER_VERTICAL|wxALIGN_RIGHT, 0 );

	m_buttonMid = new wxButton( this, wxID_ANY, _(">|<"), wxDefaultPosition, wxDefaultSize, 0 );
	m_buttonMid->SetFont( wxFont( 11, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_buttonMid->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );
	m_buttonMid->SetToolTip( _("Centre Rudder Midships") );

	bSizer131->Add( m_buttonMid, 0, wxALIGN_CENTER_VERTICAL|wxALL, 2 );

	m_textCtrlRudderStbd = new wxTextCtrl( this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_READONLY|wxTE_CENTER|wxBORDER_SUNKEN );
	m_textCtrlRudderStbd->SetFont( wxFont( 13, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_textCtrlRudderStbd->SetToolTip( _("Starboard Rudder Angle Value") );

	bSizer131->Add( m_textCtrlRudderStbd, 0, wxALIGN_BOTTOM|wxALIGN_CENTER_VERTICAL, 0 );


	bSizer131->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer6->Add( bSizer131, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer16;
	bSizer16 = new wxBoxSizer( wxHORIZONTAL );


	bSizer16->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer6->Add( bSizer16, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxHORIZONTAL );


	bSizer7->Add( 0, 0, 1, wxEXPAND, 5 );

	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );


	bSizer7->Add( bSizer11, 1, wxEXPAND, 5 );

	m_stHeading = new wxStaticText( this, wxID_ANY, _("000"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stHeading->Wrap( -1 );
	m_stHeading->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stHeading->SetToolTip( _("Vessel Heading") );

	bSizer7->Add( m_stHeading, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_staticTextKnots = new wxStaticText( this, wxID_ANY, _("Deg True     Speed: "), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticTextKnots->Wrap( -1 );
	m_staticTextKnots->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer7->Add( m_staticTextKnots, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_stSpeed = new wxStaticText( this, wxID_ANY, _("000.0"), wxDefaultPosition, wxDefaultSize, 0 );
	m_stSpeed->Wrap( -1 );
	m_stSpeed->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_stSpeed->SetToolTip( _("Log Speed") );

	bSizer7->Add( m_stSpeed, 0, wxALIGN_CENTER_VERTICAL, 5 );

	m_staticText81 = new wxStaticText( this, wxID_ANY, _(" Knots (SOG)"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText81->Wrap( -1 );
	m_staticText81->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer7->Add( m_staticText81, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0 );


	bSizer7->Add( 0, 0, 1, wxEXPAND, 5 );

	m_staticline1 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	bSizer7->Add( m_staticline1, 0, wxEXPAND | wxALL, 5 );


	bSizer6->Add( bSizer7, 1, wxEXPAND|wxALIGN_BOTTOM|wxALIGN_CENTER_HORIZONTAL, 5 );


	bSizer14->Add( bSizer6, 1, wxEXPAND|wxALIGN_CENTER_VERTICAL, 5 );


	bSizer10->Add( bSizer14, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );

	m_staticText7 = new wxStaticText( this, wxID_ANY, _("Vessel"), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText7->Wrap( -1 );
	m_staticText7->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer12->Add( m_staticText7, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_SliderSpeed = new wxSlider( this, wxID_ANY, 0, -50, 250, wxPoint( -1,-1 ), wxSize( -1,200 ), wxSL_AUTOTICKS|wxSL_BOTH|wxSL_INVERSE|wxSL_LEFT|wxSL_MIN_MAX_LABELS|wxSL_VALUE_LABEL|wxSL_VERTICAL|wxBORDER_DEFAULT );
	m_SliderSpeed->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_SliderSpeed->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_MENU ) );
	m_SliderSpeed->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_BTNSHADOW ) );
	m_SliderSpeed->SetToolTip( _("Speed (Knots)") );
	m_SliderSpeed->SetMinSize( wxSize( -1,200 ) );

	bSizer12->Add( m_SliderSpeed, 1, wxALIGN_CENTER_VERTICAL|wxRIGHT, 5 );

	m_staticText8 = new wxStaticText( this, wxID_ANY, _("Speed    "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
	m_staticText8->Wrap( -1 );
	m_staticText8->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );
	m_staticText8->SetToolTip( _("Maximum simulation Speed") );

	bSizer12->Add( m_staticText8, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	m_staticline2 = new wxStaticLine( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_HORIZONTAL );
	m_staticline2->SetForegroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_HIGHLIGHTTEXT ) );
	m_staticline2->SetBackgroundColour( wxSystemSettings::GetColour( wxSYS_COLOUR_3DDKSHADOW ) );

	bSizer12->Add( m_staticline2, 0, wxEXPAND | wxALL, 5 );


	bSizer12->Add( 0, 0, 1, wxEXPAND, 5 );


	bSizer10->Add( bSizer12, 1, wxEXPAND, 5 );

	m_staticText71 = new wxStaticText( this, wxID_ANY, _("                       Rudder Angle Feedback Indicator  "), wxDefaultPosition, wxDefaultSize, wxALIGN_CENTER_HORIZONTAL );
	m_staticText71->Wrap( -1 );
	m_staticText71->SetFont( wxFont( 12, wxFONTFAMILY_SWISS, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxT("Arial") ) );

	bSizer10->Add( m_staticText71, 0, wxALL, 5 );

	wxBoxSizer* bSizer92;
	bSizer92 = new wxBoxSizer( wxHORIZONTAL );

	wxBoxSizer* bSizer111;
	bSizer111 = new wxBoxSizer( wxVERTICAL );


	bSizer92->Add( bSizer111, 1, wxEXPAND, 5 );

	m_gaugeRudderPort = new wxGauge( this, wxID_ANY, 45, wxDefaultPosition, wxSize( -1,-1 ), wxGA_HORIZONTAL );
	m_gaugeRudderPort->SetValue( 0 );
	m_gaugeRudderPort->SetForegroundColour( wxColour( 251, 0, 7 ) );
	m_gaugeRudderPort->SetBackgroundColour( wxColour( 190, 0, 0 ) );
	m_gaugeRudderPort->SetToolTip( _("Port RSA ") );

	bSizer92->Add( m_gaugeRudderPort, 1, wxALIGN_RIGHT|wxBOTTOM|wxEXPAND|wxTOP, 5 );

	m_gaugeRudderStbd = new wxGauge( this, wxID_ANY, 45, wxDefaultPosition, wxSize( -1,-1 ), wxGA_HORIZONTAL );
	m_gaugeRudderStbd->SetValue( 0 );
	m_gaugeRudderStbd->SetForegroundColour( wxColour( 35, 255, 10 ) );
	m_gaugeRudderStbd->SetBackgroundColour( wxColour( 11, 84, 1 ) );
	m_gaugeRudderStbd->SetToolTip( _("Starboard RSA ") );

	bSizer92->Add( m_gaugeRudderStbd, 1, wxBOTTOM|wxEXPAND|wxTOP, 5 );


	bSizer10->Add( bSizer92, 0, wxEXPAND, 5 );


	bSizer10->Add( 0, 0, 1, wxEXPAND, 5 );


	this->SetSizer( bSizer10 );
	this->Layout();
	m_timer1.SetOwner( this, wxID_ANY );

	this->Centre( wxBOTH );

	// Connect Events
	this->Connect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ShipDriverBase::OnClose ) );
	m_bpPlay->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStart ), NULL, this );
	m_bpStop->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStop ), NULL, this );
	m_buttonStandby->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStandby ), NULL, this );
	m_buttonAuto->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnAuto ), NULL, this );
	m_buttonWind->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnWind ), NULL, this );
	m_buttonMinus1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMinus1 ), NULL, this );
	m_buttonMinus10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMinus10 ), NULL, this );
	m_buttonPlus10->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnPlus10 ), NULL, this );
	m_buttonPlus1->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnPlus1 ), NULL, this );
	m_buttonMid->Connect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMidships ), NULL, this );
	this->Connect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( ShipDriverBase::OnTimer ) );
}

ShipDriverBase::~ShipDriverBase()
{
	// Disconnect Events
	this->Disconnect( wxEVT_CLOSE_WINDOW, wxCloseEventHandler( ShipDriverBase::OnClose ) );
	m_bpPlay->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStart ), NULL, this );
	m_bpStop->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStop ), NULL, this );
	m_buttonStandby->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnStandby ), NULL, this );
	m_buttonAuto->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnAuto ), NULL, this );
	m_buttonWind->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnWind ), NULL, this );
	m_buttonMinus1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMinus1 ), NULL, this );
	m_buttonMinus10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMinus10 ), NULL, this );
	m_buttonPlus10->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnPlus10 ), NULL, this );
	m_buttonPlus1->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnPlus1 ), NULL, this );
	m_buttonMid->Disconnect( wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler( ShipDriverBase::OnMidships ), NULL, this );
	this->Disconnect( wxID_ANY, wxEVT_TIMER, wxTimerEventHandler( ShipDriverBase::OnTimer ) );

}

shipdriverPreferences::shipdriverPreferences( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxStaticBoxSizer* sbSizer1;
	sbSizer1 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, _("AIS") ), wxVERTICAL );

	wxFlexGridSizer* fgSizer2;
	fgSizer2 = new wxFlexGridSizer( 0, 1, 0, 0 );
	fgSizer2->SetFlexibleDirection( wxBOTH );
	fgSizer2->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_cbTransmitAis = new wxCheckBox( sbSizer1->GetStaticBox(), wxID_ANY, _("Transmit"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_cbTransmitAis, 0, wxALL, 5 );

	m_cbAisToFile = new wxCheckBox( sbSizer1->GetStaticBox(), wxID_ANY, _("Save to file"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer2->Add( m_cbAisToFile, 0, wxALL, 5 );


	sbSizer1->Add( fgSizer2, 1, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( sbSizer1->GetStaticBox(), wxID_ANY, _("MMSI") ), wxVERTICAL );

	m_textCtrlMMSI = new wxTextCtrl( sbSizer2->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer2->Add( m_textCtrlMMSI, 0, wxALL, 5 );


	sbSizer1->Add( sbSizer2, 1, wxEXPAND, 5 );

	m_sdbSizer1 = new wxStdDialogButtonSizer();
	m_sdbSizer1OK = new wxButton( sbSizer1->GetStaticBox(), wxID_OK );
	m_sdbSizer1->AddButton( m_sdbSizer1OK );
	m_sdbSizer1Cancel = new wxButton( sbSizer1->GetStaticBox(), wxID_CANCEL );
	m_sdbSizer1->AddButton( m_sdbSizer1Cancel );
	m_sdbSizer1->Realize();

	sbSizer1->Add( m_sdbSizer1, 1, wxEXPAND, 5 );


	this->SetSizer( sbSizer1 );
	this->Layout();

	this->Centre( wxBOTH );
}

shipdriverPreferences::~shipdriverPreferences()
{
}
