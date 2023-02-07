#include<iostream>
using namespace std;
void Merge(int arr[], int l, int mid , int r)
{
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];  // temporay arry 
  // copy val 
 int k = l;
    for(int i = 0; i<n1;  i++)
    {
        a[i]= arr[k++];
    }
 k = mid+1;
     for(int i = 0; i<n2;  i++)
    {
        b[i]= arr[k++];
    }

    // compare
   int i = 0;
   int j = 0;
   int x = l;

    while (i<n1 && j<n2)
    { 
        if(a[i]<b[j])
        {
           arr[x++]= a[i++]; 
        }
        else arr[x++]= b[j++];
      
    }
    while (i<n1)
    {
        arr[x++]= a[i++]; 
    }
    while (j<n2)
    {
      arr[x++]= b[j++];
    }

}

void divide(int arr[], int l , int r)
{
    if(l>=r)
    {
        return;
    }
   else if(l<r)
   {
    int mid = (l+r)/2;
    divide(arr,l,mid);
    divide(arr,mid+1,r);
     
    Merge(arr,l, mid , r);
   }  
}
int main(int argc, char const *argv[])
{
    int arr[5]= {55,44,3,2,1};
    
    divide(arr,0,4);

    for(int i = 0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
  cout<<endl;
    return 0;
}
