#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std;
void header();
string menu();
void logo();
string submenu();
void keys();
void Instructions();

main()
{
    string option;
    string choice;
    logo();
    Sleep(200);
    header();
    while(option<"3")
    {
        option = menu();
        if(option=="1")
        {
            cout << "Start " << endl;

        }
        if(option=="2")
        {
            while(choice<"3")
            {
                choice =  submenu();
                {
                if(choice=="1")
                    keys();
                }
                if (choice=="2")
                {
                    cout <<"PLEASE DO NOT PRESS ANY INVALID KEYS  : " << endl; 
                }
                if (choice=="3")
                {
                  break;
                }

            }
        }
        if(option=="3")
        {
            break;
        }
    }

   
   

}
void logo()
{
    
    cout <<"                                                                                  " << endl;
    cout <<"                                                                                  " << endl;
    cout <<"                                                                                  " << endl;
    cout <<"                                                                                  " << endl;
    cout <<"                __________________________________________|||     ___ FIRE        " << endl;
    cout <<"                __________________________________________ ------|___ >>>>>>>>    " << endl;
    cout <<"                    _________________|||_______________   |||                     " << endl;
    cout <<"                   |                                   |                          " << endl;
    cout <<"                   |___________________________________|                          " << endl;
    cout <<"                      |||                         |||                             " << endl;
    cout <<"          ========================================================                " << endl;
    cout <<"         |   @@           @@          @@          @@         @@   |               " << endl;
    cout <<"         | @@  @@       @@  @@      @@  @@      @@  @@     @@  @@ |               " << endl;
    cout <<"         |   @@           @@          @@          @@         @@   |               " << endl;
    cout <<"          ========================================================                " << endl;
    cout <<"                                                                                  " << endl;
    cout <<"______________________________FAST AND FURIOUS____________________________________" << endl;
    cout <<"                                                                                  " << endl;
}
void header()
{
    cout <<"                                                                                             " << endl;
    cout <<"                                                                                             " << endl;
    cout <<"              #########       ##       #####    ############                                 " << endl;
    cout <<"              ##            ##  ##    #             ##                                       " << endl;
    cout <<"              #########    ##    ##    ##           ##        ##   ##      ## ######         " << endl;
    cout <<"              ##          ##########     ##         ##      ##  ## ## ##   ## ##    ##       " << endl;
    cout <<"              ##          ##      ##       ##       ##      ###### ##   ## ## ##    ##       " << endl;
    cout <<"              ##          ##      ##   #####        ##      ##  ## ##      ## ######         " << endl;
    cout <<"                                                                                             " << endl;
    cout <<"       ############     ####     ####    ########    ###      ####     ####    ####   ###### " << endl;
    cout <<"       ###              ####     ####    ##    ##    ###    ##    ##   ####    ####  #       " << endl;
    cout <<"       ############     ####     ####    ########    ###   ##      ##  ####    ####   ##     " << endl;
    cout <<"       ###              ####     ####    ##   #      ###   ##      ##  ####    ####     ##   " << endl;
    cout <<"       ###              ####     ####    ##    #     ###    ##    ##   ####    ####       ## " << endl;
    cout <<"       ###              #############    ##     #    ###      ####     ############   ###### " << endl;
    cout <<"                                                                                             " << endl; 

}
string menu()
{
    string option;
    cout << "                          " << endl;
    cout << "__________________________" << endl;
    cout << "1.  Start                 " << endl;
    cout << "2.  Option                " << endl;
    cout << "3.  Exit                  " << endl;
    cout <<"ENTER ONE OPTION  :        " << endl;
    cin>>option;
    return option;

}
string submenu()
{
    string option1;
    cout << "                   " << endl;
    cout << "1.  Keys.          " << endl;
    cout << "2.  Instructions.  " << endl;
    cout << "3.  Exit           " << endl;
    cout << "Enter any option : " << endl;
    cin >> option1;
    return option1;
}
void keys()
{
    cout <<"KEYS.                            "<<endl;
    cout <<"________________________________ "<<endl;
    cout <<"1. UP                     GO UP  "<<endl;
    cout <<"2. DOWN                   GO DOWN"<<endl;
    cout <<"3. LEFT                   GO LEFT"<<endl;
    cout <<"4. RIGHT                  GO RIGHT"<<endl;
    cout <<"5. FIRE Right             SPACE   "<<endl;
    cout <<"6. Fire Left              TAB     "<<endl;
    cout <<"Press any key to continue ........"<<endl;
    getch();
}
