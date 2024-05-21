//
// Created by 123 on 2024/5/17.
//
#include "work.h"
#include "app.h"
#include <bits/stdc++.h>
int main() {
    char option;
    do {
        printMenu();
        printf("请输入选项：");
        option = getchar();
        getchar(); // 消耗掉回车符
        switch(option) {
            case 'A':
                showCPUInfo();
            break;
            case 'B':
                showProcessInfo();
            break;
            case 'C':
                showMemoryInfo();
            break;
            case 'D':
                showStorageInfo();
            break;
            case 'E':
                printf("退出程序\n");
            break;
            default:
                printf("请输入有效选项\n");
        }
    } while(option != 'E');

    return 0;
}
