#include<iostream> //นำเข้าlibrary "iostream"
using namespace std; //เรียกใช้ namespace ใน std

int main() { //นำเข้าฟังชันหลัก
    int A = 0; //ให้ตัวแปร A มีค่าเริ่มต้นเป็น 0
    cout << "Please enter a number for A: " << endl; //แสดงข้อความให้ผู้ใช้ป้อนค่า A
    cin >> A; //รับค่าจากผู้ใช้ แล้วเก็บลงในตัวแปร A

    if (A == 8) { //ตรวจสอบว่าถ้า A = 8
        cout << "A is 8" << endl; //ให้แสดงข้อความว่า "A is 8"
    } else if (A > 8) { //ตรวจสอบว่าถ้า A มากกว่า 8
        cout << "A is greater than 8" << endl; //ให้แสดงข้อความว่า "A is greater than 8"
    } else { //ถ้าไม่ตรงกับเงื่อนไขทั้งหมด
        cout << "A is less than 8" << endl; //ให้แสดงข้อความว่า "A is less than 8"
    }

    return 0; //คืนค่ากลับเป็น 0 เมื่อสำเร็จ
}