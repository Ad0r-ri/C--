//P.155 ����5 

#include <stdio.h>

int main(void)
{
	int n, input;
	int total=0, i=0;
	printf("�Է¹��� ����? : ");
	scanf("%d", &n);
	
	while(i++<n)
	{
	scanf("%d", &input);
	total+=input;
	}
	printf("�Է��� ���: %f \n", (double)total/n);
	return 0;
}
