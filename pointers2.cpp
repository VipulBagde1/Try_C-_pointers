#include <iostream>

int main (){
    int arr[5]={1,32,12,3,2};
    for (int i = 0; i < 5; i++)
    {
        std::cout<<&arr[i]<<std::endl;
        std::cout<<arr[i]<<std::endl;
        std::cout<<arr+i<<std::endl;
        std::cout<<*(arr+i)<<std::endl;
    }
}
 