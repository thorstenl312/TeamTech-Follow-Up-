#pragma once
#include <iostream>
using namespace std;
class Square{
    private:
    public:
        Square();
        void print();
};

Square::Square(){

}

void Square::print(){   
    cout << " ______" << endl;
    cout << "|      |" << endl;
    cout << "|      |" << endl;
    cout << "|      |" << endl;
    cout << " ¯¯¯¯¯¯" << endl;
}