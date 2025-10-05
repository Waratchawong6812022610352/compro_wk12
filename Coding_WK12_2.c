#include <stdio.h>

// ประกาศฟังก์ชัน swap ที่รับ pointer
void swap(int *a, int *b) {
    int temp;     // ตัวแปรชั่วคราว
    temp = *a;    // เก็บค่าของ a ไว้ชั่วคราว
    *a = *b;      // นำค่าของ b มาใส่ใน a
    *b = temp;    // นำค่าชั่วคราวใส่ใน b
}

int main() {
    int a = 5, b = 10;

    // แสดงค่าก่อนสลับ
    printf("Before swap: a = %d, b = %d\n", a, b);

    // เรียกฟังก์ชัน swap โดยส่งที่อยู่ของ a และ b
    swap(&a, &b);

    // แสดงค่าหลังสลับ
    printf("After swap:  a = %d, b = %d\n", a, b);

    return 0;
}