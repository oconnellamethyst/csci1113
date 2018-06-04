C:
cd %USERPROFILE%
REM start C:\"Program Files\Mozilla Firefox"\firefox "http://otto.normandale.edu/index.html"
start chrome http://otto.normandale.edu/index.html &

start Y:\Dept\MATHCSCI\POLZIN\Lang\Dev-Cpp\devcpp

xcopy/Y Y:\dept\mathcsci\polzin\1113\notes\*.* "%USERPROFILE%\C_C++\*.*" /s
REM xcopy/Y Y:\dept\mathcsci\polzin\1113\startup\startup1113.bat %USERPROFILE%\startup1113.bat

start %USERPROFILE%\C_C++\C.pdf
start %USERPROFILE%\C_C++\AppendixC.pdf

cd %USERPROFILE%
md %USERPROFILE%\C_C++\examples
cd %USERPROFILE%\C_C++\examples
xcopy/Y "Y:\dept\mathcsci\polzin\1113\examples\*.*" %USERPROFILE%\C_C++\examples /e
call setpaths.bat
call gccpath.bat
cmd.exe
