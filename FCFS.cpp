#include<iostream>
using namespace std;


int main()
{
    int at[10],bt[10],sum=0,wt[10];
    int np,waitimgtimesum=0;

    cout<<"Enter Number of Processes : ";
    cin>>np;

    for(int i=1;i<=np;i++)
    {
        cout<<"Enter Arrival Time of Process "<<i<<" : ";
        cin>>at[i];
        cout<<"Enter Burst Time of Process "<<i<<" : ";
        cin>>bt[i];
    }
    cout<<"Process ID\t\tBurst Time\t\tService Time\t\tArrival Time\t\tWaiting Time"<<endl;
    for(int i=1;i<=np;i++)
    {
        wt[i]=sum-at[i];
        cout<<i<<"\t\t\t"<<bt[i]<<"\t\t\t"<<sum<<"\t\t\t"<<at[i]<<"\t\t\t"<<wt[i]<<endl;
        sum+=bt[i];
    }
    for(int i=1;i<=np;i++)
    {
        // cout<<i<<"->"<<wt[i]<<endl;
        waitimgtimesum+=wt[i];
    }
    cout<<"Average Waiting Time : "<<(float)waitimgtimesum/np<<endl;
}