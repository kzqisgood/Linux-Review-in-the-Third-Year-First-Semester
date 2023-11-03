#include <stdio.h>

int main()
{
	FILE *fd;
	int a[10]={'0','1','2','3','4','5','6','7','8','\0'};
	fd=fopen("a","r+");
	for(int i=0;i<10;i++)
	{
	printf("%d\n",a[i]);
	fputc(a[i],fd);
	}
	fclose(fd);
}
