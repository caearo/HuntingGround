//********************************************
//Date:		
//Author:	Ted
//Note:
//
//
//
//*********************************************
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int func(int x)
{
	int count = 0;
	cout << x << endl;
	while (x)
	{
		count++;
		x = x&(x-1);
		cout << oct << x << endl;
	}
	return count;
}


int main(int argc, char const *argv[])
{
	cout << func(9999) << endl;
	return 0;
}