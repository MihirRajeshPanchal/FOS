#include<iostream>
using namespace std;
int main()
{
    int size,process[100];
    int start=0,np,p;
    int pagehit=0,pagefault=0,count=0;
    cout<<"Enter Page Frames : ";
    cin>>size;//3
    int memorysize[100]={};
    cout<<"Enter Number of Processes : ";
    cin>>np;//7
    for(int i=0;i<np;i++)
    {
        cout<<"Enter Process : ";
        cin>>process[i];//{1,3,0,3,5,6,3}
    }
    Label:
    if(count!=np)
    {
        bool flag=false;
        for (int i=start;i<start+size;i++)
        {
            if(memorysize[i]==process[count])
            {
                flag=true;
                break;
            }
        }
        if(flag==true)
        {
            pagehit++;
            count+=1;
            goto Label;
        }
        else
        {
            memorysize[count]=process[count];
            pagefault++;
            start+=1;
            count+=1;
            goto Label;
        }
    }
    else
    {
        cout<<"Total Page Hits : "<<pagehit<<endl;
        cout<<"Total Page Fault : "<<pagefault<<endl;
    }
}