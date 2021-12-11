#include <stdio.h>
#include <conio.h>
#pragma warning (disable: 4996)

int main() {
	char s1[] = "ky thuat lap trinh";
	wchar_t s2[] = L"kỹ thuật lập trình";

	printf("s1 = %s \n", s1);
	printf("sizeof(s1) = %d \n", sizeof(s1));
	wprintf(L"s2 = %ls \n", s2);
	printf("sizeof(s2) = %d \n", sizeof(s2));

	getch();
	return 0;
}