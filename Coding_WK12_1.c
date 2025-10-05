#include <stdio.h>

int main() {
    int x = 10;   // กำหนดค่าเริ่มต้น
    int *ptr;     // ประกาศ pointer

    ptr = &x;     // ให้ pointer ชี้ไปที่ตัวแปร x

    // แสดงค่าก่อนเปลี่ยน
    printf("Before: x = %d\n", x);

    // ใช้ pointer เปลี่ยนค่าของ x
    *ptr = 20;

    // แสดงค่าหลังเปลี่ยน
    printf("After: x = %d\n", x);

    return 0;
}