#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "linked_list.c"

int main() {
    srand(time(NULL));
    struct node * head = create(1);
    printf("              ==> HEAD node is: 1 <==\n");
    int i = 4;
    printf("============== TESTING insert_front ==============\n");
    while(i--) {
        insert_front(head, rand());
        print_list(head);
    }
    printf("================ TESTING free_list ================\n");
    printf("Before freeing: \n");
    print_list(head);
    // printf("--> free_list worked because the first node is a null element so there <--\n");
    // printf("--> is a segmentation fault error since the previous elements are gone. <--\n\n");
    printf("After freeing: \n");
    struct node * temp = free_list(head);
    print_list(temp);

}
