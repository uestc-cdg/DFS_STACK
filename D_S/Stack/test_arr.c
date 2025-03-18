#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>
#include  "test_arr.h"

/**
 * 项目概述：栈的数组实现
 */


void init_stack(Stack *stack) {
    stack->top = -1;
}

int is_empty(Stack *stack) {
    return stack->top == -1;
}

int is_full(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push_stack(Stack *stack, int value) {
    if (is_full(stack)) {
        printf("stack is full\n");
        return;
    }
    stack->value[++(stack->top)] = value;
}

void pop_stack(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return;
    }
    (stack->top)--;
}

int get_stack_top(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return -1; //表示为空
    }
    return stack->value[stack->top];
}

void print_stack(Stack *stack) {
    if (is_empty(stack)) {
        printf("stack is empty\n");
        return;
    }
    for (int i=0; i<=stack->top; i++) {
        printf("%d\t", stack->value[i]);
    }
    printf("\n");
}

// void test() {
//     Stack stack;
//     init_stack(&stack);

//     push_stack(&stack, 1);
//     push_stack(&stack, 2);
//     push_stack(&stack, 3);
//     push_stack(&stack, 4);
//     push_stack(&stack, 5);

//     print_stack(&stack);
//     printf("%d\n", get_stack_top(&stack));

//     pop_stack(&stack);

//     print_stack(&stack);

//     printf("%d\n", get_stack_top(&stack));
// }

// int main() {
//     test();
//     return 0;
// }