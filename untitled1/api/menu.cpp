//
#include <stdio.h>
#include "menu.h"
#include "log.h"
#include "work.h"

void displayMenu() {
    printf("------------------\n");
    printf("C          交互菜单\n");
    printf("------------------\n");
    printf("A:查看CPU硬件信息\n");
    printf("B:查看进程运行信息\n");
    printf("C:查看内存硬件信息、内存使用信息\n");
    printf("D:查看存储设备硬件信息、存储设备使用信息\n");
    printf("E:退出\n");
    printf("------------------\n");
}

void handleUserInput() {
    char option;

    printf("Please select an option: ");
    scanf(" %c", &option);

    switch(option) {
        case 'A':
            logMenuOption("A");
        printf("Option A selected. Viewing CPU hardware information.\n");
        showCPUInfo();
        // Do something to display CPU hardware information
        break;
        case 'B':
            logMenuOption("B");

        printf("Option B selected. Viewing process running information.\n");
        // Do something to display process running information
        break;
        case 'C':
            logMenuOption("C");
        printf("Option C selected. Viewing memory hardware information and memory usage information.\n");
        // Do something to display memory hardware information and memory usage information
        break;
        case 'D':
            logMenuOption("D");
        printf("Option D selected. Viewing storage device hardware information and storage device usage information.\n");
        // Do something to display storage device hardware information and storage device usage information
        break;
        case 'E':
            logMenuOption("E");
        printf("Exiting the menu. Goodbye!\n");
        break;
        default:
            printf("Invalid option. Please try again.\n");
    }
}
// Created by 123 on 2024/5/20.
//
