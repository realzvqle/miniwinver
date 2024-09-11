#include <windows.h>







void _entry(){
    ShellAboutW(NULL, L"Windows", L"Powered by Mini-Winver!", NULL);
    ExitProcess(0);
}

