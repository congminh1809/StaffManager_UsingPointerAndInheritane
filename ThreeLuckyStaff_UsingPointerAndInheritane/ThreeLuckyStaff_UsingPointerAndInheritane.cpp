// ThreeLuckyStaff_UsingPointerAndInheritane.cpp 
#include <iostream>
#include <string>
using namespace std;

/* KHAI BÁO CẤU TRÚC CLASS CHA - LỚP CƠ SỞ */
class NhanVien
{
protected:
    string hoten;
    int tuoi;
    string gioi_tinh;
    string dia_chi;
    string sdt;
    float chieu_cao;
    float can_nang;

public:
    void Nhap();
    void Xuat();

    NhanVien();
    ~NhanVien();
};




int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

