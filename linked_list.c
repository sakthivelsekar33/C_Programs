#include<stdio.h>

struct node {
	int value;
	struct node *next;
};

int main(){
	struct node node_1 = {10, NULL};
	struct node node_2 = {20, NULL};

	node_1.next = &node_2;

	printf("%s\n", *node_1.next);
	return 0;

}