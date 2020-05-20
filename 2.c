#include <stdio.h>
#include <windows.h>

void main()
{
	int ary[10];
	int i, total, high, shortest,list;
	for (i = 0; i < 10; i++)
	{
		printf("\n Nhap gia tri %d : ", i + 1);
		scanf("%d", &ary[i]);
	}
	system("cls"); 

	list = ary[0];
	high = ary[0];
	shortest = ary[0];
	for (i = 1, total = 0; i < 10; i++)
	{
		if (ary[i] > high)
		{
			high = ary[i];

		}
		else if (ary[i] < shortest)
		{ 
			shortest = ary[i];
		}
		total = total + ary[i];
		list = ary[i];
		printf("\nGia tri %d la %d", i + 1, list);

	}
	
	printf("\nGia tri lon nhat la : %d", high);
	printf("\n");

	printf("\nGia tri nho nhat la : %d", shortest);
	printf("\n");
	printf("\nTrung binh cong la :  %d", total / i);
	getch();
	return 0;
}
