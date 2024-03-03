#include <iostream>

void increament(int a);

int main (){
    int a =10;
    increament(a); // actual argument
    std::cout<<a;
}
 void increament(int a /*formal argument*/){
        a=a+1;
 }