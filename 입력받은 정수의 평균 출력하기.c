//P.155 문제5 

#include <stdio.h>

int main(void)
{
	int n, input;
	int total=0, i=0;
	printf("입력받을 정수? : ");
	scanf("%d", &n);
	
	while(i++<n)
	{
	scanf("%d", &input);
	total+=input;
	}
	printf("입력의 평균: %f \n", (double)total/n);
	return 0;
}
