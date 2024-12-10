#include <stdio.h>
int main()
{
	int i = 0;
	char c[] = "Dherai";

	while (i < 2)
	{
		i++;
		switch (i)
		{
		case 'a':
			printf("%s", c);
			break;
			break;
		}
	}
	printf(" Hancy cha\n");

	return 0;
}

// Output: DheraiDherai Hancy Cha

// Explanation
// Here, while loop executed 2 times because after first break statement it does not go for second break.
// While loop prints aa and then print after while.
