#include<stdio.h>

void catelog_type_one(char *first_name, char *last_name, int teeth, int age)
{
	printf("%s is a %s with %i teeth. He is %i\n", first_name, last_name, teeth, age);
}

void catelog_type_two(char *first_name, char *last_name, int teeth, int age)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", first_name, last_name, teeth, age);

}

int main()
{
	catelog_type_one("First Name", "Last Name", 20, 10);
	catelog_type_two("First Name", "Last Name", 10, 20);
	return 0;
}