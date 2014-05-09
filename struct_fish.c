#include<stdio.h>

struct fish {
	char *first_name;
	char *last_name;
	int teeth;
	int age;
};

void catelog_type_one(struct fish fish_1)
{
	printf("%s is a %s with %i teeth. He is %i\n", fish_1.first_name, fish_1.last_name, fish_1.teeth, fish_1.age);
}

void catelog_type_two(struct fish fish_2)
{
	printf("Name:%s\nSpecies:%s\n%i years old, %i teeth\n", fish_2.first_name, fish_2.last_name, fish_2.teeth, fish_2.age);
}


int main()
{
	struct fish fish_1 = {"Fish one", "Last Name", 20, 10};
	struct fish fish_2 = {"Fish Two", "Last Name", 10, 20};

	catelog_type_one(fish_1);
	catelog_type_two(fish_2);
	return 0;
}