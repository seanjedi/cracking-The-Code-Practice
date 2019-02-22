#include <string>
#include "question1.h"
#include "question2.h"
#include "question3.h"
#include "question4.h"
#include "question5.h"
#include "question6.h"
#include "question7.h"
#include "question8.h"
#include "question9.h"
#include <iostream>
#include <fstream>

using namespace std;

void choices(int question);

int main(int argc, char *argv[])
{
    bool quit = false;
    while (!quit)
    {
        int question;
        char choice;
        //Ask what question the user wants to test
        cout << "What Question do you want? (Questions 1 to 9): ";
        cin >> question;
        choices(question);

        //Ask whether or not they want to quit?
        cout << "Would you like to quit?(y/n): ";
        cin >> choice;
        switch (choice)
        {
        case 'n':
            quit = false;
            break;
        default:
            quit = true;
            break;
        }
    }

    return 0;
}

void choices(int question){
    switch (question)
        {
        case 1:
            system("CLS");
            question1();
            system("PAUSE");
            system("CLS");
            break;
        case 2:
            system("CLS");
            question2();
            system("PAUSE");
            system("CLS");
            break;
        case 3:
            system("CLS");
            question3();
            system("PAUSE");
            system("CLS");
            break;
        case 4:
            system("CLS");
            question4();
            system("PAUSE");
            system("CLS");
            break;
        case 5:
            system("CLS");
            question5();
            system("PAUSE");
            system("CLS");
            break;
        case 6:
            system("CLS");
            question6();
            system("PAUSE");
            system("CLS");
            break;
        case 7:
            system("CLS");
            question7();
            system("PAUSE");
            system("CLS");
            break;
        case 8:
            system("CLS");
            question8();
            system("PAUSE");
            system("CLS");
            break;
        case 9:
            system("CLS");
            question9();
            system("PAUSE");
            system("CLS");
            break;
        default:
            cout << "Not a valid input" << endl;
            break;
        }
}