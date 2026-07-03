#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter your input: ";
    cin >> n;

    for(int i=1;i<=n;i++){ // loop for printing no of lines.
        for(int j=1;j<=n-i;j++){ // loop for printing white spaces.
            cout << " ";
        } 
        for(int j=1;j<(i*2);j++){ // loop for printing astrisk.
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
