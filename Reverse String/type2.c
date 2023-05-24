#include <stdio.h>
#include <string.h>
 
// Enter a String :  THE SKY IS BLUE
// String in Reverse Order:  BLUE IS SKY THE
int main()

{
  	char str[100];
  	int i, j, len, startIndex, endIndex;
 
  	printf("Enter a String :  ");
  	gets(str);
  	
  	len = strlen(str);
  	endIndex = len - 1;
  	
  	printf("String in Reverse Order:  "); 	   	
  	for(i = len - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");				
		} 
	}
	
  	return 0;
}
