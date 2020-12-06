#include <stdio.h>
#include <stdlib.h>

void createSegment(int length)
{
	for (int i = 0; i < length; i++)
		printf_s("-");
}

void printSegment(int length)
{
	printf_s("+");
	createSegment(length);
	printf_s("+");
}

int main(void)
{
	float length;
	printf_s("Segment Creator \n Please specify segmant length:");
	scanf_s("%f", &length);
	printSegment(length);
	return 0;
}
