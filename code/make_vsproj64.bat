@set VS_PATH=C:\Program Files (x86)\Microsoft Visual Studio 12.0
@call "%VS_PATH%\VC\bin\amd64\vcvars64.bat"
@set THIRDLIB_PATH=..\..\..\thirdpart
@cd /d %~dp0\
@set TCL_LIBRARY=%THIRDLIB_PATH%\tcl\lib\tcl8.4
@set PATH=%THIRDLIB_PATH%\dll;%PATH%
cmake . -G "Visual Studio 12 2013 Win64"
"%VS_PATH%\Common7\IDE\devenv.exe" ece1782.sln 

