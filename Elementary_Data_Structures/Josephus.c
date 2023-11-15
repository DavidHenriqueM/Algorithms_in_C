#include <stdio.h>
#include <stdlib.h>

struct node {
    int key;
    struct node *next;
};

int main() {
    int i, N, M;
    struct node *tail, *start;
    scanf("%d %d", &N, &M);
    tail = (struct node *)malloc(sizeof *tail);
    tail->key = 1;
    start = tail;
    for (i = 2; i <= N; i++) {
        tail->next = (struct node *)malloc(sizeof *tail);
        tail = tail->next;
        tail->key = i;
    }
    tail->next = start;
    while (tail != tail->next) {
        for (i = 1; i < M; i++) tail = tail->next;
        printf("%d", tail->next->key);
        start = tail->next;
        tail->next = tail->next->next;
        free(start);
    }
    printf("%d\n", tail->key);
    return 0;
}