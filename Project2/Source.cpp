#include <stdio.h>
#include <conio.h>
#include <stdarg.h>
#pragma warning (disable: 4996)

int TinhTong(int n, ...) {
	int Tong = 0;

	va_list vl;
	va_start(vl, n);
	for (int i = 0; i < n; i++)
	{
		Tong += va_arg(vl, int);
	}
	va_end(vl);

	return Tong;
}

int main() {
	int Tong = TinhTong(5, 1, 2, 3, 4, 5);
	printf("Tong = %d", Tong);

	getch();
	return 0;
}