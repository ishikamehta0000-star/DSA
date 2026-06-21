#include<iostream>
#include<list>
using namespace std;
void explainlist(){
    list<int>l1;//empty list
    list<int>l2(5);//5 elements all 0
    list<int>l3(5,10);//5 elements all are 10
    list<int>l4={1,2,3,4};//initializer list
    list<int>l5(l4); //copy


    list<int>l={10,20,30};
    //Add
     l.push_back(40) ;
     l.push_front(90);
     l.insert(++l.begin(),99);
    //Remove
   // l.pop_back();//last remove 
    //l.pop_front();//first remove 
    //l.erase(l.begin());//sepecific postion remove 
    //l.remove(20); // value 20 wali sari elements 
    //l.clear(); //sab remove 
    //Accessing  elements 
    cout<<l.front()<<endl;// first element 
    cout<<l.back()<<endl; //last elememt
    // beech elemnts dekhane ho toh iterate karo gee 
     auto it=l.begin();
     advance(it,2);//2 steps aage 
     cout<<*it ; 
}

 int main(){
    explainlist();
    return 0;
 }