//********************************************
//Date:		2012年9月20日15:29:04
//Author:	Ted
//Note:	
//程序员面试宝典
//
//
//*********************************************
#include <stdio.h>
#include <assert.h>

//程序员面试宝典
char *_strcpy1(char *strDest, const char *strSrc);

//百度知道
char *_strcpy2(char * strDest,const char * strSrc);

int main(int argc, char const *argv[])
{
	char *src = "strcpy.", dest[64] = {0};
	_strcpy1(dest, src);
	_strcpy2(dest, src);
	printf("_strcpy1 dest: %s\n", dest);
	printf("_strcpy2 dest: %s\n", dest);
	return 0;
}

char *_strcpy1(char *strDest, const char *strSrc)
{
	assert((strDest != NULL) && (strSrc != NULL));
	char *p = strDest;
	while ( (*strDest++ = *strSrc++) != '\0');
	return p;
}

char *_strcpy2(char * strDest, const char * strSrc)
{
	char * strDestCopy=strDest; //[3]
	assert ((strDest!=NULL) && (strSrc!=NULL)); //[1]
	//	throw "Invalid argument(s)"; //[2]
	while ((*strDest++=*strSrc++)!='\0'); //[4]
	return strDestCopy;
}