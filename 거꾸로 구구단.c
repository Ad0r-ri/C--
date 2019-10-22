//P.155 문제4 

#include <stdio.h>

int main(void)
{
	int a;
	int n=0;
	int i=10;
	scanf("%d", &a);
	
	while(i > n, i--)
	{
		
		printf("%d X %d = %d\n", a, i, a*i);
	}
	return 0;
}


/*                 //문제집의 답 
#include <stdio.h>

int main(void)
{
	int a;
	int i=9;
	scanf("%d", &a);
	
	while(i>0)
	{
		
		printf("%d X %d = %d\n", a, i, a*i);
		i--;
	}
	return 0;
}
*/
