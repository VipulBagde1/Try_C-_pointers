#include <iostream>
#include<string.h>

void print(char *C){

    while(*C != '\0'){

        std::cout<<*C;
        C++;
    }

}

int main(){

    char C[20] = "Hello"; 
    print(C);
}