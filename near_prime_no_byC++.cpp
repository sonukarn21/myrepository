#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
   if(n<2)
    return false;
   if(n<4)
    return true;
   if(n%2==0 || n%3==0)
        return false;
    for(int i=5;i*i<=n;i+=6)
    {
         if(n%i==0 ||n%(i+2)==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    int max_near_prime,min_near_prime,d1,d2,c=n;
    for(c=n;c>=1;c--)
    {
        if(prime(c))
        {
            min_near_prime=c;
            break;
        }
    }
    c=n;
    while(1)
    {
        if(prime(c))
        {
            max_near_prime=c;
            break;
        }
        c+=1;
    }
    d1=n-min_near_prime;
    d2=max_near_prime-n;
    if(d1>d2)
        cout<<max_near_prime;
    else if(d1<d2)
        cout<<min_near_prime;
    else
        cout<<max_near_prime<<" "<<min_near_prime;
    return 0;
}
