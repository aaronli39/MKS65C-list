#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(struct node * node) {
    struct node * temp = node;
    if(node -> next == NULL) {
        printf("[%d] -> [NULL]\n", temp -> i);
        return;
    } else {
        printf("[%d] -> ", temp -> i);
        return(print_list(temp -> next));
    }
}

struct node * insert_front(struct * node, int x) {

}

// adsf
int main() {
    struct node foo, moo, too, coo;
    foo.i = 2;
    foo.next = &moo;
    moo.i = 1;
    moo.next = &too;
    too.i = 1232;
    too.next = &coo;
    coo.i = 6712;
    coo.next = NULL;
    print_list(&foo);

}
