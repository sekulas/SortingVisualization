#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <ctime>
#include "windows.h"
#include "algorithms.h"
using namespace std;

void Bombelkowe::sortt()
{
    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(t[j - 1] > t[j]) {
                visualize(j-1, j);
                swap(t[j - 1], t[j]);
            }
        }
    }
}