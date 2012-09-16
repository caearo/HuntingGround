//********************************************
//Date:		2012-9-21 15:27:00
//Author:	Ted
//Note:
//不用逻辑比较符号返回两个整数中的大者
//
//
//*********************************************
#include <stdio.h>
#include <math.h>

//利用绝对值
int _max1(int a, int b)
{
	return (a+b + abs(a-b))/2;
}

//利用移位
char * _max2(int a, int b)
{
	int c = a-b;
	char *str[2] = {"a large", "b large"};
	c = (unsigned int)(c) >> (sizeof(int) * 8 - 1);
	return str[c];
}


int main(int argc, char const *argv[])
{
	int a = 4, b = 3;
	printf("the bigger one is %d\n", _max1(a, b));
	printf("%s\n", _max2(a, b));
	return 0;
}