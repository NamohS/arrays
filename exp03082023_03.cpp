#include <iostream>
using namespace std;
main()
    {
        int arr[10];
        for(int i=0;i<10;i++)
        {cout<<"enter element "<<(i+1)<<":"<<endl;
        cin>>arr[i];
        }
        int max=arr[0];
        int min=arr[0];
        for(int i=0;i<10;i++)
        {
            if(arr[i]>max)
            {max=arr[i];}
            if(arr[i]<min)
            {min=arr[i];}
        }
        cout<<"max= "<<max<<endl<<"min="<<min;

    }

    1 0 5 2 6 8 4 3 0 7 5 6 9