/*
 * Copyright (c) 2003-2009 Rony Shapiro <ronys@users.sourceforge.net>.
 * All rights reserved. Use of the code is allowed under the
 * Artistic License 2.0 terms, as specified in the LICENSE file
 * distributed with this code, or available from
 * http://www.opensource.org/licenses/artistic-license-2.0.php
 */
#ifndef __safecombinationentry_H
#define __safecombinationentry_H
/** \file
* 
*/

#endif /* __safecombinationentry_H */

// Generated by DialogBlocks (unregistered), Sun 18 Jan 2009 09:22:13 PM IST

#ifndef _SAFECOMBINATIONENTRY_H_
#define _SAFECOMBINATIONENTRY_H_


/*!
 * Includes
 */

////@begin includes
////@end includes

/*!
 * Forward declarations
 */

////@begin forward declarations
////@end forward declarations

/*!
 * Control identifiers
 */

////@begin control identifiers
#define ID_CSAFECOMBINATIONENTRY 10000
#define ID_DBASECOMBOBOX 10002
#define ID_ELLIPSIS 10003
#define ID_PASSWORD 10004
#define ID_CHECKBOX 10005
#define ID_NEWDB 10006
#define SYMBOL_CSAFECOMBINATIONENTRY_STYLE wxCAPTION|wxRESIZE_BORDER|wxSYSTEM_MENU|wxCLOSE_BOX|wxDIALOG_MODAL|wxTAB_TRAVERSAL
#define SYMBOL_CSAFECOMBINATIONENTRY_TITLE _("Safe Combination Entry")
#define SYMBOL_CSAFECOMBINATIONENTRY_IDNAME ID_CSAFECOMBINATIONENTRY
#define SYMBOL_CSAFECOMBINATIONENTRY_SIZE wxSize(400, 300)
#define SYMBOL_CSAFECOMBINATIONENTRY_POSITION wxDefaultPosition
////@end control identifiers


/*!
 * CSafeCombinationEntry class declaration
 */

class CSafeCombinationEntry: public wxDialog
{    
  DECLARE_DYNAMIC_CLASS( CSafeCombinationEntry )
  DECLARE_EVENT_TABLE()

public:
  /// Constructors
  CSafeCombinationEntry();
  CSafeCombinationEntry( wxWindow* parent, wxWindowID id = SYMBOL_CSAFECOMBINATIONENTRY_IDNAME, const wxString& caption = SYMBOL_CSAFECOMBINATIONENTRY_TITLE, const wxPoint& pos = SYMBOL_CSAFECOMBINATIONENTRY_POSITION, const wxSize& size = SYMBOL_CSAFECOMBINATIONENTRY_SIZE, long style = SYMBOL_CSAFECOMBINATIONENTRY_STYLE );

  /// Creation
  bool Create( wxWindow* parent, wxWindowID id = SYMBOL_CSAFECOMBINATIONENTRY_IDNAME, const wxString& caption = SYMBOL_CSAFECOMBINATIONENTRY_TITLE, const wxPoint& pos = SYMBOL_CSAFECOMBINATIONENTRY_POSITION, const wxSize& size = SYMBOL_CSAFECOMBINATIONENTRY_SIZE, long style = SYMBOL_CSAFECOMBINATIONENTRY_STYLE );

  /// Destructor
  ~CSafeCombinationEntry();

  /// Initialises member variables
  void Init();

  /// Creates the controls and sizers
  void CreateControls();

////@begin CSafeCombinationEntry event handler declarations

  /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_OK
  void OnOk( wxCommandEvent& event );

  /// wxEVT_COMMAND_BUTTON_CLICKED event handler for wxID_CANCEL
  void OnCancel( wxCommandEvent& event );

////@end CSafeCombinationEntry event handler declarations

////@begin CSafeCombinationEntry member function declarations

  /// Retrieves bitmap resources
  wxBitmap GetBitmapResource( const wxString& name );

  /// Retrieves icon resources
  wxIcon GetIconResource( const wxString& name );
////@end CSafeCombinationEntry member function declarations

  /// Should we show tooltips?
  static bool ShowToolTips();

////@begin CSafeCombinationEntry member variables
  wxComboBox* m_filename;
  wxTextCtrl* m_password;
////@end CSafeCombinationEntry member variables
};

#endif
  // _SAFECOMBINATIONENTRY_H_
