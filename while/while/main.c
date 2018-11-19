//计算1-100的累加和
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	while (i <= 100)
//	{
//		sum = sum + i;
//		i++;
//	}
//	printf("1-100的累加和为：%d\n",sum);
//  return 0;
//}


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int password = 123456;
	int input;
	int i = 1
	while (i <=3)
	{
		printf("请输入密码：");
		scanf_s("%d", &input);	

		if (input != password)
		{
			printf("对不起，您输入的密码错误，这是第%d次输入\n",i);
		}
		else if (input == password)
		{
			printf("恭喜您，密码输入正确！\n");
		}
		i++;
	}
	printf("您已经3次输入错误的密码，程序正在退出！");


	

	return 0;
}
