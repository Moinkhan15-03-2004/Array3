#include<iostream>
using namespace std;
#include<vector>
void moveNegAndPos(vector<int>& v){
    // int n= v.size();
    //  int i = 0;
    //  int j= n-1;
    //  while(i<j){
    //     if(v[i]==0) i++;
    //     if(v[j]==1) j--;
    //     if(v[i]==1&& v[j]==0){
    //         v[i]==0;
    //         v[j]==1;
    //         i++;
    //         j--;
    //     }
    //  }
    int n = v.size();
    int neg = 0;
    int pos = 1;
    for(int i= 0;i<=n;i++){
        if(v[i]==neg) neg++;
        else pos++;
    }
    // filling round
    for(int i=0;i<=n;i++){
        if(i<neg) v[i] = neg;
        else v[i]==pos;
    }

}

int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(-2);
        v.push_back(3);
    v.push_back(-4);
        v.push_back(-5);
    v.push_back(6);
        v.push_back(8);

    for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    moveNegAndPos(v);
        for(int i=0;i<=v.size();i++){
        cout<<v[i]<<" ";
    }

}