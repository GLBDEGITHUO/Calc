#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("*********************\n");
	printf("** 1.Add  2.Sub  ****\n");
	printf("** 3.Mul  2.Div  ****\n");
	printf("*******0.Exit********\n");
}
int main()
{
	int (*pa[5])(int, int) = { 0,Add,Sub,Mul,Div };
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:\n");
		scanf("%d", &input);
		if (input > 0 && input < 5)
		{
			printf("����������������:\n");
			scanf("%d%d", &x, &y);
			int ret = pa[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�����\n");
		}
		else
		{
			printf("������������������\n");
		}
	} while (input);

	return 0;
}