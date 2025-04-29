#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

//FUCNCTION SYNTAX 
//MAPNAME.FUNCTIOINNAME(VALUE)

int main(){
//creating a map
    unordered_map<string,int> m;
//inserting pair
    pair<string,int>p1 =make_pair("hello",1);
    m.insert(p1);
    pair<string,int>p2("sparsh",2);
    m.insert(p2);

    m["mera"]=13;// CREATING MERA KEY VALUE PAIR FIRST TIME
    m["mera"]=14;// UPDATING THE KEYVALUE PAIR

//EVERY KEY is unique HAS ONE VALUE

// SEARCHING

cout<<m["mera"]<<endl;
// cout<<m.at("sparsh")<<endl;

cout<<m["unknown"]<<endl;
cout<<m.at("unknown")<<endl;
cout<<m["chintu"]<<endl;
cout<<m.at("chintu")<<endl;

//size
cout<<m.size()<<endl;


}

