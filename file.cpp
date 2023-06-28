#pragma warning(disable:4996)
//#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include <math.h>
#include <direct.h>

using namespace std;

void RenameFile() {
    char oldname[100];
    char newname[100];
    cout << "Введи старое имя файла:\n";
    cin.getline(oldname,100);
    cout << "Введи новое имя файла:\n";
    cin.getline(newname,100);
    if (rename(oldname, newname) != 0) {
        cout << "ОШИБКА!!! X_X\n";
    }
    else {
        cout << "Файл переименован\n";
    }
}

void RemoveFile() {
    char name[100];
    cout << "Введи старое имя файла:\n";
    cin.getline(name, 100);
    if (remove(name) != 0) {
        cout << "ОШИБКА!!! X_X\n";
    }
    else {
        cout << "Файл удалён\n";
    }
}

void CreateDir() {
    char name[100];
    cout << "Введи имя папки:\n";
    cin.getline(name, 100);
    if (_mkdir(name) == -1) {
        cout << "ОШИБКА!!! X_X\n";
    }
    else {
        cout << "папка создана\n";
    }
}

void RenameDir() {
    char oldname[100];
    char newname[100];
    cout << "Введи старое имя папки:\n";
    cin.getline(oldname, 100);
    cout << "Введи новое имя папки:\n";
    cin.getline(newname, 100);
    if (rename(oldname, newname) != 0) {
        cout << "ОШИБКА!!! X_X\n";
    }
    else {
        cout << "папка переименована\n";
    }
}

void RemoveDir() {
    char name[100];
    cout << "Введи имя папки:\n";
    cin.getline(name, 100);
    if (_rmdir(name) == -1) {
        cout << "ОШИБКА!!! X_X\n";
    }
    else {
        cout << "папка удалена\n";
    }
}

int main()
{
    setlocale(0, "");
    srand(time(nullptr));

    //FILE* f = fopen("C:\\Users\\tekat\\OneDrive\\Рабочий стол\\words.txt","r");
    

    int user;
    do {
        cout << "Выберите пункт в меню:\n";
        cout << "[1] - RenameFile\n[2] - RemoveFile\n[3] - CreateDir\n";
        cout << "[4] - RenameDir\n[5] - RemoveDir\n[0] - Exit.\n";
        cout << "Ваш выбор: ";
        cin >> user;
        getchar();
        cout << endl;
        switch (user) {
        case 1:
            RenameFile();
            break;
        case 2:
            RemoveFile();
            break;
        case 3:
            CreateDir();
            break;
        case 4:
            RenameDir();
            break;
        case 5:
            RemoveDir();
            break;
        default:
            cout << "Пока-пока\n";
            break;
        }

    } while (user != 0);
    

}
