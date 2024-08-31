#include <stdio.h>

int main(void)
{
	int arr[10] = { 0, };
	int count = 1;
	int a;
	/*
	for (int i = 0; i<10; i++)
	{
		arr[i] = 42;
	}
	*/
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a);
		arr[i] = a % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
	}

	for (int i = 0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			count++;
		}
	}
	printf("\n%d", count);

	return 0;
}