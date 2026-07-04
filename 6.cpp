#include<iostream>
using namespace std;
int main(){

    int n;
    
    cout << "Enter your input: ";
    cin >> n;
    
    for(int i=1;i<=n;i++){ // loop for print n lines.
        for(int j=1;j<=i;j++){ // loop for print numbers till i.
            cout << j;
        }
        cout << endl;
    }
    
    return 0;
}
