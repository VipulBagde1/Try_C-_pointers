#include <iostream>

void increament(int *p);

int main (){
    int a =10;
    increament(&a); // actual argument
    std::cout<<a;
}
 void increament(int *p /*formal argument*/){
        *p=*p+1;
 }
 //In formal argument used a pointer to veribale a and in actual argument used address of a
