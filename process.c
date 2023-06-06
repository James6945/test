#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "process.h"

typedef struct Person {
     char name[20];
     char phone[20];
     struct Person* next;
} Person;

Person* Push(Person* head, char N[], char P[]) {
    Person* newPerson = (Person*)malloc(sizeof(Person));
    strcpy(newPerson->name, N);
    strcpy(newPerson->phone, P);
    newPerson->next = head;
    head = newPerson;
    return head;
}

void printList(Person* head) {
    Person* curr = head;
    printf("---List---\n");
    while (curr != NULL) {
        printf("%s\t%s\n", curr->name, curr->phone);
        curr = curr->next;
    }
}

void Search(Person* head, char N[]) {
    Person* curr = head;
    int isfind = 1;
    while (curr != NULL) {
        if (strcmp(curr->name, N) == 0) {
            printf("%s\t%s\n", curr->name, curr->phone);
            isfind = 0;
        }
        curr = curr->next;
    }
    if (isfind == 1) {
        printf("Could not find\n");
    }
}

void Delete(Person** head, char N[]) {
    Person* curr = *head;
    Person* prev = NULL;
    int isfind = 0;
    while (curr != NULL) {
        if (strcmp(curr->name, N) == 0) {
            isfind = 1;
            if (prev == NULL) {
                *head = curr->next;
                free(curr);
                curr = *head;
            } else {
                prev->next = curr->next;
                free(curr);
                curr = prev->next;
            }
        } else {
            prev = curr;
            curr = curr->next;
}
}
    if (isfind == 0) {
        printf("Could not find\n");
}
}
