//P.156 TwoToNine.c 


#include <stdio.h>

int main(void) 
{
	int gugu =2;
	int dan =0;
	
	while(gugu < 10)
	{
		dan =1;
		
		while(dan<10)
		{
			printf("%d X %d =%d\n",gugu, dan, gugu*dan);
			dan++;
		}
		gugu++;
		
	}
	return 0;
}
