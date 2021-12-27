#include <stdio.h>

int main(){
	int K, N, age_v = 18;
	
	scanf("%d %d", &K, &N);
	
	int dNK = N - K;

	age_v = age_v + dNK/33;

	printf("%d\n", age_v);

	return 0;
}
