#include <stdio.h>
#include <string.h>
void reserve(char* left,char* right)
{
	char tmp=0;
	while(left<right)
	{
		tmp=*left;            //����������
		*left=*right;
		*right=tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[100]={0};
	int len=0;
	char* start=arr;
	gets(arr);
	len=strlen(arr);
	reserve(arr,arr+len-1);
    
	while(*start)
	{
		char* end=start;
		while(*end!=' '&&*end!='\0')
		{
			end++;	                   //���ÿ�����򵥴ʵ�����
		}
		reserve(start,end-1);
		if(*end==' ')
		start=end+1;
		else
			start=end;
	}
	printf("%s\n",arr);
	return 0;
}