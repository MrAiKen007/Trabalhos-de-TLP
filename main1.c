#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    BOOL rc = ExitWindowsEx(EWX_LOGOFF , 0);
    return 0;
}