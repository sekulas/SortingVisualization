#include <iostream>
#include "algorithms.h"
#include "time.h"
using namespace std;


void Algorithms::prepare_array(){
    int randomint;
    srand(time(NULL));
    
    int t[10] = {10, 9, 8, 7 ,6 ,5, 4, 3, 2, 1};
    for(int i = 1; i < 10; i++)
    {
        randomint = rand() % 2;
        if(randomint==0)
        {
            swap(t[i-1],t[i]);
        }
    }
}

void Algorithms::show_array(){
    for(int i = 0; i < 10; i++)
    {
        cout<<t[i]<<" ";
    }
    cout<<"\n";
}

void Bubblesort::present(){
    
    
}
