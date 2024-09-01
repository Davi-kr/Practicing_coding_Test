#include <stdio.h>

int main()
{
	int N, M;
	scanf("%d %d", &N, &M);
	
	char basket[101];

	for (int r=1; r<=N; r++)
	{
		basket[r] = r;
	}
	
	int left, right;
	for(int r=0; r<M; r++)
	{
		scanf("%d %d", &left, &right);
		if (left == right) continue;
		basket[right] = basket[right] - basket[left];
		basket[left] = basket[left] + basket[right];
		basket[right] = basket[left] - basket[right];
	}

	for (int r = 1; r <= N; r++)
	{
		printf("%d", basket[r]);
		if (r != N) printf(" ");
	}
	return 0;
}