#include <iostream>
#include <vector>
#include "time.h"
using namespace std;

class Algorithms{

    private:
    int t[10] = {10, 9, 8, 7 ,6 ,5, 4, 3, 2, 1};
    void prepare_array();
    void show_array();

    public:
    virtual void present();

};

class Bubblesort :public Algorithms{
    public:
    void present();

};
