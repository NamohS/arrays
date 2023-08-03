#include <iostream>
using namespace std;
main()
    {
        int arr[10];
        for(int i=0;i<10;i++)
        {cout<<"enter element "<<(i+1)<<":"<<endl;
        cin>>arr[i];
        }
        int zeroes=0;
        for(int i=0;i<10;i++)
        {
            if(arr[i]==0)
            {
                for(int j=(i);j<(10-zeroes);j++)
            {
                arr[j]=arr[j+1];
                
                
            }zeroes++;
            arr[(10-zeroes)]=0;}
        } 
        for(int i=0;i<10;i++)
        {
         cout<<" element at "<<(i+1)<<":"<<arr[i]<<endl;
        }
    }
        