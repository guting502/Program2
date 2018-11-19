//#include<stdio.h>
//int main()
//{
//	const  char* filename = "E:/aaa.txt";
//	//FILE *fp = fopen (filename,"wb");
//	FILE *fp = fopen(filename, "ab");
//
//	if (fp == NULL)
//	{
//		printf("failed to open !\n");
//			return -1;
//	}
//	char buf[] ="23165316531352";
//	fwrite(buf,1,sizeof(buf),fp)	;
//	//fwrite(buf,1,strlen(buf),fp);
//	fclose(fp);
//	return 0;
//}

#include<stdio.h>
int main()
{
	const char * filename = "";
	FILE *fp = fopen(filename,"wb");
	if (fp == NULL)
	{
		printf("failed to open file !\n");
		return -1;
	}
	char  buf[] = "nfjf";
	fwrite(buf,1,sizeof(buf),fp);
	fclose(fp);
	return 0;
}

