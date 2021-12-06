#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}

// For Single Linked List:
struct Node *searchAndDelete(struct Node *head, int key){
    int check = 0;
    struct Node *temp = head;
    struct Node *prev = (struct Node *)malloc(sizeof(struct Node));
    prev->next = head;

    if (temp->data == key)
    {
        check = 1;
        head = temp->next;
        free(temp);
        return head;    
    }
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            check = 1;
            prev->next = temp->next;
            free(temp);
            return head;
        }
        prev = temp;
        temp = temp->next;
    }

    if (check == 0)
    {
        printf("%d is not present in the Linked List\n", key);
    }
    
    return head;

}

int main(){
    printf("Tushar Dimri\nSection A\n");
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));
    struct Node *second = (struct Node *) malloc(sizeof(struct Node));
    struct Node *third = (struct Node *) malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *) malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *) malloc(sizeof(struct Node));

    head->data = 10;
    second->data = 20;
    third->data = 30;
    fourth->data = 40;
    fifth->data = 50;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;

    display(head);

    head = searchAndDelete(head, 10);
    display(head);

    head = searchAndDelete(head, 50);
    display(head);

    head = searchAndDelete(head, 30);
    display(head);

    head = searchAndDelete(head, 90);
    display(head);


    return 0;
}