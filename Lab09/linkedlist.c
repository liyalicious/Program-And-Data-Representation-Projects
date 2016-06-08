#include <stdio.h>
#include <stdlib.h>

struct list_node{
	int value;
	struct list_node *prev, *next;
};

struct list{
	struct list_node *head;
//	int listsize;
};

int main(){
	struct list *l = (struct list *) malloc(sizeof(struct list));
//	l->listsize = 0;
	l->head = (struct list_node*) malloc(sizeof(struct list_node));
//	l->head->value = 0;
	struct list_node *n, *n2;
	
	int size;
	printf("Enter how many values to input: ");
	scanf("%d", &size);
	
	n = l->head;
	
	for (int i = 0; i < size; i++){
		printf("Enter value %d: ", i+1);
		int val;
		scanf("%d", &val);
		
		n->next = (struct list_node*) malloc(sizeof(struct list_node));
		n->value = val;
		n = n->next;
	}
	
	n2 = l->head;
	
	for (int k = 0; k < size; k++){
		printf("%d\n", n2->value);
		n2=n2->next;
	}
	
	free(l);
	return 0;
}