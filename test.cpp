#include <sys/types.h>
#include <unistd.h>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a = 0;

    if(fork() == 0)
    {
        a += 5;
        cout<<a<<&a<<"\n";
    }

    else
    {
        a -= 5;
        cout<<a<<&a<<"\n";
    }
}
