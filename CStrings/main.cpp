#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int strcomp(char * s1, char * s2) {
    int cmp, i=0;
    
     while(*(s1+i)!='\0' || *(s2+i)!='\0') {
         
         cmp= *(s1+i) - *(s2+i);
         
         if(cmp==0 || cmp==32 || cmp==-32)
             return 0;
         else
             return cmp;
         i++;
     }
     
}

int  main()
{
	//stricmp
	int cmp;
	cmp=strcomp( "choozi" ,"jiya");
    
    if(cmp==0 )
        cout<<"Both are Equal";
    else if( cmp>0 )
        cout<<" S1>S2 : S1 is greater than S2 ";
    else

        cout<<" S1<S2 : S1 is less than S2 ";
   
	return 0;
}