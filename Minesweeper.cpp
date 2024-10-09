#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <thread>
#include <chrono>

using namespace std;
void SetColor(int color = 2)
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
void randMine(bool isMine[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int newMine;
        do
        {
            newMine = (rand() % 100) + 1;
        } while (isMine[newMine] == true);
    }
}
int main()
{
    srand(static_cast<unsigned int>(time(0)));

    bool isMine[100] = {false}; // 創建地雷位置陣列

    int userInput;

    randMine(isMine, 5);
    int mineX = 5;
    int mineY = 5;

    do
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (mineX == i && mineY == j)
                {
                    cout << " *";
                }
                else
                    cout << " * ";
            }
            cout << endl;
        }
        cout << endl;
    } while (userInput = getch());
    return 0;
}
