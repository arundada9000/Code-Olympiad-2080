#include <stdio.h>
#include <string.h>
int main() 
{
	char str[20] = "ABCDEFGHIJK";
	int s = strlen(str);
	
	str[3] = '\0';
	s = strlen(str);
	
	printf("%d\n",s);
	return 0;
}


//Output: 3