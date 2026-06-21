#include<bits/stdc++.h>
using namespace std;
// print 1 to n times using recusrion 
void print(int n){
    if(n==0) return;
 print(n-1);
 cout << n << endl;
}
int main(){
    int n;
    cout  <<"Enter the number of times u want to print :-";
    cin>> n;
    print(n);
    return 0;
}