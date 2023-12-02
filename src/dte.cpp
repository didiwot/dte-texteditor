#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>


int main(){
    char c;
    while(true)
    {
        if(_kbhit()){
            c = _getch();
        }
    }
    std::cout << c;
    _getch();
    return 0;
}