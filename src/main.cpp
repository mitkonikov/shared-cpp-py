#include <iostream>
#include <windows.h>
#include <winbase.h>
#define ll long long
#define endl '\n'

using namespace std;

int main() {
    HANDLE handle = OpenFileMappingA(FILE_MAP_READ, TRUE, "love");
    if (handle == NULL) {
        cout << "Couldn't open the memory mapped file." << endl;
        return 0;
    }

    cout << "The file has been opened!" << endl;

    LPVOID view = MapViewOfFile(
        handle,
        FILE_MAP_READ,
        NULL,
        NULL,
        0
    );

    cout << "Contents of the file: " << endl;

    cout << (char*)view << endl;
    return 0;
}