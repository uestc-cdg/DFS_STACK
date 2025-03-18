#ifndef __TEST_ARR__H__
#define __TEST_ARR__H__

#define MAX_SIZE 100
typedef struct {
    int top;
    int value[MAX_SIZE];
} Stack;

void init_stack(Stack *stack);
int is_empty(Stack *stack);
int is_full(Stack *stack);
void push_stack(Stack *stack, int value);
void pop_stack(Stack *stack);
int get_stack_top(Stack *stack);
void print_stack(Stack *stack);
#endif  //!__TEST_ARR__H__