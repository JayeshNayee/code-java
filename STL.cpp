#include<iostream>
// #include<array>
// #include<vector>
#include<deque>

using namespace std;
   
// int arr[3] = {1,2,3};
   
    // array<int,4>a= {11,22,33,44};

    // cout<<"start "<<a.at(0)<<endl;
    // cout<<"Empty or Not "<<a.empty()<<endl;

    // cout<<"Front ele "<<a.front()<<endl;
    // cout<<"last ele "<<a.back()<<endl;

/*VECTOR*/
    // int main(int argc, char const *argv[]){
    // vector<int>v(5,1);
    // vector<int>last(v);
    // for(int i:v){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // for(int i:last){
    //     cout<<i<<" ";
    // }
    // cout<<endl;


    //     v.push_back(1);
    //     v.push_back(2);
    //     // cout<<" Size of the vector is "<<v.size()<<endl;
    //     // cout<<" Capacoty "<<v.capacity()<<endl;

    //     for(int i:v){
    //         cout<<i <<" ";
    //     }
    //     cout<<endl;
    //     v.pop_back();
    //    v.clear();
    //    cout<<v.size();

int main(int argc, char const *argv[])
{
    deque<int>d;
    d.push_back(22);
    d.push_front(11);

    for(int i:d){
        cout<<i<<" ";  
    }
      d.pop_front();
      cout<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    return 0;
}

    
    


