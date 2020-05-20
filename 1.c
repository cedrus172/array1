/* Input values are accepted from the user into the array ary[10]*/
#include <stdio.h>
#include <windows.h>
void main()
{
	int ary[10];
	int i, total, high, shortest,list;
	for (i = 0; i < 10; i++)
	{
		printf("\n Enter value %d : ", i + 1);
		scanf("%d", &ary[i]);


	}
	system("cls"); // xóa màn hình

	list = ary[0];
	for (int a = 0; a < 10; a++)
	{
		list = ary[a];
		printf("\nGia tri %d la %d", a+1, list);


	}
	printf("\n");
	/* Displays highest of the entered values */
	high = ary[0];
	for (i = 1; i < 10; i++)
	{
		if (ary[i] > high)
		{
			high = ary[i];

		}
	}
	
	printf("\nHighest value entered was %d", high);
	printf("\n");

	/* Displays shortest of the entered values */
	shortest = ary[0];
	for (i = 1; i < 10; i++)
	{
		if (ary[i] < shortest)
			shortest = ary[i];
	}
	printf("\nShortest value entered was %d", shortest);
	printf("\n");

	/* prints average of values entered for ary[10] */
	for (i = 0, total = 0; i < 10; i++)
		total = total + ary[i];
	printf("\nThe average of the elements of ary is %d", total / i);

	getch();
	return 0;
}
