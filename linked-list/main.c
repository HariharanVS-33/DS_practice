#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    char d[101];
    struct node *next;
}n;
n* head = NULL;
n* tail = NULL;
void create(char d[])
{
    n* nn = (n*)malloc(sizeof(*nn));
    strcpy(nn->d, d);
    nn->next = NULL;
    if(head == NULL)
    {
        head = tail = nn;
        tail->next = head;
    }
    else
    {
        tail->next = nn;
        tail = nn;
        nn->next = head;
    }
}
void disp()
{
    printf("Circular Linked List - Running Applications\n");
    if(head == NULL)
    {
        printf("No applications to iterate.");
        return;
    }
    n* curr = head;
    printf("Running Applications\n");
    do{
        printf("%s\n",curr->d);
        curr = curr->next;
    }while(curr!=head);
}
int main()
{
    char str[101];
    while(1)
    {
        if(fgets(str,101,stdin)==NULL){break;}
        str[strcspn(str,"\n")]='\0';
        if(strcmp(str, "exit")==0)
        {
            break;
        }
        create(str);
    }
    disp();
}
