#include <iostream>
using namespace std;

struct PhanSo
{
	int TuSo, MauSo;
};
typedef struct PhanSo PHANSO;

//Tiền tố
PHANSO operator ++(PHANSO &x) {
	x.TuSo += x.MauSo;
	cout << "Tien to\n";
	return x;
}

//Hậu tố
PHANSO operator ++(PHANSO &x, int y) {
	PHANSO Temp = x;
	x.TuSo += x.MauSo;
	cout << "Hau to\n";
	return Temp;
}

//Xuất phân số
ostream& operator <<(ostream& os, PHANSO x) {
	os << x.TuSo << "/" << x.MauSo;
	return os;
}

int main() {
	PHANSO a;
	a.TuSo = 1;
	a.MauSo = 2;

	PHANSO b = ++a;

	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	system("pause");
	return 0;
}