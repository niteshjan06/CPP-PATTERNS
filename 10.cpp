#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter your input: ";
    cin >> n;
    
    //loop for printing upper triangle.
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    
    //loop for printing lower triangle.
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            cout << "*";
        }
        cout <<endl;
    }
    return 0;
}
