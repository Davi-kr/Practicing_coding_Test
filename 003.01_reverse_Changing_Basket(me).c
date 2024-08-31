#include <stdio.h>

int main()
{
	int N, M;

	scanf("%d %d", &N, &M); //첫 줄 입력

	int tmpArr[N + 1];
	int basket[N + 1];	//배열 내 상수 = 바구니 번호
						//배열 인덱스 순서 = 는 나중에 출력할 순서

	for (int i = 1; i <= N; i++) //바구니에 각 번호 부여
	{
		basket[i] = i;
	}

	int i, j;
	for (int r = 0; r < M; r++) // 연속된 바구니들 M번 역순으로 자리 바꾸기 반복문 
	{

		scanf("%d %d", &i, &j);

		for (int s = i; s <= j; s++)
		{
			tmpArr[s] = basket[s];
		}
		for (int s = i; s <= j; s++)	//주석1)
		{
			basket[j + i - s] = tmpArr[s];
		}
	}

	for (int i = 1; i <= N; i++) //이동 완료한 바구니들 왼쪽부터 '바구니 번호' 출력
	{
		printf("%d", basket[i]);
		if (i != N)
		{
			printf(" ");
		}
	}
	return 0;
}

/*주1)
 * 아! for문은 i애서 j까지 돌아야 하는데
 * for안에서 j를 감소키니까 for문 돌아야 하는 숫자 <=> j 까지 미쳐 못도는구나
 * 포문의 반복 횟수 마지막 임계값인 j값과
 * basket[ ]배열에서 역순 바구니의 마지막 번째를 뜻하는 j를 분리해서 사용하자!
 */