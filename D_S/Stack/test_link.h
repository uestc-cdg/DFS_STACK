#ifndef __TEST_LINK__H__
#define __TEST_LINK__H__

typedef struct Node{
    int data;
    struct Node *next;
} Node;

typedef struct {
    Node *top;
} Stack;

void stack_init(Stack *stack);
int is_empty(Stack *stack);
void push_stack(Stack *stack, int value);
void pop_stack(Stack *stack);
int get_stack_top(Stack *stack);
void print_stack(Stack *stack);
#endif  //!__TEST_LINK__H__