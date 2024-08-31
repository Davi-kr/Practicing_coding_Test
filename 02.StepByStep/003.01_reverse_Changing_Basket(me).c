#include <stdio.h>

int main()
{
	int N, M;

	scanf("%d %d", &N, &M); //ù �� �Է�

	int tmpArr[N + 1];
	int basket[N + 1];	//�迭 �� ��� = �ٱ��� ��ȣ
						//�迭 �ε��� ���� = �� ���߿� ����� ����

	for (int i = 1; i <= N; i++) //�ٱ��Ͽ� �� ��ȣ �ο�
	{
		basket[i] = i;
	}

	int i, j;
	for (int r = 0; r < M; r++) // ���ӵ� �ٱ��ϵ� M�� �������� �ڸ� �ٲٱ� �ݺ��� 
	{

		scanf("%d %d", &i, &j);

		for (int s = i; s <= j; s++)
		{
			tmpArr[s] = basket[s];
		}
		for (int s = i; s <= j; s++)	//�ּ�1)
		{
			basket[j + i - s] = tmpArr[s];
		}
	}

	for (int i = 1; i <= N; i++) //�̵� �Ϸ��� �ٱ��ϵ� ���ʺ��� '�ٱ��� ��ȣ' ���
	{
		printf("%d", basket[i]);
		if (i != N)
		{
			printf(" ");
		}
	}
	return 0;
}

/*��1)
 * ��! for���� i�ּ� j���� ���ƾ� �ϴµ�
 * for�ȿ��� j�� ����Ű�ϱ� for�� ���ƾ� �ϴ� ���� <=> j ���� ���� �����±���
 * ������ �ݺ� Ƚ�� ������ �Ӱ谪�� j����
 * basket[ ]�迭���� ���� �ٱ����� ������ ��°�� ���ϴ� j�� �и��ؼ� �������!
 */