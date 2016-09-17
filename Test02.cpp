#include "Test02.h"
#include<iostream>
using namespace std;
int main(){
    int i=10;
    auto j=i-5;
    decltype(j-1) k=5;
    cout<<i<<" "<<j<<" "<<k;
}
Test02::Test02()
{
    //ctor
}

Test02::~Test02()
{
    //dtor
}
