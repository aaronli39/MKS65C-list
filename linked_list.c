#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node * node) {
    struct node * temp = node;
    if(temp -> next == NULL) {
        printf("[%d] -> [NULL]\n", temp -> i);
        return;
    } else {
        printf("[%d] -> ", temp -> i);
        return(print_list(temp -> next));
    }
}

struct node * create(int i) {
    struct node * temp;
    temp = malloc(sizeof(struct node));
    temp -> i = i;
    temp -> next = NULL;
    return temp;
}

struct node * insert_front(struct node * node, int x) {
    struct node * temp = node;
    if(temp -> next == NULL) {
        temp -> next = create(x);
        return temp;
    } else {
        return(insert_front(temp -> next, x));
    }
}

struct node * free_list(struct node * node) {
    if (node -> next == NULL) {
        free(node);
    } else {
        free_list(node -> next);
        free(node);
    }
}

int main() {
    struct node * head = create(123);
    int i = 4;
    while(i--) {
        insert_front(head, 20);
        print_list(head);
    } struct node * temp = free_list(head);
    print_list(&temp);

}
