#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int m[10],p[10];
    int nm,np;
    int intf,totalintf;
    cout<<"Enter Number of Memory Blocks : ";
    cin>>nm;
    for(int i=1;i<=nm;i++)
    {
        cout<<"Enter Memory Block "<<i<<" size : ";
        cin>>m[i];
    }
    cout<<"Enter Number of Processes : ";
    cin>>np;
    for(int i=1;i<=np;i++)
    {
        cout<<"Enter Process "<<i<<" size : ";
        cin>>p[i];
    }

    for(int i=1;i<=nm;i++)
    {
        if(m[i]>=p[i])
        {
            cout<<"Process "<<i<<" is allocated to Memory Block "<<i<<endl;
            intf=m[i]-p[i];
            cout<<"Internal Fragmentation is "<<intf<<endl;
            totalintf+=intf;
        }
        else
        {
            cout<<"Process "<<i<<" is not allocated to Memory Block "<<i<<endl;
        }
    }
    cout<<"Total Internal Fragmentation is "<<totalintf<<endl;
}