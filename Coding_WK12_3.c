#include <stdio.h>

// ฟังก์ชันคูณทุกค่าของ array ด้วย 2
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // ใช้ pointer เข้าถึงค่าใน array
    }
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = 5;

    // แสดงค่าก่อนเปลี่ยน
    printf("Before: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // เรียกฟังก์ชัน doubleArray()
    doubleArray(a, size);

    // แสดงค่าหลังเปลี่ยน
    printf("After:  ");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}