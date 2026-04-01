#include <iostream>

using namespace std;

int main(){
    int numberOfElements = 0;
    int * dynamicArray = nullptr;

    cout<<"how many number would you like to type? ";
    cin>>numberOfElements;

    dynamicArray = new int[numberOfElements]; // allocate memory for an array of integers
    if(dynamicArray == nullptr){
        cout<<"memory allocation failed"<<endl; // exit with error code
    }else{
        for(int i=0; i<numberOfElements; i++){
            cout<<"enter number "<<i+1<<": ";
            cin>>dynamicArray[i]; // assign value to the array element
        }

        cout<<"you entered: ";
        for(int i=0; i<numberOfElements; i++){
            cout<<dynamicArray[i]<<", "; // output the array element
        }
        cout<<endl;

        delete[] dynamicArray; // deallocate memory
    }
}