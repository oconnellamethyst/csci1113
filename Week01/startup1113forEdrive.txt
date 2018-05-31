e:
cd \
REM start C:\"Program Files\Mozilla Firefox"\firefox "http://otto.normandale.edu/index.html"
start chrome http://otto.normandale.edu/index.html &

start Y:\Dept\MATHCSCI\POLZIN\Lang\Dev-Cpp\devcpp

xcopy/Y Y:\dept\mathcsci\polzin\1113\notes\*.* "e:\C_C++\*.*" /s
REM xcopy/Y Y:\dept\mathcsci\polzin\1113\startup\startup1113.bat e:\startup1113.bat

start e:\C_C++\C.pdf
start e:\C_C++\AppendixC.pdf

cd \
md \C_C++\examples
cd \C_C++\examples
xcopy/Y "Y:\dept\mathcsci\polzin\1113\examples\*.*" e:\C_C++\examples /e
call setpaths.bat
call gccpath.bat
cmd.exe
