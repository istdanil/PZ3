#include <stdio.h>
#include <Windows.h>

int countNumbers(int r) {
    if (r <= 0) {
        return 0;  
    }
    else if (r == 1) {
        return 2;  
    }
    else {
        int prevCount = 2;  
        int currCount = 2;  

        for (int i = 2; i <= r; i++) {
            int temp = currCount;
            currCount = currCount + prevCount - 1;
            prevCount = temp;
        }

        return currCount;
    }
}

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int r;
    printf("розрядність: ");
    scanf_s("%d", &r);

    int result = countNumbers(r);
    printf("кількість чисел із р розрядів %d: %d\n", r, result);

  
}
