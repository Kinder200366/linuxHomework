//
#include <stdio.h>
#include "menu.h"
#include "log.h"
#include "work.h"

void displayMenu() {
    printf("------------------\n");
    printf("C          �����˵�\n");
    printf("------------------\n");
    printf("A:�鿴CPUӲ����Ϣ\n");
    printf("B:�鿴����������Ϣ\n");
    printf("C:�鿴�ڴ�Ӳ����Ϣ���ڴ�ʹ����Ϣ\n");
    printf("D:�鿴�洢�豸Ӳ����Ϣ���洢�豸ʹ����Ϣ\n");
    printf("E:�˳�\n");
    printf("------------------\n");
}

void handleUserInput() {
    char option;

    printf("Please select an option: ");
    scanf(" %c", &option);

    switch(option) {
        case 'A':
            logMenuOption("User choose A");
            printf("Option A selected. Viewing CPU hardware information.\n");
            showCPUInfo();
        break;
        case 'B':
            logMenuOption("User choose B");
            printf("Option B selected. Viewing process running information.\n");
            showProcessInfo();
        // Do something to display process running information
            break;
        case 'C':
            logMenuOption("User choose C");
            printf("Option C selected. Viewing memory hardware information and memory usage information.\n");
            showMemoryInfo();

            // Do something to display memory hardware information and memory usage information
        break;
        case 'D':
            logMenuOption("D");
        printf("Option D selected. Viewing storage device hardware information and storage device usage information.\n");
        showStorageInfo();
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
