#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
#include  "../../Stack/test_arr.h"

/**
 * 项目概述：深度优先搜索
 */

int matrix[7][7] = {
    /*A  B  C  D  E  F  G*/
/*A*/{0, 1, 1, 0, 0, 1, 0},
/*B*/{1, 0, 0, 0, 0, 0, 0},
/*C*/{1, 0, 0, 0, 1, 0, 0},
/*D*/{0, 0, 0, 0, 0, 1, 0},
/*E*/{0, 0, 1, 0, 0, 0, 1},
/*F*/{1, 0, 0, 1, 0, 0, 0},
/*G*/{0, 0, 0, 0, 1, 0, 0},
};

char vertex[7] = {'A', 'B', 'C', 'D', 'E', 'F', 'G'};
int visited[7] = {0};


/**
 * @brief : 深度优先搜索
 * 
 * @param v 
 */
void dfs(int v) {
    printf("%c\t", vertex[v]);
    visited[v] = 1;
    for (int i=0; i<7; i++) {
        if (matrix[v][i] == 1 && visited[i] == 0) {
            dfs(i);
        }
    }
}

/**
 * @brief : 使用栈实现深度优先搜索
 * 
 * @param v 
 */

void dfs_stack(int v) {
    Stack stack;
    init_stack(&stack);
    printf("%c\t", vertex[v]);
    visited[v] = 1;
    push_stack(&stack, v);
    while (!is_empty(&stack)) {
        int top = get_stack_top(&stack);
        int i;
        for (i=0; i<7; i++) {
            if (matrix[top][i] == 1 && visited[i] == 0) {
                printf("%c\t", vertex[i]);
                visited[i] = 1;
                push_stack(&stack, i);
                break;
            }
        }
        if (i == 7) {
            pop_stack(&stack);
        }
    }
}

void test() {
    printf("dfs:\n");
    for (int i=0; i<7; i++) {
        if (visited[i] == 0) {
            dfs(i);
        }
    }
    printf("\n");

    memset(visited, 0, sizeof(visited));
    printf("dfs_stack:\n");
    for (int i=0; i<7; i++) {
        if (visited[i] == 0) {
            dfs_stack(i);
        }
    }
    printf("\n");
}

int main() {
    test();
    return 0;
}
