// ThreeLuckyStaff_UsingPointerAndInheritane.cpp 
#include <iostream>
#include <string>
using namespace std;


// KHAI BÁO CẤU TRÚC CLASS CHA - LỚP CƠ SỞ 
class NhanVien
{
protected:
	string hoten;
	int tuoi;
	int gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_h_sua;

public:
    void Nhap();
    void Xuat();

    NhanVien();
    ~NhanVien();
};

// Hàm nhập thông tin nhân viên của lớp cha
void NhanVien::Nhap()
{
	cin.ignore();
	cout << endl << " Nhap ho ten: ";
	getline(cin, hoten);

	cout << endl << " Nhap dia chi: ";
	getline(cin, dia_chi);

	cout << endl << " Nhap so dien thoai: ";
	getline(cin, sdt);

	cout << endl << " Nhap gioi tinh(1: Nam,2: Nu,3: Khac): ";
	cin >> gioi_tinh;

	cout << endl << " Nhap tuoi: ";
	cin >> tuoi;

	cout << endl << " Nhap chieu cao(cm): ";
	cin >> chieu_cao;

	cout << endl << " Nhap can nang(kg):";
	cin >> can_nang;
}

// Hàm xuất thông tin nhân viên của lớp cha
void NhanVien::Xuat()
{
	cout << endl << " Ho ten: " << hoten;
	cout << endl << " Tuoi: " << tuoi;
	cout << endl << " Gioi tinh: ";
	if (gioi_tinh == 1)
	{
		cout << " Nam";
	}
	if (gioi_tinh == 2)
	{
		cout << " Nu";
	}
	if (gioi_tinh == 3)
	{
		cout << " Khac";
	}

	cout << endl << " Dia chi: " << dia_chi;
	cout << endl << " So dien thoai: " << sdt;
	cout << endl << " Chieu cao: " << chieu_cao;
	cout << endl << " Can nang: " << can_nang;
}



// KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN SỬA ỐNG NƯỚC KẾ THỪA CLASS CHA NhanVien -Lớp dẫn xuất
class NhanVienSuaOngNuoc : public NhanVien
{
private:
	
	float so_h_sua;
public:

	void Nhap();
	void Xuat();
	double Tinh_Tien_Luong();

	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
};

// Hàm nhập thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Nhap()
{
	NhanVien::Nhap(); //Gọi lại phương thức NHẬP của class cha

	cout << endl << " Nhap so gio lam viec: ";
	cin >> so_h_sua;

}

// Hàm xuất thông tin nhân viên sửa ống nước
void NhanVienSuaOngNuoc::Xuat()
{
	NhanVien::Nhap; //Gọi lại phương thức XUẤT của class cha
	cout << endl << " So gio sua: " << so_h_sua;
	cout << endl << " Luong: " << (size_t)Tinh_Tien_Luong() << endl;
}

// Hàm tính tiền lương nhân viên sửa ống nước
double NhanVienSuaOngNuoc::Tinh_Tien_Luong()
{
	return (size_t)so_h_sua * 50000;
}

// Hàm tạo
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}
// Hàm hủy
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}



// KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN GIAO HÀNG KẾ THỪA CLASS CHA NhanVien -Lớp dẫn xuất
class NhanVienGiaoHang : public NhanVien
{
private:
	float so_hang_giao;
public:

	void Nhap();
	void Xuat();
	double Tinh_Tien_Luong();

	NhanVienGiaoHang();
	~NhanVienGiaoHang();
};

// Hàm nhập thông tin nhân viên giao hàng
void NhanVienGiaoHang::Nhap()
{
	NhanVien::Nhap(); //Gọi lại phương thức NHẬP của class cha

	cout << endl << " Nhap so hang da giao: ";
	cin >> so_hang_giao;
}

// Hàm xuất thông tin nhân viên giao hàng
void NhanVienGiaoHang::Xuat()
{
	NhanVien::Xuat(); //Gọi lại phương thức XUẤT của class cha
	cout << endl << " So hang da giao: " << so_hang_giao;
	cout << endl << " Luong: " << (size_t)Tinh_Tien_Luong() << endl;

}

// Hàm tính tiền lương nhân viên giao hàng
double NhanVienGiaoHang::Tinh_Tien_Luong()
{
	return (size_t)so_hang_giao * 33500;
}

// Hàm tạo
NhanVienGiaoHang::NhanVienGiaoHang()
{

}
// Hàm hủy
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}



// KHAI BÁO CẤU TRÚC LỚP NHÂN VIÊN XE ÔM CÔNG NGHỆ KẾ THỪA CLASS CHA NhanVien -Lớp dẫn xuất
class NhanVienXeOmCongNghe : public NhanVien
{
private:
	
	float so_km;
public:

	void Nhap();
	void Xuat();
	double Tinh_Tien_Luong();

	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
};

// Hàm nhập thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Nhap()
{
	NhanVien::Nhap(); //Gọi lại phương thức NHẬP của class cha

	cout << endl << " Nhap so km da chay: ";
	cin >> so_km;
}

// Hàm xuất thông tin nhân viên xe ôm 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	NhanVien::Xuat(); //Gọi lại phương thức XUẤT của class cha
	cout << endl << " So Km đa chay: " << so_km;
	cout << endl << " Luong: " << (size_t)Tinh_Tien_Luong() << endl;
}

// Hàm tính tiền lương nhân viên xe ôm
double NhanVienXeOmCongNghe::Tinh_Tien_Luong()
{
	return (size_t)so_km * 10000;
}

// Hàm tạo
NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
{

}
// Hàm hủy
NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
{

}


int main()
{

	system("pause");
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

