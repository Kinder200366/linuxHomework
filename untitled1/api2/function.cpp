//
// Created by 123 on 2024/5/21.
//


#include <iostream>
#include <cstdlib>

int main1() {
    char choice;

    while (true) {
        // ��ʾϵͳ����
#ifdef linux
        system("clear")
#endif
#ifdef __WINDOWS_
        system("cls");
#endif
        std::cout << "------------------" << std::endl;
        system("date '+%A\t%d/%m/%y'");
        std::cout << "------------------" << std::endl;

        // ��ʾ�˵�
        std::cout << "A:�鿴������Ϣ" << std::endl;
        std::cout << "B:�鿴�û���Ϣ" << std::endl;
        std::cout << "C:��ʾ��ǰĿ¼��Ϣ" << std::endl;
        std::cout << "D:��ʾ���������Linux�ں˰汾����ǰIP��ַ" << std::endl;
        std::cout << "E:�˳�" << std::endl;
        std::cout << "��ѡ���ܣ�";
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
                std::cout << "�˳�����" << std::endl;
            return 0;
            default:
                std::cout << "��Ч���룬������ѡ��" << std::endl;
        }
    }

    return 0;
}