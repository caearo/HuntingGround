//********************************************
//Date:		2012年9月20日15:11:27
//Author:	Ted
//Note:
//将整数转为字符串
//可采用先加'0'然后逆序的方式
//准备笔试的时候，作为笔记
//*********************************************

#include <stdio.h> 

int num=12345;

//程序猿面试宝典第14章
//先加‘0’再逆序
void itoa1()
{
	printf("\n=====================\nitoa1:\n\n");
	int i=0, j=0;
	char temp[7], str[7];
	
	while (num)
	{
		temp[i] = num%10 +'0';
		num /= 10;
		i++;
	}

	temp[i] = 0;
	printf("temp=%s\n", temp);

	i--;
	while (i>=0)
	{
		str[j] = temp[i];
		j++;
		i--;
	}
	str[j] = 0;
	printf("final string is %s\n", str);
}

int main(int argc, char const *argv[])
{
	itoa1();
	return 0;
}
