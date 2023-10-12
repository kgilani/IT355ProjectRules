#include <windows.h>

int main(void) {
    HANDLE hHeap = GetProcessHeap();
    if (NULL == hHeap) {
        // Handle error
        return 1;
    }

    // Allocate memory block
    int *pData = (int *)HeapAlloc(hHeap, 0, sizeof(int));
    if (NULL == pData) {
        // Handle allocation error
        return 2;
    }

    // Use pData for some operation...
    *pData = 42;

    // Properly pair allocation and deallocation functions
    BOOL fSuccess = HeapFree(hHeap, 0, pData);
    if (!fSuccess) {
        // Handle deallocation error
        return 3;
    }

    return 0;
}
