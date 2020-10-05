#include<iostream>
#include<conio.h>
#include<Windows.h>
#include<string.>
#include<functional>
#include<fstream>
#include "Menu.h"

using namespace std;
void adminChoice();

bool LoggedIn;

class Admin{
    string adminName;
    string adminPass;
    string checkArr[2];

    public:

        Admin(string adminName, string adminPass){
            this->adminName = adminName;
            this->adminPass = adminPass;
        }

        bool adminLogin(){
            int i = 0;
            hash<string> myPwdHash;
            
            string hashPwd = to_string(myPwdHash(adminPass));
            ifstream openFile;
            string myText;
            openFile.open("Admin_Detail.txt");
            /*while(!openFile.eof()){
                getline(openFile, checkArr[0], '\n');
                getline(openFile, checkArr[1], '\n');
            }*/
            while(getline(openFile,myText)){
                checkArr[i] = myText;
                i++;
            }
            
            if(adminName == checkArr[0] && hashPwd == checkArr[1]){
                return true;
            }
            cout<<checkArr[0]<<"\n"<<checkArr[1];
            return false;
        }
};

void createAdminObj(){
    Admin admin("Arbaaz", "HelloWorld");
    if(admin.adminLogin() == true){
        cout<<"Login Successful.\n";
        LoggedIn = true;
    }
    else{
        cout<<"Wrong Username or Password.\n";
        //drawAdminMenu();
        adminChoice();
    }
}



void initRun(){
    int initOption;
    drawMainMenu();
    cout<<"Enter Your Choice : ";
    cin>>initOption;

    switch(initOption){
        case 1:
        drawAdminMenu();
        adminChoice();
        break;

        case 2:
        drawStudentMenu();
        break;

        case 3:
        drawEmployeeMenu();
        break;

        case 0:
        exit(10);
        break;

        default:
        system("cls");
        initRun();
        break;
    }
}

void adminChoice(){
    int adminOption;
    LoggedIn = false;
    
    cout<<"Enter Your Choice : ";
    cin>>adminOption;

    switch(adminOption){
        case 1:
        //Admin admin("Arbaaz","HelloWorld");
        createAdminObj();
        break;

        case 2:
        drawStudentMenu();
        break;

        case 3:
        drawEmployeeMenu();
        break;

        case 0:
        initRun();
        break;

        default:
        system("cls");
        adminChoice();
        break;
    }
}



void main(){
    
    initRun();
    
    getch();
}