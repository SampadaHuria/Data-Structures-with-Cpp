/* Function only */
int modularExponentiation(int x,int n,int m)
{
    
    int res=1;
    while(n>0)
    {
        if(n&1)
        {
            
            //odd
            res=(1LL * (res) *(x)%m)%m;
        }
        x=(1LL *(x)%m*(x)%m)%m;
        n=n>>1; //Divide by 2=Right shift by 1
    }
    return res;
}
