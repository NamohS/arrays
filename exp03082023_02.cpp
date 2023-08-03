#include <iostream>
using namespace std;
main()
    {
        int arr[10];
        for(int i=0;i<10;i++)
        {cout<<"enter element "<<(i+1)<<":"<<endl;
        cin>>arr[i];
        }
        int num=0;
        int count=0;
        int pos[10];
        cout<<"enter the number to search:";
        cin>>num;
        for(int i=0;i<10;i++)
        { if(arr[i]==num)
           {
            pos[count]=i;
            count++;
           }
        }
        if(count>0)
        {
        for(int i=0;i<count;i++)
        {  
         cout<<" found "<<num<<" found at :"<<pos[i]<<endl;
        }}
        else
        {cout<<"num not found";}

    }