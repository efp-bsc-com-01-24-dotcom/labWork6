#include <iostream>

using namespace std;

int main(){
    int* pPointer = nullptr; // Initialize pointer to null

    int integerVar = 5;

    pPointer = &integerVar; // Assign the address of integerVar to pPointer

    cout<< "Value of integerVar: " << integerVar << endl; // Output the value of integerVar
    cout<< "Address of integerVar: " << &integerVar << endl; // Output the address of integerVar

    cout<<"pPointer: "<<pPointer<<endl; // Output the value of pPointer (address of integerVar)

    cout<<"address of pPointer: "<<&pPointer<<endl; // Output the address of pPointer
    return 0;

}