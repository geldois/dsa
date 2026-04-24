#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    struct Node *next;
    int data;
} Node;

typedef struct SinglyLinkedList {
    struct Node *head;
    int size;
} SinglyLinkedList;

// METHODS

SinglyLinkedList *create_list() {
    SinglyLinkedList *list = malloc(sizeof(SinglyLinkedList));

    if (list == NULL) {
        return NULL;
    }

    list->head = NULL;
    list->size = 0;

    return list;
}

bool delete_list(SinglyLinkedList *list) {
    if (list == NULL) {
        return false;
    }

    Node *curr = list->head;
    Node *next = NULL;

    while (curr != NULL) {
        next = curr->next;
        free(curr);
        curr = next;
    }

    list->head = NULL;
    list->size = 0;

    return true;
}

bool delete_node(SinglyLinkedList *list, int target) {
    if (list == NULL || list->head == NULL) {
        return false;
    }

    if (list->head->data == target) {
        Node *new_head = list->head->next;
        free(list->head);
        list->head = new_head;
        list->size--;

        return true;
    }

    Node *curr = list->head;

    while (curr->next != NULL) {
        if (curr->next->data == target) {
            Node *curr_next = curr->next->next;
            free(curr->next);
            curr->next = curr_next;
            list->size--;

            return true;
        }

        curr = curr->next;
    }

    return false;
}

bool destroy_list(SinglyLinkedList **list) {
    if (list == NULL || *list == NULL) {
        return false;
    }

    delete_list(*list);
    free(*list);
    *list = NULL;

    return true;
}

bool insert_node(SinglyLinkedList *list, int value) {
    if (list == NULL) {
        return false;
    }

    Node *new = malloc(sizeof(Node));

    if (new == NULL) {
        return false;
    }

    new->next = NULL;
    new->data = value;

    if (list->head == NULL) {
        list->head = new;
        list->size++;

        return true;
    }

    Node *curr = list->head;

    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = new;
    list->size++;

    return true;
}

void print_list(SinglyLinkedList *list) {
    if (list == NULL) {
        return;
    }

    Node *curr = list->head;

    while (curr != NULL) {
        printf("%d ", curr->data);

        curr = curr->next;
    }

    printf("\n");
}

Node *search_node(SinglyLinkedList *list, int target) {
    if (list == NULL || list->head == NULL) {
        return NULL;
    }

    Node *curr = list->head;

    while (curr != NULL) {
        if (curr->data == target) {
            return curr;
        }

        curr = curr->next;
    }

    return NULL;
}

bool update_node(SinglyLinkedList *list, int target, int value) {
    if (list == NULL) {
        return false;
    }

    Node *curr = list->head;

    while (curr != NULL) {
        if (curr->data == target) {
            curr->data = value;

            return true;
        }

        curr = curr->next;
    }

    return false;
}
