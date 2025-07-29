#include <iostream> //นำเข้าlibrary "iostream"
using namespace std; //เรียกใช้ namespace ใน std

int main() { //นำเข้าฟังชันหลัก

  	// for loop to print "Hi" 5 times
    for (int i = 0; i < 10; i++) { //เริ่มต้นลูป for โดย i เริ่มจาก 0 ถึง 9
      	cout << "Hi => i = " << i << endl; //แสดงข้อความว่า "Hi => i = " โดยค่า i จะแสดงค่าจากผู้ใช้
    }
  
    return 0; //คืนค่ากลับเป็น 0 เมื่อสำเร็จ
}