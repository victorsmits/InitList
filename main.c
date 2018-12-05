#include <stdio.h>
#include <stdlib.h>

struct list {
    int *data ;
    int *start ;
    int *end ;
};

struct list *init_list(int arr[], int N){
    struct list *list1 = malloc(sizeof(struct list));
    list1->start = 0;
    list1->end = N-1;
    list1->data = arr;
    return list1;
}

void print_arr(int *pInt, unsigned long i){
    if(i==0)
        printf (" []\n");
    else {
        printf ("[%d",  pInt[0]) ;
        int j;
        for (j = 0; j < i; j ++)
            printf (", %d",  pInt[i]);
        printf ("]\n");
     }
}

void print_list (struct list *list )
{
    printf("%d\n",list->end);
    printf("%d\n",list->start);
    print_arr (list->data , list->end - list->start + 1);
}

int main (){
    int data [] = {-2, 12, -8, 1, 4, -2, 3, 8};
    struct list *list = init_list (data , 8);
    print_list ( list );

    return 0;
}