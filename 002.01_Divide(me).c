#include <stdio.h>

int main()
{
	int input;
	int arr[42];
	int res;

	for (int i = 0; i<42; i++)
	{
		arr[i] = 42;
	}

	for (int i = 0; i<10; i++)
	{
		scanf("%d", &input);
		res = input % 42;
		arr[res] = res;
	}

	int count = 0;
	
	for (int i = 0; i<42; i++)
	{
		if (arr[i] != 42)
		{
			count++;
		}

	}
	printf("%d", count);

	return 0;
}
