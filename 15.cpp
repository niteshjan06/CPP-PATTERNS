#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(int i=0;i<n;i++){ // loop for iterating n lines.
         for(char j='A';j<n-i+'A';j++){ // loop for printing alphabet triangle pattern.
             cout << j;
         }
         cout << endl;
     }
    return 0;
}
