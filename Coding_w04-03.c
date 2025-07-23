#include <stdio.h>

int main() {
    char nameInitial = 'A';  // ตัวเเปร char เก็บตัวอักษรเดียว 'A'
    int age = 18;            // ตัวเเปร int เก็บจำนวนเต็ม 18
    float weight = 90.3;     // ตัวเเปร float เก็บจำนวนจริง 90.3
    char grade[] = "Male";   // ตัวเเปร char array เก็บข้อความ "Male"

    printf("Name Initial: %c\n", nameInitial); // รหัส %c เเสดงตัวอักษร A
    printf("Age: %d\n", age);                  // รหัส %d เเสดงจำนวนเต็ม 18
    printf("Weight: %.1f\n", weight);          // รหัส %.1f เเสดงจำนวนจริง 1 ตำเเหน่งทศนิยม 90.3
    printf("Grade: %s\n", grade);              // รหัส %s เเสดงข้อความ Male

    return 0;
}