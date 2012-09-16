//********************************************
//Date:		2012年9月20日15:29:04
//Author:	Ted
//Note:	
//程序员面试宝典
//
//
//*********************************************
#include <stdio.h>

char *_strcpy(char *strDest, const char *strSrc);

int main(int argc, char const *argv[])
{
	char *src = "strcpy.", *dest;
	_strcpy(dest, src);
	printf("%s.\n", dest);
	return 0;
}

char *_strcpy(char *strDest, const char*strSrc)
{
	assert((strDest != Null) && (strSrc != Null));
	char *p = strSrc;
	whilr ( (*strDest++ = *p++) != 0);
	return p;
}