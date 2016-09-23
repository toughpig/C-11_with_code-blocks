#include "loop.h"
#include <iostream>
#include <string>
#include <vector>
#include<stdexcept>
using namespace std;
int main(){
    loop loop1(1,'a');
    loop loop2(2,'a');
    loop1::add(loop2);
    cout<<loop1->id<<": "<<loop1->num<<endl;
}

