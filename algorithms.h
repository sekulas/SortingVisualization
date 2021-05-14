#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <ctime>
#include "windows.h"
using namespace std;

class Algorithm 
{
    public:
        int t[1000];
        int maxx;
        int n;
        void visualize(int, int); 
        void find_maximum();
        void write(int temp[], int num)
        {
            n=num;
            for(int i = 0; i < n; i++)
                t[i]=temp[i];
        }
        void read()
        {
            for(int i = 0; i < n; i++)cout<<t[i]<<" ";
        }
};

class Bombelkowe :public Algorithm
{
    public:
        void sortt();
};

