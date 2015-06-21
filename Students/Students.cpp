#include "xcahp.h"
#include "color.h"
#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <windows.h>

#define VERSION "1.150620"

using namespace std;

int mainframe(void);
void clean(void);

struct Student
{
	
};
int main(int argc, char const *argv[])
{
    bool flag = true;

	int int_choiceNum = mainframe();

    while(flag){
        switch(int_choiceNum){
            case 1:
                clean();
                flag = false;
                cout<<"1";
                break;
            case 2:
                clean();
                flag = false;
                cout<<"2";
                break;
            case 3:
                clean();
                flag = false;
                cout<<"3";
                break;
            case 4:
                clean();
                flag = false;
                cout<<"4";
                break;
            case 5:
                clean();
                flag = false;
                cout<<"5";
                break;
            case 6:
                clean();
                flag = false;
                cout<<"6";
                break;
            case 7:
                clean();
                flag = false;
                cout<<"7";
                break;
        }
    }
    getch();
	return 0;
}
void clean()
{
	gotoxy(1000,1000);
	system("cls");
}
int mainframe()
{
    hidecusor();

    string str_choice = ">>";//chosing curson
    unsigned int int_choiceNum = 1;//action
    unsigned int int_choiceLine = 5;
    int  ch_key;//move the choice
    bool flag = true;//control the loop
	/*******************draw the around(begin)*************************************/
    CYAN_BLACK;cout<<"                                \t\t\t\t\t\t";BLACK_WHITE;
    for (int i = 1,j = 1; j < 25 ; ++j)
    {
    	gotoxy(i,j);cout<<"\b";
    	CYAN_BLACK;cout<<"  ";BLACK_WHITE;
    }
    CYAN_BLACK;cout<<"                                \t\t\t\t\t\t";BLACK_WHITE;
    gotoxy(79,3);
    for (int i = 78,j = 1; j < 25; ++j)
    {
    	gotoxy(i,j);
    	CYAN_BLACK;cout<<"  ";BLACK_WHITE;
    }
    /****************draw the around(end)***************************************/
    /****************draw the options(begin)************************************/
    gotoxy(30,2);BLACK_RED;cout<<"Students Mannager";BLACK_WHITE;
    gotoxy(25,5);BLACK_DGREEN;cout<<"Seek a student's information";BLACK_WHITE;
    gotoxy(25,7);BLACK_DGREEN;cout<<"Add a student's information";BLACK_WHITE;
    gotoxy(25,9);BLACK_DGREEN;cout<<"Change a student's information";BLACK_WHITE;
    gotoxy(25,11);BLACK_DGREEN;cout<<"Delete a student's information";BLACK_WHITE;
    gotoxy(25,13);BLACK_DGREEN;cout<<"See a student's grades";BLACK_WHITE;
    gotoxy(25,15);BLACK_DGREEN;cout<<"Print all the students' information";BLACK_WHITE;
    gotoxy(25,17);BLACK_DGREEN;cout<<"Exit";BLACK_WHITE;
    gotoxy(2,23);BLACK_WHITE;cout<<"Version: "<<VERSION<<"  ";BLACK_PURPLE;cout<<"'w'";BLACK_WHITE; cout<<" to move up,";BLACK_PURPLE; cout<<"'s'";BLACK_WHITE; cout<<" to move down";BLACK_WHITE;
    gotoxy(22,5);BLACK_YELLOW;cout<<str_choice;BLACK_WHITE;gotoxy(0,0);
    /***************draw the options(end)*************************************/
    /***************move actions(begin)***************************************/
    while(flag){
            switch(ch_key = getch()){
                case 'w':
                    if(int_choiceLine!=5){
                        BLACK_WHITE;gotoxy(22,int_choiceLine);cout<<"  ";
                        BLACK_YELLOW;gotoxy(25,int_choiceLine-=2);cout<<"\b\b\b"<<str_choice;BLACK_WHITE;
                        int_choiceNum -= 1;
                    }
                    break;
                case 's':
                    if(int_choiceLine!=17){
                        BLACK_WHITE;gotoxy(22,int_choiceLine);cout<<"  ";
                        BLACK_YELLOW;gotoxy(25,int_choiceLine+=2);cout<<"\b\b\b"<<str_choice;BLACK_WHITE;
                        int_choiceNum += 1;
                    }
                    break;
                case '\n':   
                    flag = false;
                    break;
                case '\r':  
                    flag = false;
                    break;
                default:
                    ;

        }
    }
    /***************move actions(end)*****************************************/
    return int_choiceNum;

}
