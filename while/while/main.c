//����1-100���ۼӺ�
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
//	printf("1-100���ۼӺ�Ϊ��%d\n",sum);
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
		printf("���������룺");
		scanf_s("%d", &input);	

		if (input != password)
		{
			printf("�Բ��������������������ǵ�%d������\n",i);
		}
		else if (input == password)
		{
			printf("��ϲ��������������ȷ��\n");
		}
		i++;
	}
	printf("���Ѿ�3�������������룬���������˳���");


	

	return 0;
}
