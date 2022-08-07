#include<iostream>
#include<array>
using namespace std;
int main(){
array<int,4>a={1,2,3,4};
int size=a.size();
for(int i=0;i<size;i++)
{
    cout<<a[i]<<endl;
}
cout<<"Element at 2nd pos."<<a.at(2)<<endl;
cout<<"Empty or not."<<a.empty()<<endl;
cout<<"First element"<<a.front()<<endl;
cout<<"Last element"<<a.back()<<endl;
}
