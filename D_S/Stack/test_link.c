#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#include  "test_link.h"

/**
 * @brief 项目概述：栈的链表实现
 * 
 */

void stack_init(Stack *stack) {
    stack->top = NULL;
} 

int is_empty(Stack *stack) {
    return stack->top == NULL;
}

void push_stack(Stack *stack, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("newnode allocated failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

void pop_stack(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return;
    }
    stack->top = stack->top->next;
}

int get_stack_top(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return -1;
    }

    return stack->top->data;
}

void print_stack(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return;
    }
    Node *temp = stack->top;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void test() {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack_init(stack);
    push_stack(stack, 1);
    push_stack(stack, 2);
    push_stack(stack, 3);
    print_stack(stack);
    pop_stack(stack);
    print_stack(stack);
    int top = get_stack_top(stack);
    printf("top: %d\n", top);
}

int main() {
    test();
    return 0;
}