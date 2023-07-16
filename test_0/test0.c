#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	printf("hellow world\n");
//	printf("%d\n", 100);
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));
//	int age = 20;
//	double weight = 100.0;
//	age = age + 1;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//	
//	return 0;
//}
//写一个代码求两个整数的和
//scanf是输入函数
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a,& b);
	sum = a + b;
	printf("sum =%d\n", sum);
	return 0;
}