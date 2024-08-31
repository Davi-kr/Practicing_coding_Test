#include <stdio.h>

int main() {

	int M, N;

	scanf("%d %d", &N, &M);

	int baccet[N];
	for (int I = 0; I < N; I++) {
		baccet[I] = I + 1;
	}
	int i, j;
	for (int I = 0; I < M; I++) {
		scanf("%d %d", &i, &j);
		for (int J = i; (J < (j + i + 1) / 2); J++) {
			baccet[j +i-J] = baccet[j +i-J] - baccet[J];
			baccet[J] = baccet[J] + baccet[j +i-J];
			baccet[j +i-J] = baccet[J] - baccet[j +i-J];
		}
	}
	for (int I = 0; I < N; I++) {
		printf("%d ", baccet[I]);
	}
	return 0;
}