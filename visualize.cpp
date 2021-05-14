#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <ctime>
#include "windows.h"
#include "algorithms.h"
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //obsługa kolorów

void Algorithm::visualize(int first, int second)
{
    system("cls"); //czyść ekran
    int level=maxx;
    cout<<endl;
    for(int i = level; i >= 1; i--)
    {
        for(int j = 0; j < n; j++)
        {
            if(j==first||j==second) SetConsoleTextAttribute(hConsole,12); //implementacja kolorów
            else  SetConsoleTextAttribute(hConsole,10); 
            
            if(i-t[j]<=0)cout<<"#"; //wypisywanie kratki lub spacji w zależności od poziomu
            else cout<<" ";
        }
        cout<<endl;
    }
    Sleep(500);
}

void Algorithm::find_maximum()
{
    int tempmax=0;
    for(int i = 0; i < n; i++)
        tempmax=max(tempmax,t[i]);
    maxx=tempmax;
}