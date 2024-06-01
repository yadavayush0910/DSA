// Online C++ compiler to run C++ program online
#include <iostream>
#include <unordered_map> // Include the header for unordered_set

using namespace std ;
int main() {
   unordered_map<string,int> m;
   m["gfg"]=20;
   m["courses"]=30;
   m.insert({"enrollment", 14});
for(auto it=m.begin(); it!=m.end();it++)
    cout <<it->first << " - " << it->second<<endl;    
cout<<endl;
auto ite=m.find("gfg");
if(ite!=m.end())
{
    cout<<(ite->second)<<endl;
}
for(auto x :m)
   cout<<x.first <<" -"<<x.second<<endl;
  
if(m.find("enrollments")!=m.end())  
   cout<<"found\n";
else
   cout <<"Not found\n";
   
cout<< m.size()<<endl;   
m.erase(m.begin(),m.end());
cout<< m.size()<<endl;
    return 0;
}