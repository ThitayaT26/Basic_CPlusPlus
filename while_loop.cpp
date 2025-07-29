#include <iostream> //นำเข้าlibrary "iostream"
using namespace std; //เรียกใช้ namespace ใน std

int main() { //นำเข้าฟังชันหลัก
  
  	// while loop to print numbers from 1 to 5
    int i = 0; //ให้ตัวแปร i เริ่มต้นที่ 0
    while (i < 5) { //ตรวจสอบเงื่อนไขว่า i น้อยกว่า 5 ถเาเป็นจริงให้ทำช้ำจนกว่าจะเท็จ
        cout << "Hi  => i = " << i << endl; //แสดงว่า "Hi => i = " โดยค่า i จะแสดงค่าจากที่ผู้ใช้ป้อน
        i++; //เพิ่มค่า I ทีละ 1
    }

    return 0; //คืนค่ากลับเป็น 0 เมื่อสำเร็จ
}