#include <stdio.h>

int baguni[101];	//배열[100] : 인덱스[i] 0 ~ 99 까지	<- 인덱스 [100] 사용 불가
					//배열[101] : 인덱스[i] 0 ~ 100		<- 인덱스 [100] 사용 가능
int N, M;
int s_bNum, f_bNum, k;

int main001()
{
	
	for (int i = 1; i <= 100; i++)
	{
		baguni[i] = 0;
	}
		
	scanf("%d %d", &N, &M);
	for (int i = 1; i<=M; i++)
	{
		scanf("%d %d %d", &s_bNum, &f_bNum, &k);
		for (int j = s_bNum; j <= f_bNum; j++)
		{
			baguni[j] = k;
		}
	}

	for (int i =1; i<=N; i++)
	{
		printf("%d ", baguni[i]);
		if (i != N)
		{
			printf(" ");
		}
	}

	return 0;
}
