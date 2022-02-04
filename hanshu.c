#include<stdio.h>
#define TARGET_AGE 55

int year1, year2;

int calcYear(int year1);

int main(void)
{
	printf("What year was the subject born?");
	printf("Enter as a 4-dight year (YYYY):");
	scanf_s(" %d",&year1);

	year2 = calcYear(year1);

	printf("Ssomeone born in %d will be %d in %d .",
		year1, TARGET_AGE, year2);

	return 0;



}
int calcYear(int year1)
{
	return (year1 + TARGET_AGE);
}