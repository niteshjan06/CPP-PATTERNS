#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(char i='A';i<'A'+n;i++){ // loop for iterating n lines.
         for(char j='A';j<=i;j++){ // loop for printing i for displaying alphabet pattern.
             cout << i;
         }
         cout << endl;
     }
    return 0;
}
