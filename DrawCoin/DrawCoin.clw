; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDrawCoinView
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "DrawCoin.h"
LastPage=0

ClassCount=5
Class1=CDrawCoinApp
Class2=CDrawCoinDoc
Class3=CDrawCoinView
Class4=CMainFrame

ResourceCount=2
Resource1=IDR_MAINFRAME
Class5=CAboutDlg
Resource2=IDD_ABOUTBOX

[CLS:CDrawCoinApp]
Type=0
HeaderFile=DrawCoin.h
ImplementationFile=DrawCoin.cpp
Filter=N
LastObject=CDrawCoinApp

[CLS:CDrawCoinDoc]
Type=0
HeaderFile=DrawCoinDoc.h
ImplementationFile=DrawCoinDoc.cpp
Filter=N
BaseClass=CDocument
VirtualFilter=DC
LastObject=CDrawCoinDoc

[CLS:CDrawCoinView]
Type=0
HeaderFile=DrawCoinView.h
ImplementationFile=DrawCoinView.cpp
Filter=C
LastObject=CDrawCoinView
BaseClass=CView
VirtualFilter=VWC


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T




[CLS:CAboutDlg]
Type=0
HeaderFile=DrawCoin.cpp
ImplementationFile=DrawCoin.cpp
Filter=D
LastObject=CAboutDlg

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_FILE_SAVE_AS
Command5=ID_FILE_PRINT
Command6=ID_FILE_PRINT_PREVIEW
Command7=ID_FILE_PRINT_SETUP
Command8=ID_FILE_MRU_FILE1
Command9=ID_APP_EXIT
Command10=ID_EDIT_UNDO
Command11=ID_EDIT_CUT
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_VIEW_TOOLBAR
Command15=ID_VIEW_STATUS_BAR
Command16=ID_COIN_ADD
Command17=ID_COIN_SUB
Command18=ID_APP_ABOUT
CommandCount=18

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_COIN_ADD
Command2=ID_COIN_SUB
Command3=ID_EDIT_COPY
Command4=ID_FILE_NEW
Command5=ID_FILE_OPEN
Command6=ID_FILE_PRINT
Command7=ID_FILE_SAVE
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_UNDO
Command10=ID_EDIT_CUT
Command11=ID_NEXT_PANE
Command12=ID_PREV_PANE
Command13=ID_EDIT_COPY
Command14=ID_EDIT_PASTE
Command15=ID_EDIT_CUT
Command16=ID_EDIT_UNDO
CommandCount=16

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_COIN_ADD
Command5=ID_COIN_SUB
Command6=ID_EDIT_CUT
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_FILE_PRINT
Command10=ID_APP_ABOUT
CommandCount=10

