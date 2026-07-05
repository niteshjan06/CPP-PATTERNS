#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     int start = 1; // starter variable to store 1 or 0.
     for(int i=0;i<n;i++){ // loop for printing n lines.
         
         
         if(i % 2 == 0) start = 1; // conditions for printing either 1 or 0.
         else start = 0;
         
         for(int j=0;j<=i;j++){ // loop for printing start variable followed by pattern.
            cout << start;
            start = 1- start; // it swaps start between 1 and 0.
         }
         cout <<endl;
     }
    return 0;
}
