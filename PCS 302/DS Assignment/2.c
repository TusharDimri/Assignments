#include<stdio.h>
#include<stdlib.h>


struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *head){
    struct Node *temp = head;
    do 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }while (temp != head);
    printf("\n");
    
}



// For Circular Linked List:
struct Node *searchAndDelete(struct Node *head, int key){
    struct Node *temp1 = head;
    int check = 0;

    while (temp1->next != head)
    {
        temp1 = temp1->next;
    }
    // temp1 will now point to the node before the head Node
    
    struct Node *temp2 = head;

    // Deleting First Node
    if (temp2->data == key)
    {
        head = temp2->next;
        temp1->next = head;
        free(temp2);
        check = 1;
        return head;
    }
    
    do 
    {
        if (temp2->data == key)
        {
            temp1->next = temp2->next;
            free(temp2);
            check = 1;
            return head;
        }
        temp1 = temp2;
        temp2 = temp2->next;
    } while (temp2 != head);

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
    fifth->next = head;

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