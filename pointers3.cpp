#include <iostream>

int sumofdigit(int arr[]);
int main (){

    int arr[]={1,32,12,3,2};
    int size1 = sizeof(arr);//we will need to calculate the size here and pass it seperatly
   int total= sumofdigit(arr);
    std::cout<<total<<"\n"<<size1;
}
int sumofdigit(int arr[]/*it is a pointer to array*/){
    int sum;
    int size = sizeof(arr)/sizeof(arr[0]);//it gives error cause the array is is actually a pointer and it's size is 4
    for(int i; i>size; i++){
        sum = sum + arr[i];
    }

return sum;
}