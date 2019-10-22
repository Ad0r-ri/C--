//P.157 문제1

#include <stdio.h>

int main(void)
{
	int sum=0, num=0, i=0;
	
	while(i<5)
	{
		while(num<=0)
		{
			printf("0보다 큰 수를 입력(%d번째): ", i+1);
			scanf("%d", &num);
		}
		sum+=num;
		num=0;
		i++;
	}

	printf("총 합: %d \n", sum);
	return 0;
}






// 내가 한 것 
/*
#include <stdio.h>

int main(void)
{
	int n=5;
	int i=1;
	int a,b;
	printf("몇 개 정수를 입력? ");
	scanf("%d",&n);
	
	while(i++< n)
	{
		scanf("%d", &n);
		printf("%d\n", n+i);
			if (n<1)
			{
				printf("재입력하세요");
			}
		
	}
	
	return 0;
 } 
 
 */
