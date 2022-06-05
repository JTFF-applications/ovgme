; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define AppPath "."
#define MyAppName "OvGME Afterburner"
#define MyAppVersion "1.7.5"
#define MyAppPublisher "JTFF"
#define MyAppURL "https://github.com/JTFF-applications/ovgme"
#define MyAppExeName "ovgme.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application. Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{41A18220-F842-4A24-A961-0337FEBCDF3F}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={autopf}\{#MyAppName}
DisableProgramGroupPage=yes
LicenseFile={#AppPath}\gpl-3.0.txt
InfoBeforeFile={#AppPath}\README.md
InfoAfterFile={#AppPath}\CHANGELOG.txt
ArchitecturesInstallIn64BitMode=x64
PrivilegesRequired=admin
OutputDir={#AppPath}\x64\Release\installer
OutputBaseFilename=OvGME_setup_x64
SetupIconFile={#AppPath}\ovgme\res\icon.ico
Compression=lzma
SolidCompression=yes
WizardStyle=modern
UninstallDisplayIcon={app}\icon.ico

[Components]
Name: "help"; Description: "Help Files"; Types: full compact
Name: "help\en"; Description: "English"; Flags: exclusive
Name: "help\fr"; Description: "Français"; Flags: exclusive

[Languages]
Name: "french"; MessagesFile: "compiler:Languages\French.isl"
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "{#AppPath}\x64\Release\{#MyAppExeName}"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#AppPath}\help\fr\ovgme.chm"; DestDir: "{app}"; Flags: ignoreversion; Components: help\fr
Source: "{#AppPath}\help\en\ovgme.chm"; DestDir: "{app}"; Flags: ignoreversion; Components: help\en
Source: "{#AppPath}\CHANGELOG.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#AppPath}\ovgme\res\icon.ico"; DestDir: "{app}"; Flags: ignoreversion
Source: "{#AppPath}\README.md"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent runascurrentuser

[UninstallRun]
Filename: "{app}\{#MyAppExeName}"; Parameters: "/uninstall"

