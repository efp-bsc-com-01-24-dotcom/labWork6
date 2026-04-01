#include <iostream>

using namespace std;

int main(){
    int dimetion1, dimetion2;
    cout<<"Enter the dimetions of the 2D array (rows and columns): ";
    cin>>dimetion1>>dimetion2;  
    int** dynamicArray2D = nullptr;
    dynamicArray2D = new int*[dimetion1];
    if(dynamicArray2D == nullptr) {
        cout<<"Memory allocation failed!"<<endl;
        return 1;
    }else{
        for(int i=0; i<dimetion1; i++) {
            dynamicArray2D[i] = new int[dimetion2];
            if(dynamicArray2D[i] == nullptr) {
                cout<<"Memory allocation failed!"<<endl;
                return 1;
            }
        }
        for(int i=0; i<dimetion1; i++) {
            for(int j=0; j<dimetion2; j++) {
                cout<<"Enter element ["<<i+1<<"]["<<j+1<<"]: ";
                cin>>dynamicArray2D[i][j];
            }
        }
        for(int i=0; i<dimetion1; i++) {
            for(int j=0; j<dimetion2; j++) {
                cout<<dynamicArray2D[i][j]<<" ";
            }
            cout<<endl;
        }
        delete [] dynamicArray2D;
    }
    return 0;

}