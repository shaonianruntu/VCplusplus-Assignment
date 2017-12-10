; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CRadius
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Mysdi.h"
LastPage=0

ClassCount=6
Class1=CMysdiApp
Class2=CMysdiDoc
Class3=CMysdiView
Class4=CMainFrame

ResourceCount=3
Resource1=IDR_MAINFRAME
Resource2=IDD_ABOUTBOX
Class5=CAboutDlg
Class6=CRadius
Resource3=IDD_RADIUSDLG

[CLS:CMysdiApp]
Type=0
HeaderFile=Mysdi.h
ImplementationFile=Mysdi.cpp
Filter=N

[CLS:CMysdiDoc]
Type=0
HeaderFile=MysdiDoc.h
ImplementationFile=MysdiDoc.cpp
Filter=N

[CLS:CMysdiView]
Type=0
HeaderFile=MysdiView.h
ImplementationFile=MysdiView.cpp
Filter=C
BaseClass=CView
VirtualFilter=VWC
LastObject=CMysdiView


[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
LastObject=ID_EDIT_RADIUS




[CLS:CAboutDlg]
Type=0
HeaderFile=Mysdi.cpp
ImplementationFile=Mysdi.cpp
Filter=D

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
Command14=ID_EDIT_RADIUS
Command15=ID_VIEW_TOOLBAR
Command16=ID_VIEW_STATUS_BAR
Command17=ID_APP_ABOUT
CommandCount=17

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_EDIT_RADIUS
Command2=ID_EDIT_COPY
Command3=ID_FILE_NEW
Command4=ID_FILE_OPEN
Command5=ID_FILE_PRINT
Command6=ID_FILE_SAVE
Command7=ID_EDIT_PASTE
Command8=ID_EDIT_UNDO
Command9=ID_EDIT_CUT
Command10=ID_NEXT_PANE
Command11=ID_PREV_PANE
Command12=ID_EDIT_COPY
Command13=ID_EDIT_PASTE
Command14=ID_EDIT_CUT
Command15=ID_EDIT_UNDO
CommandCount=15

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_FILE_NEW
Command2=ID_FILE_OPEN
Command3=ID_FILE_SAVE
Command4=ID_EDIT_CUT
Command5=ID_EDIT_COPY
Command6=ID_EDIT_PASTE
Command7=ID_EDIT_RADIUS
Command8=ID_FILE_PRINT
Command9=ID_APP_ABOUT
CommandCount=9

[DLG:IDD_RADIUSDLG]
Type=1
Class=CRadius
ControlCount=4
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352
Control4=IDC_EDIT_RADIUS,edit,1350631552

[CLS:CRadius]
Type=0
HeaderFile=Radius.h
ImplementationFile=Radius.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_EDIT_RADIUS
VirtualFilter=dWC

