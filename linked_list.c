#include<stdio.h>
#include<stdlib.h>

 typedef struct node{
        int number;
        struct node *next;
    } node;

int main (int argc, char*argv[]){
    node *list=NULL;
    int i;
    for(i=1;i<argc;i++){

        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        n->number=number;
        n->next=list;
        list =n;
    }
    node *ptr=list;
    while(ptr!=NULL){
        printf("%i\n", ptr->number);
        ptr=ptr->next;
    }
   
   return 0;
}
