#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter your input: ";
    cin >> n;
    
    for(int i=0;i<n;i++){ // loop for printing the upper star line
        cout << "*";
    }
    cout << endl;
    for(int i=1;i<n-1;i++){ //loop for printing the two vertical star lines.
        for(int j=0;j<n;j++){
            if(j == 0 || j == n-1){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    for(int i=0;i<n;i++){ // loop for printing the lower star line.
        cout << "*";
    }
    return 0;
}
