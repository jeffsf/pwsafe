/// \file CryptKeyEntry.cpp
//-----------------------------------------------------------------------------

#include "stdafx.h"
#include "PasswordSafe.h"
#include "PwsPlatform.h"

#include "ThisMfcApp.h"
#if defined(POCKET_PC)
  #include "pocketpc/resource.h"
  #include "pocketpc/PocketPC.h"
#else
  #include "resource.h"
#endif
#include "util.h"

#include "CryptKeyEntry.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


//-----------------------------------------------------------------------------
CCryptKeyEntry::CCryptKeyEntry(CWnd* pParent)
   : super(CCryptKeyEntry::IDD, pParent)
{
   m_cryptkey1 = "";
   m_cryptkey2 = "";
}


void CCryptKeyEntry::DoDataExchange(CDataExchange* pDX)
{
   super::DoDataExchange(pDX);
   DDX_Text(pDX, IDC_CRYPTKEY1, (CString &)m_cryptkey1);
   DDX_Text(pDX, IDC_CRYPTKEY2, (CString &)m_cryptkey2);
}


BEGIN_MESSAGE_MAP(CCryptKeyEntry, super)
   ON_BN_CLICKED(ID_HELP, OnHelp)
END_MESSAGE_MAP()


void
CCryptKeyEntry::OnCancel() 
{
   app.m_pMainWnd = NULL;
   super::OnCancel();
}


void
CCryptKeyEntry::OnOK()
{
   UpdateData(TRUE);

   if (m_cryptkey1 != m_cryptkey2)
   {
      AfxMessageBox(_T("The two entries do not match."));
      ((CEdit*)GetDlgItem(IDC_CRYPTKEY2))->SetFocus();
      return;
   }
   if (m_cryptkey1 == "")
   {
      AfxMessageBox(_T("Please enter the key and verify it."));
      ((CEdit*)GetDlgItem(IDC_CRYPTKEY1))->SetFocus();
      return;
   }

   app.m_pMainWnd = NULL;
   super::OnOK();
}


void
CCryptKeyEntry::OnHelp() 
{
#if defined(POCKET_PC)
	CreateProcess( _T("PegHelp.exe"), _T("pws_ce_help.html#comboentry"), NULL, NULL, FALSE, 0, NULL, NULL, NULL, NULL );
#else
   //WinHelp(0x20084, HELP_CONTEXT);
   ::HtmlHelp(NULL,
              "pwsafe.chm::/html/pws_combo_entry.htm",
              HH_DISPLAY_TOPIC, 0);
#endif
}
//-----------------------------------------------------------------------------
//-----------------------------------------------------------------------------
