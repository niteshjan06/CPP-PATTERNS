#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter your input: ";
    cin >> n;
    
    // The below loop is for printing pyramid pattern.
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<=(i*2);j++){
            cout << "*";
        }
        cout << endl;
    }
    
    //The below loop is for printing inverted pyramid pattern.
    for(int i=n;i>0;i--){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int j=0;j<(i*2)-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
