#include<iostream>
using namespace std;
long long toh(int N, int from, int to, int aux)
{
    if(N==0)
    {
        return 0;
    }
    toh(N-1,from,aux,to);
    cout<<"move disk "<<N<<"from rod"<<from<<"to rod"<<to<<endl;
    toh(N-1,aux,to,from);
}
int main()
{
    int N;
    cin>>N;
    toh(N,1,3,2);
    return 0;
}

