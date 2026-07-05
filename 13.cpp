#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     int num=1; // num variable for printing pattern numbers.
     for(int i=0;i<n;i++){ // loop for iterating n lines.
         for(int j=0;j<=i;j++){ // loop for printing right-angled triangle using num variable.
             cout << num++ << " ";
         }
         cout << endl;
     }
    return 0;
}
