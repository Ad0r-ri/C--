//P.157 ����1

#include <stdio.h>

int main(void)
{
	int sum=0, num=0, i=0;
	
	while(i<5)
	{
		while(num<=0)
		{
			printf("0���� ū ���� �Է�(%d��°): ", i+1);
			scanf("%d", &num);
		}
		sum+=num;
		num=0;
		i++;
	}

	printf("�� ��: %d \n", sum);
	return 0;
}






// ���� �� �� 
/*
#include <stdio.h>

int main(void)
{
	int n=5;
	int i=1;
	int a,b;
	printf("�� �� ������ �Է�? ");
	scanf("%d",&n);
	
	while(i++< n)
	{
		scanf("%d", &n);
		printf("%d\n", n+i);
			if (n<1)
			{
				printf("���Է��ϼ���");
			}
		
	}
	
	return 0;
 } 
 
 */
