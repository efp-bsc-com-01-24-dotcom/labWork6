#include <iostream>

using namespace std;

int main(){
    int firstValue;
    int secondValue;

    int * pPointer = nullptr;

     pPointer = &firstValue; // pointer now points to firstValue
    *pPointer = 10; // assign value to firstValue through pointer

    pPointer = &secondValue; // pointer now points to secondValue
    *pPointer = 20; // assign value to secondValue through pointer

    cout<<"firstValue is "<<firstValue<<endl;
    cout<<"secondValue is "<<secondValue<<endl;


}