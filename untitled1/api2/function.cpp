//
// Created by 123 on 2024/5/21.
//


#include <iostream>
#include <cstdlib>

int main1() {
    char choice;

    while (true) {
        // 显示系统日期
#ifdef linux
        system("clear")
#endif
#ifdef __WINDOWS_
        system("cls");
#endif
        std::cout << "------------------" << std::endl;
        system("date '+%A\t%d/%m/%y'");
        std::cout << "------------------" << std::endl;

        // 显示菜单
        std::cout << "A:查看进程信息" << std::endl;
        std::cout << "B:查看用户信息" << std::endl;
        std::cout << "C:显示当前目录信息" << std::endl;
        std::cout << "D:显示计算机名、Linux内核版本、当前IP地址" << std::endl;
        std::cout << "E:退出" << std::endl;
        std::cout << "请选择功能：";
        std::cin >> choice;

        switch(choice) {
            case 'A':
            case 'a':
                std::system("ps");
            break;
            case 'B':
            case 'b':
                std::system("who");
            break;
            case 'C':
            case 'c':
                std::system("ls -l");
            break;
            case 'D':
            case 'd':
                std::system("hostname");
            std::system("uname -r");
            std::system("hostname -I");
            break;
            case 'E':
            case 'e':
                std::cout << "退出程序" << std::endl;
            return 0;
            default:
                std::cout << "无效输入，请重新选择" << std::endl;
        }
    }

    return 0;
}