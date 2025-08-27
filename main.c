#include <windows.h>
#include <stdio.h>

int main() {
    SIZE_T size = 4096;  // 4KB
    void* mem = VirtualAlloc(NULL, size, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (mem == NULL) {
        printf("Allocation failed.\n");
        return 1;
    }
    printf("Allocated memory at: %p\n", mem);

    VirtualFree(mem, 0, MEM_RELEASE);
    return 0;
}
