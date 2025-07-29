#include<iostream> //นำเข้าlibrary "iostream"
using namespace std; //เรียกใช้ namespace ใน std

int main (){ //นำเข้าฟังชันหลัก
    int A = 0; //ให้ตัวแปร A มีค่าเริ่มต้นเป็น 0
    cout<<"Please enter a number to A: "<< endl; //แสดงข้อความให้ผู้ใช้ป้อนค่า A
    cin >> A; //รับค่าจากผู้ใช้ แล้วเก็บลงในตัวแปร A

    if(A<5){ //ตรวจสอบว่าถ้า A น้อยกว่า 5
        cout<<"Condition met"<<endl; //แสดงข้อความว่า "Condittion met"
    }
    
    return 0; //คืนค่ากลับเป็น 0 เมื่อสำเร็จ
}