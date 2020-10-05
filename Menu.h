#include <iostream>
#include<iomanip>
#include<Windows.h>
//#include "Menu.h"


using namespace std;
void drawAdminMenu(){
    system("cls");
    cout<<setw(10)<<"Welcome Admin"<<setw(10)<<"\n";
    cout<<"1."<<setw(4)<<"Login (Mandatory)\n";
    cout<<"2."<<setw(4)<<"Add Employee\n";
    cout<<"3."<<setw(4)<<"Add Student\n";
    cout<<"4."<<setw(4)<<"Manage Employee\n";
    cout<<"5."<<setw(4)<<"Manage Student\n";
    cout<<"Press 0 to go back.\n";
}

void drawMainMenu(){
    system("cls");
    cout<<setw(10)<<"Welcome to School Management System."<<setw(10)<<"\n";
    cout<<"1."<<setw(4)<<"Admin\n";
    cout<<"2."<<setw(4)<<"Student\n";
    cout<<"3."<<setw(4)<<"Employee\n";
    cout<<"Press 0 to exit.\n";
}

void drawStudentMenu(){
    system("cls");
    cout<<"Under Development..\n";
}

void drawEmployeeMenu(){
    system("cls");
    cout<<"Under Development\n";
}

