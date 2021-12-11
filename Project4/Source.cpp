#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#pragma warning (disable: 4996)

void NhapMang(int **a, int d, int c) {
	/*for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("\nNhap vao a[%d][%d] = ", i, j);
			scanf("%d", &a[i][j]);
		}
	}*/
	for (int i = 0; i < d * c; i++)
	{
		printf("\nNhap vao a[%d][%d] = ", i / c, i % c);
		scanf("%d", &a[i / c][i % c]);
	}
}

void HoanVi(int& a, int& b) {
	int Temp = b;
	b = a;
	a = Temp;
}

void HoanVi2Dong(int** a, int d1, int d2, int c) {
	for (int i = 0; i < c; i++)
	{
		HoanVi(a[d1][i], a[d2][i]);
	}
}

void XoaDong(int** a, int& d, int c, int dxoa) {
	for (int i = dxoa; i < d - 1; i++)
	{
		HoanVi2Dong(a, i, i + 1, c);
	}
	realloc(a[d - 1], 0);
	--d;
}

void XuatMang(int** a, int d, int c) {
	/*for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}*/
	for (int i = 0; i < d * c; i++)
	{
		if (i % c == 0)
		{
			printf("\n");
		}
		printf("%4d", a[i / c][i % c]);
	}
}

int main() {
	int **a, d = 3, c = 3;

	/*cấp phát*/
	a = (int**)malloc(d * sizeof(int));
	for (int i = 0; i < d; i++)
	{
		a[i] = (int*)malloc(c * sizeof(int));
	}

	/*xử lí*/
	NhapMang(a, d, c);
	XuatMang(a, d, c);

	int dxoa = 1;
	printf("\nMang sau khi xoa dong thu %d là: ", dxoa);
	XoaDong(a, d, c, dxoa);
	XuatMang(a, d, c);

	/*giải phóng*/
	for (int i = 0; i < d; i++)
	{
		free(a[i]);
	}
	free(a);

	getch();
	return 0;
}