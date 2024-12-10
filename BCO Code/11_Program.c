#include<stdio.h>
int main() 
{
	int a = 0, i = 0, b;
	
	for (i = 0;i < 5; i++)
	{ 
		a++;
		if (i == 3)
			break;
	}
	printf("%d",a);
	
	return 0; 
}

//Output: 4

//Explanation
//The for loop run 4 times, incrementing a by 1 each time and then break.