#include<iostream>
using namespace std;
int main(){
     
     int n;
     cout << "Enter your input: ";
     cin >> n;
     
     for(int i=0;i<n;i++){ // loop for iterating n lines.
        for(char j='A'+n-1;j>='A'+n-i-1;j--){ // loop for printing alphabet pattern.
            cout << j << " ";
        }
         cout << endl;
     }
    return 0;
}
