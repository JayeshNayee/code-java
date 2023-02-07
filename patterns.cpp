#include<iostream>
using namespace std;
/*
// 1 2 3 4 5 
// 1 2 3 4   
// 1 2 3     
// 1 2       
// 1
int n = 5;
      for(int i=1;i<=n;i++){

         for(int j=1;j<=n;j++){
          if(j<=n-i+1){
             cout<<j<<" ";
          }
         }

         cout<<endl;
}*/
int main(int argc, char const *argv[])
{
  int x = 1;
    for (int i = 0; i < 5; i++)
    {
      for(int j = 0; j<5; j++)
      { 
        if(i==j){ 
        cout<<"*";
      }
      else cout<<" ";
      }

      cout<<"\n";
    }
    return 0;
}
