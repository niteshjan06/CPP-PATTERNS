#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(int i=0;i<n;i++){ // loop for iterating n lines.
         for(int j=0;j<n-i;j++){ // loop for printing white spaces.
             cout << " ";
         }
         for(char j='A';j<='A'+i;j++){ // loop for printing alphabets in pyramid pattern.
             cout << j << " ";
         }
         cout << endl;
     }
    return 0;
}
