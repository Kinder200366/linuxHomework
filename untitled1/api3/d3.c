

//
// Created by 123 on 2024/5/21.
//
#include <stdio.h>

void comp(int arry[], int n) {
    int i, index, temp;

    printf("Ϊ���鸳ֵ��\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arry[i]);
    }

    for(i = 1, index = 0; i < n; i++) {
        if(arry[i] < arry[index]) {
            index = i;
        }
    }

    temp = arry[0];
    arry[0] = arry[index];
    arry[index] = temp;

    for(i = 0; i < n; i++) {
        printf("%d ", arry[i]);
    }
    printf("\n");
}

int main() {
    int n, a[100];

    printf("Ϊn��ֵ��\n");
    scanf("%d", &n);

    comp(a, n);

    return 0;
}