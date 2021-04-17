#include <windows.h>
#include <string>

int main() {
    HKEY hKey;
    DWORD buffersize = 4;
    DWORD data = 1;
    wchar_t dllPath[] = L"E:\\TestDll.dll";
    LSTATUS res = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"SOFTWARE\\WOW6432Node\\Microsoft\\Windows NT\\CurrentVersion\\Windows", 0, KEY_SET_VALUE, &hKey);
    
	if (ERROR_SUCCESS == res)
    {
        if (RegSetValueExW(hKey, L"LoadAppInit_DLLs", 0, REG_DWORD, (LPBYTE)&data, sizeof(data)))
        {
            RegCloseKey(hKey);
            return FALSE;
        }
        if (RegSetValueExW(hKey, L"AppInit_DLLs", 0, REG_SZ, (LPBYTE)&dllPath, sizeof(dllPath)))
        {
            RegCloseKey(hKey);
            return FALSE;
        }
        RegCloseKey(hKey);
    }
}
