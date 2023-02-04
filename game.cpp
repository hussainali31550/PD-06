#include <iostream>
#include <windows.h>
using namespace std;

void gotoxy(int x, int y);
void printMaze();
void printpacman(int x, int y);
char getCharAtxy(short int x, short int y);
void space(int x, int y);
void health(int a);
void ghost(int b, int c);
main()
{
    int ax = 10;
    int bx = 40;
    int cx = 2;
     int px = 7;
    int py = 2;
    bool gameRunning = true;

    system("cls");
    printMaze();
    
    printpacman(px, py);
    
  

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_UP))
        {
            char nextlocation = getCharAtxy(px, py - 1);
            if (nextlocation == ' ')
            {

                space(px, py);
                py = py - 1;
                printpacman(px, py);
            }
            else
            {
                ax = ax - 1;
            }
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextlocation = getCharAtxy(px, py + 1);
            if (nextlocation == ' ')
            {

                space(px, py);
                py = py + 1;
                printpacman(px, py);
            }
            else
            {
                ax = ax - 1;
            }
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextlocation = getCharAtxy(px + 1, py);
            if (nextlocation == ' ')
            {

                space(px, py);
                px = px + 1;
                printpacman(px, py);
            }
            else
            {
                ax = ax - 1;
            }
        }
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextlocation = getCharAtxy(px - 1, py);
            if (nextlocation == ' ')
            {

                space(px, py);
                px = px - 1;
                printpacman(px, py);
            }
            else
            {
                ax = ax - 1;
            }
        }
        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        
        ghost(bx, cx);
       

        Sleep(200);
    health(ax);
    }
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void printpacman(int x, int y)
{
    gotoxy(x, y);
    cout << "P";
}

void space(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printMaze()
{
    cout << "    ############################################################################                      " << endl;
    cout << "    ||                   |%%|              |%|                                ||                      " << endl;
    cout << "    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                       " << endl;
    cout << "    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      " << endl;
    cout << "    ||  |%|   %%%%%%%%   |%%|              |%|   %%%%%%%%   |%%|              ||                    " << endl;
    cout << "    ||  |%|   %%%%%%%%          %   |%%|   |%|   %%%%%%%%          %   |%%|   ||                     " << endl;
    cout << "    ||        %%%%%%%%%%%%%%%   %   |%%|   |%|   %%%%%%%%%%%%%%%   %   |%%|   ||                     " << endl;
    cout << "    ||                          %   |%%|                           %   |%%|   ||                    " << endl;
    cout << "    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%%%%%%%%%%%%%%%|   ||                   " << endl;
    cout << "    ||     %%   |%|   |%%           |%%|      %%   |%|   |%%           |%%|   ||                      " << endl;
    cout << "    ||     %%   |%|   |%%   |%%|    |%%|      %%   |%|   |%%   |%%|    |%%|   ||                      " << endl;
    cout << "    ||     %%   |%|   |%%   |%%|    |%%|      %%   |%|   |%%   |%%|    |%%|   ||                         " << endl;
    cout << "    ||          |%|   |%%                          |%|   |%%                  ||                        " << endl;
    cout << "    ||          |%|   |%%%%%%%%%%%%%%%%|           |%|   |%%                  ||                        " << endl;
    cout << "    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   " << endl;
    cout << "    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   " << endl;
    cout << "    ||  %%%%%   |%|   |%%%%%%%%%%%%%%%%|   %%%%%   |%|   |%%    %%%%%  %%%|   ||                   " << endl;
    cout << "    ||                   |%%|              |%|                                ||                      " << endl;
    cout << "    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      " << endl;
    cout << "    ||  |%|   %%%%%%%%   |%%|    %%%%%%%   |%|   %%%%%%%%   |%%|    %%%%%%%   ||                      " << endl;
    cout << "    ############################################################################                           " << endl;
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void health(int a)
{
    if (a == 0)
    {
        system("cls");
    }
    gotoxy(5, 25);
    cout << "Health : " << a;
}

void ghost(int b, int c)
{
   
    
        gotoxy(b, c);
        cout << "G";
        gotoxy(b, c);
        cout << " ";
        c = c + 1;
       gotoxy(b, c);
       cout<<"G";
        if (c == 19)
        {
        
            gotoxy(b,c);
            cout<<" ";
            c = 1;
        }
        Sleep(400);
    
}