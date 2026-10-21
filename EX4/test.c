#include <stdio.h>
int main ()
{
	int section1,section2,section3;
	float average;
	printf("Enter section1 score");
	scanf("%d", &section1);
	printf("Enter section2 score");
	scanf("%d", &section2);
	printf("Enter section3 score");
	scanf("%d", &section3);

	average = (section1 + section2 + section3 ) / 3.0;
	
	if (section1 >= 70 && section2 >= 70 && section3 >= 70 && average >= 75)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	return 0;
}
