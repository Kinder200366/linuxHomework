//
// Created by 123 on 2024/5/21.

#include<stdio.h>
#include<stdlib.h>

void showCPUInfo() {
    FILE *fp = fopen("/proc/cpuinfo","r");
    if(fp == NULL) {
        printf("Error opening /proc/cpuinfo");
        return ;
    }
    char line[1000];
    while(fgets(line,sizeof(line),fp)) {
        printf("%s",line);
    }
    fclose((fp));
}
void showProcessInfo(){
    system("ps aux");
}
void showMemoryInfo() {
    system("lshw -class memory");
}
void showStorageInfo() {
    system("df -h");
}

//
