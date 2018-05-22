#include <iostream>
#define MAX_SIZE 100
using namespace std;
int main()
{
    int arr[MAX_SIZE], freq[MAX_SIZE];
    int size, i, j, count,flag=0;
    cin>>size;
    for(i=0; i<size; i++)
    {
        cin>>arr[i];
        freq[i] = -1;
    }
    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
        if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    cout<<"The unique elements are :"<<endl;
    for(i=0; i<size; i++)
    {
        if(freq[i] == 1)
        {
            cout<<arr[i]<<endl;
            flag++;
      
        }
        if(flag==3)
        cout<<"Third non repeating element is : "<<arr[i]<<endl;
    }
   return 0;
}
