#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a[10];
	int n;
	int i;
	printf("Nhap vao so luong phan tu cua mang: ");
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		printf("Nhap vao phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
	for(i = n -1; i >= 0; i--)
	{
		printf("\nSo phan tu dao nguoc: %d", a[i]);
	}
	return 0;
}
