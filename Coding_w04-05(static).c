#include<stdio.h>

void conutCall() {
    static int counter = 0;
    counter++;
    printf("Call Function: Counter = %d\n", counter);
}

int main() {
    printf("Starting function calls...\n");
    conutCall();
    printf("After first call:\n");
    conutCall();
    
    return 0;
}

// ผลลัพธ์ที่ได้: ในฟังก์ชัน conutCall() ตัวแปร counter จะเก็บค่าไว้ระหว่างการเรียกใช้ฟังก์ชัน ทำให้ค่า counter เพิ่มขึ้นทุกครั้งที่เรียกใช้ฟังก์ชัน
// การใช้ static int นำหน้าตัวเเปร counter ในฟังก์ชัน conutCall() จะทำให้ตัวแปร counter เก็บค่าใไว้ในตัวเเปรทุกครั้งที่เรียกใช้ฟังก์ชัน
// สรุป: การใช้ตัวแปรเเบบ static ในฟังก์ชันจะทำให้ค่าของตัวแปรนั้นถูกเก็บไว้ระหว่างการเรียกใช้ฟังก์ชัน ทำให้สามารถนับจำนวนครั้งที่เรียกใช้ฟังก์ชันได้