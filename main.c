#include <stdio.h>
#include <stdlib.h>

struct list {
    int *data ;
    int *start ;
    int *end ;
};

struct list *init_list(int arr[], int N){
    struct list *list1 = malloc(sizeof(struct list));
    list1->start = &arr[0];
    list1->end = &arr[N];
    list1->data = arr;
    return list1;
}

void print_arr(int *arr, int N)
{
    if (N == 0)
        printf("[]\n");
    else {
        printf("[%d", arr[0]);          // Accès au tableau référencé

        int i;
        for (i = 1; i < N; i++)
            printf(", %d", arr[i]);     // Accès au tableau référencé
        printf("]\n");
    }
}

void print_list (struct list *list )
{
    print_arr (list->start , list->end - list->start);
}

int main (){
    int data [] = {-2, 12, -8, 1, 4, -2, 3, 8};
    struct list *list = init_list (data , 8);
    print_list ( list );

    return 0;
}