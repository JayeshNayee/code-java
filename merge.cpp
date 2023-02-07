#include <iostream>
using namespace std;

void MER(int arr[], int s, int e)
{
    int mid = s + e / 2;
    // length find 
    int l1 = mid - s + 1;
    int l2 = e - mid;
    // create two arrays
    int *first = new int[l1];
    int *second = new int[l2];
    // copy values;
    int mainIndex = s;
    for ( int i = 0; i <l1; i++)
    {
        first[i] =  arr[mainIndex++];
    }

    mainIndex = mid+1;
     for ( int i = 0; i <l2; i++)
    {
        second[i] =  arr[mainIndex++];
    }

    int index1 = 0;
    int index2 = 0;
      mainIndex = s;
    while(index1<l1 && index2 < l2)
    {
       if(first[index1]<second[index2])
       {
           arr[mainIndex++] = first[index1++];
       }
       arr[mainIndex++] = second[index2++];
    }

     while(index1<l1){
           arr[mainIndex++] = first[index1++];
     }

     while (index2 < l2){
       arr[mainIndex++] = second[index2++];   
     }

}
void merge(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // find the mid  value
    int mid = s + e / 2;
    // left side
    merge(arr, s, mid);
    // right side
    merge(arr, mid + 1, e);
    // then after merger the value
    MER(arr, s, e);
}
int main(int argc, char const *argv[])
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n = 5;
    merge(arr, 0, n - 1);
    for (int i = 0; i < n ; i++){
       cout << arr[i]<<" ";
    }
    cout << endl;
    return 0;

   
    
}