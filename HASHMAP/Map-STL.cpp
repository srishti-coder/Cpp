#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{

//map creation
unordered_map<string,int> m;

//INSERTION

//method 1

pair<string,int> p= make_pair("srishti",3);
m.insert(p);

//method 2

pair<string,int> pair2("mera",2);
m.insert(pair2);

//method3

m["hai"]=1;
//if we insert value 2 to hai then now it will update the value of hai
m["hai"]=2;

//SEARCH

cout<<m["mera"]<<endl;
cout<<m.at("srishti")<<endl;
//IF we inset any unknown key by using at method then it will return nothing
//cout<<m.at("unknownkey")<<endl;

//Now if we insert any unknown key by simply m[] then we will get 0 and if afterward again we use at function then now we will get 0.

cout<<m["unknownkey"]<<endl;
cout<<m.at("unknownkey")<<endl;

//SIZE

cout<<m.size()<<endl;

//TO CHECK PRESENCE,IF PRESENT IT WILL RETURN 1 ELSE 0

cout<<m.count("srishti")<<endl;
cout<<m.count("unknownkey")<<endl;
cout<<m.count("absent")<<endl;

//ERASE OR REMOVE

m.erase("hai");
cout<<m.size()<<endl; 

//ITERATOR TO PRINT MAP

//METHOD 1
for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;
}

//METHOD 2
unordered_map<string,int> :: iterator it = m.begin();

while(it != m.end())
{
    cout<< it->first<<" "<< it->second <<endl;
    it++;
}

//In both the methods we don't get the map printed in the way we wrote as we used unordered map so if use want in the same manner just change line 65 and line 10 unordered map to just map bt while doing this ur time complexity wil change from O(1) to O(log n).


return 0;
}