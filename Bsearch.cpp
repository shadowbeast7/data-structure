#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[50],search,first,last,middle;
    cout<<"\n Enter total no.of elements : "<<endl;
    cin>>n;
    cout<<"\n Enter elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\n Enter the element to be search : "<<endl;
    cin>>search;
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(arr[middle]<search)
        {
            first=middle+1;

        }
        else if(arr[middle]==search)
        {
            cout<<"\n Element is found at location : "<<middle+1;
            break;
        }
        else
            {
                last=middle-1;
            }
        middle=(first+last)/2;
    }
    if(first>last)
    {
        cout<<"\n element is not present : "<<endl;
    }
    return 0;
}
