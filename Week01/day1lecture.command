Microsoft Windows [Version 10.0.16299.431]
(c) 2017 Microsoft Corporation. All rights reserved.

C:\Users\qi1569lt>set PATH=%PATH%;C:\Program Files (x86)\Dev-Cpp\MinGW64\bin

C:\Users\qi1569lt>gcc first.c

C:\Users\qi1569lt>a.exe
Hello world!

C:\Users\qi1569lt>gcc incDec.c

C:\Users\qi1569lt>a.exe
i = 7
After postfix ++, i = 8

i = 9
After prefix ++, i = 9

i = 9
After postfix --, i = 8

i = 7
After prefix --, i = 7


C:\Users\qi1569lt>a
i = 7
After postfix ++, i = 8

i = 9
After prefix ++, i = 9

i = 9
After postfix --, i = 8

i = 7
After prefix --, i = 7


C:\Users\qi1569lt>dir *.exe
 Volume in drive C is Windows
 Volume Serial Number is 34FA-B795

 Directory of C:\Users\qi1569lt

05/29/2018  02:30 PM           131,514 a.exe
               1 File(s)        131,514 bytes
               0 Dir(s)  170,252,939,264 bytes free

C:\Users\qi1569lt>gcc -o incDec.exe incDec.c

C:\Users\qi1569lt>dir *.exe
 Volume in drive C is Windows
 Volume Serial Number is 34FA-B795

 Directory of C:\Users\qi1569lt

05/29/2018  02:30 PM           131,514 a.exe
05/29/2018  02:34 PM           131,514 incDec.exe
               2 File(s)        263,028 bytes
               0 Dir(s)  170,333,212,672 bytes free

C:\Users\qi1569lt>