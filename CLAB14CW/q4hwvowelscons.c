#include <stdio.h>
int main(){
    char s[50];  
    int i,vow=0,cons=0;
    printf("Enter  the string : ");
    scanf("%[^\n]", s);
    for(i=0;s[i]!='\0';i++)  //ASCII OF A=65 Z= 65+25=90, a=97 z=97+25=122
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122)) 
    	{
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
            s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
		      vow++;
            else
             cons++;
        }
 	}
    printf("Total Vowels= %d and Total Consonants = %d\n", vow, cons);
    return 0;
}