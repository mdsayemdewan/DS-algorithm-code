#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    int flag;
    struct Node *next;
};

int main() {
    int n;
    struct Node *head = NULL;
    struct Node *temp = NULL;
    struct Node *newNode = NULL;

    printf("Enter Number of Nodes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Memory we got: %p \n", newNode);
        printf("Enter data for Node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->flag = 0;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            head->flag = 1;
        } else {
            temp->next = newNode;
        }
        temp = newNode;
    }
    temp->next = head;

    // Print the original circular linked list
    printf("\nOriginal list:\n");
    temp = head;
    do {
        printf(" Data: %d, Flag: %d, Next: %p\n", temp->data, temp->flag, temp->next);
        temp = temp->next;
    } while (temp != head);

    // Delete the last element from the circular linked list
    if (head != NULL) {
        if (head->next == head) {
            // If there's only one node
            free(head);
            head = NULL;
        } else {
            // If there are multiple nodes
            struct Node *prev = NULL;
            temp = head;
            while (temp->next != head) {
                prev = temp;
                temp = temp->next;
            }
            prev->next = head;
            free(temp);
        }
    }

    // Print the list after deleting the last element
    if (head != NULL) {
        printf("List after deleting last element:\n");
        temp = head;
        do {
            printf(" Data: %d, Flag: %d, Next: %p\n", temp->data, temp->flag, temp->next);
            temp = temp->next;
        } while (temp != head);
    } else {
        printf("The list is empty.\n");
    }

    return 0;
}

