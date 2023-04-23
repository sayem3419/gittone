#include <iostream>

using namespace std;
void selection_sort(int arr[],int a)
{
    int miniIndex,i,j,temp;
    for(i=0;i<a-1;i++)
    {   miniIndex=i;
        for(j=i+1;j<a;j++)

    {
        if(arr[j]<arr[miniIndex])
        {
            miniIndex=j;
        }
    }
    if(miniIndex!=i)
    {
        temp=arr[miniIndex];
        arr[miniIndex]=arr[i];
        arr[i]=temp;
    }
    }
    for(int i=0;i<a;i++)
    {
        cout<<arr[i]<<" ";
    }

}

int main()
{   int arr[5]={5,7,1,3,9};
    selection_sort(arr,5);
    return 0;
}
