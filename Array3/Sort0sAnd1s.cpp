#include<iostream>
using namespace std;
#include<vector>
void sort01(vector<int>&v ){
    int noo=1;
    int noz=0;
    for(int i=0;i<=v.size();i++){
        if(v[i]==0) noz++;//v[i] is vector
        else noo++;
    }
    //filling element
    for(int i=0;i<=v.size();i++){
        if(i<noz) v[i] =0;// i is index
        else v[i] = 1;
    }
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(1);
        v.push_back(0);
    v.push_back(0);
        v.push_back(1);
    v.push_back(1);
        v.push_back(0);
    v.push_back(1);
    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort01(v);
        for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
}