#include<bits/stdc++.h>
using namespace std;
void explainset(){
    set<int> s;
    s.insert(8);
    s.insert(6);
    s.insert(5);
    s.insert(10);

    if(s.find(10)!=s.end())
     cout <<"Found" <<endl;

    for(int x:s)
        cout << x << endl;
      
     s.erase(10);
     cout <<"size of set: " <<s.size() <<endl;
// s.insert();         add element
// s.erase();          remove by value
// s.find();           returns iterator (or s.end() if not found)
// s.count();          1 if exists, 0 if not
// s.size();           number of elements
// s.clear();           remove all
// s.empty();           true if empty
}



int main(){
    explainset();
    return 0;
}