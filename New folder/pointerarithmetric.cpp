#include <iostream>

using namespace std;

int main(){
    
    /*^int x = 3;

    int y = ++x;

    cout<<"x is "<<x<<endl; // x is 4
    cout<<"y is "<<y<<endl; // y is 4
    */
   /* int x = 3;
    int y = x++;
    cout<<"x is "<<x<<endl; // x is 4
    cout<<"y is "<<y<<endl; // y is 3   
    */
    int* pPointer = nullptr;

    int numbersArrays[3] = {10,20,30};

    pPointer = numbersArrays; // pointer now points to the first element of the array

    cout<<"address of pointer: "<<pPointer<<endl; // Output the address stored in the pointer
    cout<<"numbersArrays[0] is "<<*pPointer<<endl; // Output the first element of the array

    cout<<"value at pPointer++: "<<*pPointer<<endl; // Output the first element of the array and then increment the pointer

    cout<<"value at ++pPointer: "<<*(++pPointer)<<endl; // Output the value at the address stored in the pointer
    pPointer = numbersArrays; // Reset pointer to the first element of the array
    cout<<"value at pPointer++:"<<*(pPointer++)<<endl; // Output the second element of the array
}
