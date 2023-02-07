#include<iostream>
using namespace std;

// void bubble(int *arr, int n){
//     for(int i = 1; i<=n-1; i++){

//         bool swapped = false;
//         for(int j = 0; j<=n-1-i; j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }
//         }
//         if(swapped == false){
//             break;
//         }
//     }

// }
// int main(int argc, char const *argv[])
// {
//    int arr[10] = {6,7,8,9,10,1,2,3,4,5};
//    int size =10;
//    bubble(arr,size);
//    for(int i = 0; i<size; i++){
//     cout<<arr[i]<<" ";
//    } 
//     return 0;
// }

/* Selection sort */
// void selectionSort(int arr[] , int n){

//     for(int i = 0; i<n; i++){

//         int minIndex = i;

//         for (int j = i+1; j<n; j++)
//         {
//             if(arr[minIndex]> arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
        
//     }
// }
// int main(int argc, char const *argv[])
// {
//     int arr[5] = {54,333,22,1,99};
//     int size = 5;
//     selectionSort(arr, size);
//     for(int i = 0 ;i<size ; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

/*Merge sort ***************************************/
// void merGe(int arr[] , int s , int mid , int e) {

//     int len1 = mid-s+1;
//     int len2 = e - mid;

//     // taling two arrays
//     int *first = new int[len1];
//     int *second = new int[len2];

//     // putting the values in arrays
//     int k = s;
//     for(int i = 0; i<len1; i++){
//         first[i] = arr[k++];
//     }
//     k = mid+1;
//     for(int i = 0; i<len2; i++){
//         second[i] = arr[k++];
//     }
//     int i = 0 , j = 0;
//     k = s;
//     while (i<len1 && j<len2)
//     {
//         if(first[i]<second[j]){
//             arr[k++] = first[i++];
//         }
//         else{
//              arr[k++] = second[j++];
//         }
//     }
//     while (i<len1)
//     {
//          arr[k++] = first[i++];
//     }
//     while (j<len2)
//     {
//      arr[k++] = second[j++];
//     }
// }
// void mergeSort(int arr[] , int s , int e){

//     if(s>=e){
//         return;
//     }
//     int mid = (s+e)/2;
//     // left part solve karo then after
//     mergeSort(arr , s , mid);
//     // right part solve karo 
//     mergeSort(arr , mid+1 ,e);
//     // merge the left and right parts
//     merGe(arr , s , mid , e);
// }
// int main(int argc, char const *argv[])
// {
//     int arr[10] = {100,9,88,7,6,5,44,3,2,1};
//     int n = 10;
//     mergeSort(arr , 0 , n-1);
//     for (int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
/*Quick Sort ******************************************/
// int partitions(int arr[], int i , int j){
//     int pivot = arr[i];
//     int pivot = arr[(i+j)/2];
    
//     while (i<=j)
//     {
//         while (arr[i]<pivot)
//         {
//            i++;
//         }
//         while (arr[j]>pivot)
//         {
//             j--;
//         }
//         if(i<=j){
//             swap(arr[i++], arr[j--]);
//         }
//     }
//     return i;
// }

// void QuickSOrt(int arr[] ,int s , int e){

//     if(s>=e){
//         return;
//     }
     
//     int p = partitions(arr, s , e);
//     //left aprt 

//     QuickSOrt(arr, s , p-1);
//     // right part solve karo
//     QuickSOrt(arr, p ,e);


// }
// int main(int argc, char const *argv[])
// {
//     int arr[10] = {100,33,44,55,22,11,77,99,33,12};
//     int n = 10;
//      QuickSOrt(arr , 0 , n-1);
//     for (int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

/*Insertions sort/*****************************/

// void Insertsort(int arr[] , int n ){
//     for(int i = 1; i<n; i++){
//         int temp = arr[i];
//         int j = i-1;
//         for(; j>=0; j--){
//             if(arr[j]>temp){
//                 arr[j+1] = arr[j];
//             }
//             else
//             {
//                 break;
//             }
//         }
//         arr[j+1]=temp;
        
//     }
// }
// int main(int argc, char const *argv[])
// {
//     //  int arr[10] = {10,9,8,7,6,5,4,3,2,1};
//     int arr[10];
//     cout<<"Enter a 10 number";
//     for (int i = 0; i < 10; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int n = 10;
//      Insertsort(arr ,n);
//      cout<<"Insetions sort"<<endl;
//     for (int i = 0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
/*
int partions(int *arr , int low , int high ){

    int pivot = arr[(low+high)/2];

    while (low<=high)
    {
        while (arr[low]<pivot)
        {
            low++;
        }
        while (arr[high]>pivot)
        {
            high--;
        }
        if(low<=high){
            swap(arr[low++],arr[high--]);
        }
    }
    return low;
}
void Quicksort(int *arr , int low , int high ){

    if(low>=high){
        return;
    }
    int p = partions(arr , low , high);
    //left part
    Quicksort(arr , low , p-1);
    //right part
     Quicksort(arr , p , high);
}
int main(int argc, char const *argv[])
{
    //   cout<<"Enter a size of the array";
    //     int size;

    //     cin>>size;
   int arr[9] = {9,8,7,6,5,4,3,2,1};
    //  int arr[size];
    int size = 9;
   Quicksort(arr , 0 , size-1);
   for(int i = 0; i<size ; i++){
    cout<<" "<<arr[i];
   }

    return 0;
}
*/
/*******Selection Sort**************************************************************************
void selection(int *arr , int n){
    for(int  i = 0; i<n-1 ; i++){
        int minimum = i;
        for(int j = i+1; j<n; j++){
            if(arr[j]<arr[minimum]){
                minimum = j;
            }
            }
        swap(arr[minimum] , arr[i]);
    }
}
int main(int argc, char const *argv[])
{
    int arr[6] = {6,5,4,3,2,1};
    int n = 6;
    selection(arr,n);
    for(int i = 0; i<n ;i++){
        cout<<" "<<arr[i];
    }
    return 0;
}*/

void InserTion_sort(int arr[] , int n){
    for(int i = 1; i<n; i++){
        int temp  = arr[i];
        int j =i-1; 
        while(j>= 0){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
    j--;
        }
        arr[j+1] = temp;
        
    }
}
int main(int argc, char const *argv[])
{
    int arr[5] = {10,9,89,7,6};
    int n = 5;
    InserTion_sort(arr, n);
    for(int i =0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
