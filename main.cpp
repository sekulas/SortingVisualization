#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <ctime>
#include "windows.h"
using namespace std;

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE); //obsługa kolorów

int n, maxx, choice;

void vizualize(int first, int second, int t[])
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

void bombelkowe(int t[]){
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(t[j - 1] > t[j]) {
                vizualize(j-1, j, t);
                swap(t[j - 1], t[j]);
            }
        }
    }
}

void wybieranie(int t[])
{
    int wsk=0,mini=20;
    
    for(int i = 0; i < n; i++)
    {
        wsk = i;
        mini = i;
        for(int j = i; j < n; j++)
        {
            if(t[mini]>t[j])mini=j;
        }
        vizualize(wsk, mini, t);
        swap(t[wsk],t[mini]);
    }
}
/*
void wstawianie();
void scalanie();
void qsort();
void kubelkowe();
*/
void find_maximum(int t[]) //szukanie maksymalnej wartości w tablicy t
{
    int tempmax=0;
    for(int i = 0; i < n; i++)
        tempmax=max(tempmax,t[i]);
    maxx=tempmax;
}



void menu(int x, int t[]){
    // wybór algorytmu sortowania przy włączniu programu
    if(x == 1) bombelkowe(t);
    else if(x == 2) wybieranie(t);
    /*
    else if(x == 3) wstawianie();
    else if(x == 4) scalanie();
    else if(x == 5) qsort();
    else kubelkowe();
    */
}

int main(){
    SetConsoleTextAttribute(hConsole,15);
    cout << "Jakie sortowanko?\n1.Bombelkowe\n2.Przez Wybor\n3.Przez Wstawianie\n4.Przez Scalanie\n5.QSort\n6.Sortowanie Kubelkowe\n: ";
    cin >> choice;

    cout << "Dlugosc tablicy: ";
    cin >> n;
    int p[n]; 

    srand(time(NULL));
    for(int i = 0; i < n; i++){
        p[i] = rand() % 10 + 1;
    }
    find_maximum(p);    
    menu(choice,p);
}