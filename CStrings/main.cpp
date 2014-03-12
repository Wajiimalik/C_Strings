#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int  main()
{
	//conversion of string to int
	char str[20];
	int no;
	puts("Enter no: ");
	cin.get(str,20,'\n');

	no = atoi(str);
	printf("%d", no);

	return 0;
}