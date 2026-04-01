#include <iostream>

using namespace std;

int main(){
    int numberArrays[5];

    int * pPointer = nullptr;

    pPointer = numberArrays; // pointer now points to the first element of the array

    *pPointer = 10;

    pPointer++;
    *pPointer = 20;

    pPointer = &numberArrays[2]; // pointer now points to the third element of the array
    *pPointer = 30;

    pPointer = numberArrays+3; // pointer now points to the first element of the array again
    *pPointer = 40;

    pPointer = numberArrays; // pointer now points to the first element of the array again

    *(pPointer+4)=50; // assign value to the fifth element of the array using pointer arithmetic
    
    for(int i=0; i<5; i++){
        cout<<"numberArrays["<<i<<"] is "<<numberArrays[i]<<endl;
    }
}