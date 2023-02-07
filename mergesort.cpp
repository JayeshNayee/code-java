#include<iostream>
using namespace std;

void mergeTwoSort(int *arr , int s , int e){

   int m = s + e /2;

   int len1 = m - s + 1;
   int len2 = e - m;

   int *first = new int[len1];
   int *second = new int[len2];

   int k = s;

   for (int i = 0 ; i < len1; i++)
     {
        first[i] = arr[k++];
     }
    k = m + 1;
     for (int i = 0 ; i < len2 ; i++)
     {
        second[i] = arr[k++];
     }

     int index1 = 0;
     int index2 = 0;
     k = s;
     while (index1<len1 && index2 < len2 )
     {
       if(first[index1]< second[index2])
       {
        arr[k++] = first[index1++];
       }
        arr[k++] = second[index1++];

     }

     while (index1<len1)
     {
        arr[k++] = first[index1++];
     }

     while (index2 < len2)
     {
        arr[k++] = second[index1++];
     }
}
void mergeSort(int *arr, int s , int e){

    if(s>=e){
        return;
    }
    int m = s + e / 2;
    mergeSort(arr,s, m);
    mergeSort(arr,m+1,e);

    mergeTwoSort(arr , s , e );
}
int main(int argc, char const *argv[])
{
    int arr[5] = {5,3,2,1,6};
    int n = 5;
    mergeSort(arr,0 ,n-1);
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    return 0;
}
