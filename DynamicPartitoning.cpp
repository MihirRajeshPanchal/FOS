#include<stdio.h>
#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int memory_size,np,p[10],sum;
    int delete_process;
    cout<<"Enter Total Memory Size : ";
    cin>>memory_size;
    cout<<"Enter Number of Processes : ";
    cin>>np;
    
    Label:
    for(int i=1;i<=np;i++)
    {
        cout<<"Enter Size of Process "<<i<<" : ";
        cin>>p[i];
        sum+=p[i];
    }
    if(sum>memory_size)
    {
        cout<<"Sum of Process Size exceeds Memory Size"<<endl;
        goto Label;
    }
    else
    {
        cout<<"Total Memory : "<<memory_size<<endl;
        cout<<"Used Memory : "<<sum<<endl;
        cout<<"Remaining Memory : "<<memory_size-sum<<endl;
    }
    cout<<"Process ID\t\tProcess Size\t\t\tPartition Size\t\t\tMemory Status"<<endl;
    for(int i=1;i<=np;i++)
    {
        cout<<i<<"\t\t\t\t"<<p[i]<<"\t\t\t\t"<<p[i]<<"\t\t\t\t"<<"Memory Allocated"<<endl;
    }

    LabelTwo:
    cout<<"Enter Process ID of Process to be deleted : ";
    cin>>delete_process;
    if(delete_process<=0 || delete_process>np)
    {
        cout<<"Process ID not available"<<endl;
        cout<<"Enter Process ID of Process to be deleted again!!!"<<endl;
        goto LabelTwo;
    }
    cout<<"Process ID\t\tProcess Size\t\t\tPartition Size\t\t\tMemory Status"<<endl;
    for(int i=1;i<=np;i++)
    {
        if(i==delete_process)
        {
            continue;
        }
        else
        {
            cout<<i<<"\t\t\t\t"<<p[i]<<"\t\t\t\t"<<p[i]<<"\t\t\t\t"<<"Memory Allocated"<<endl;
        }
    }    
}