#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(char i='A';i<'A'+n;i++){ // loop for iterating n times.
         for(char j='A';j<=i;j++){ // loop for printing the pattern.
             cout << j;
         }
         cout << endl;
     }
    return 0;
}
