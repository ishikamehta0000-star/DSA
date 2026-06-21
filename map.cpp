#include<bits/stdc++.h>
using namespace std;

//Map stores data in key-value pairs, keys are unique & sorted.

void explainmap(){
    map<string,int>m;

    m["apple"]=5;
    m["banana"]=6;
    m["orange"]=6;
    m["Pear"]=4;
    
    
    cout << m["Pear"] << endl;
    cout << m["apple"] << endl;
    cout << m["banana"] << endl;
    cout << m["orange"] << endl;

    m["apple"]=10; //update
    m.erase("Pear");

    for(auto p:m)
    cout<< p.first <<" "<<p.second <<endl;
// m["key"] = value;       // insert or update
// m.erase("key");         // remove
// m.find("key");          // iterator (or m.end() if not found)
// m.count("key");         // 1 if exists, 0 if not
// m.size();               // number of pairs
// m.clear();              // remove all

}
int main(){
    explainmap();
    return 0;
}