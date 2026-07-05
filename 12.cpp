#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(int i=0;i<n;i++){ // loop for iterating n lines.
         for(int j=0;j<=i;j++){ // loop for printing first traingle.
             cout << j+1;
         }
         
         for(int j=0;j<(n-i)*2-2;j++){ //loop for printing white spaces.
             cout << " ";
         }
         
         for(int j=i;j>=0;j--){ //loop for printing second traingle.
             cout << j+1;
         }
         
         cout << endl;
     }
    return 0;
}
