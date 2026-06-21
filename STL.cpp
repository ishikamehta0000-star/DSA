#include<bits/stdc++.h>//HAVING all kind of libary 
using namespace std;

void print(){
    pair<int,int> p1 = {3,4};
    cout << p1.first << " " << p1.second << endl;
    
    pair<int, pair<int,int>> q1 = {1,{3,4}};
    cout << q1.first << " " << q1.second.first << " " << q1.second.second << endl;
    
    pair<int,int> arr[] = {{1,2},{3,5}};  // fix
    cout << p1.first << " " << p1.second << endl;
    cout << q1.first << " " << q1.second.first << endl;
    cout << arr[1].second << endl;
}

void Explainvector(){
    vector<int> v;
    vector<int> v2(5);
    v.push_back(1);
    v.emplace_back(2);
    
    vector<pair<int,int>> p;
    p.push_back({1,2});   // fix
    p.emplace_back(1,3);
    
    vector<int> r(5,20);  // fix
    cout << r[0] << endl;
    cout << v[1] << endl;
}


int main(){
    print();
    Explainvector();
    return 0;
}