#include <iostream>

using namespace std;

int main() {
    int numberOfobjects;
    string objectStr;
    int objectInt;
    cout<<"Enter the number of objects: ";
    cin>>numberOfobjects;

    int* dynamicArrayint = nullptr;
    string* dynamicArraystr = nullptr;

    dynamicArrayint = new int[numberOfobjects];
    dynamicArraystr = new string[numberOfobjects];

    if(dynamicArrayint == nullptr || dynamicArraystr == nullptr) {
        cout<<"Memory allocation failed!"<<endl;
        return 1;
    }else{
        for(int i=0; i<numberOfobjects; i++) {
            cout<<"Enter object "<<i+1<<" (string and integer): ";
            cin>>objectStr>>objectInt;
            dynamicArraystr[i] = objectStr;
            dynamicArrayint[i] = objectInt;
        }
        for(int i=0; i<numberOfobjects; i++) {
            cout<<"you enters: "<<dynamicArraystr[i]<<" & "<<dynamicArrayint[i]<<endl;
        }
        delete [] dynamicArrayint;
        delete [] dynamicArraystr;
    }


    return 0;
}