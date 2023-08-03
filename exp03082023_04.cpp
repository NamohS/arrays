#include <iostream>
using namespace std;
main()
    {
        int arr[10];
        for(int i=0;i<10;i++)
        {cout<<"enter element "<<(i+1)<<":"<<endl;
        cin>>arr[i];
        }
        int peak=0;
        int peakar[10];
        int peakpos[10];
        for(int i=1;i<9;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])
            {
                
                peakar[peak]=arr[i];
                peakpos[peak]=i;
                peak++;
            }
        
        }
        for(int i=0;i<(peak+1);i++)
        {
         cout<<"position "<<peakpos[i]<<":"<<peakar[i]<<endl;
        }
        



    }
