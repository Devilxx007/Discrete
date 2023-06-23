#include<iostream>
#include <set>
#include <algorithm>
#include<cmath>
using namespace std;
class SET{
    public:
    set <int> s1 = {1,2,3,4,5};
    set <int> s2 = {2,3,4};
    //checks is member or not
    void ismember(int i){
        if(s1.count(i)>0){
            
            cout<< " true " <<i<< " is member of set s1 " <<endl;  
        }
        else
        {
            cout<<" flase " <<i<< " is not member of set s1 " <<endl;
            
        }
    }
    void unionof(){
        set <int> s2 = {6,7,8,9,10};
        set <int> s3;
        set_union(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
        for(auto i:s3){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void is_subset(){
    bool issubset = includes(s1.begin(),s1.end(), s2.begin(), s2.end());
    if(issubset){
        cout<<" s1 is subset of s2 "<<endl;
    }
    else{
        cout<<" s1 is not subset of s2 "<<endl;
    }
    }
    void set_diff(){
        set <int> s3;
        set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
        for(auto i:s3){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void intersection(){
        set <int> s3;
        set_intersection(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
        for(auto i:s3){
            cout<<i<<" ";
        }
        cout<<endl;

    }
    void symmetric_diff(){
        set <int> s3;
        set_symmetric_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
        for(auto i:s3){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    void powerset(){
        int s1 [] = {1,2,3};
        int size = sizeof(s1)/sizeof(s1[0]);
        int pset_size = pow(2,size);
        int i,j;
        for(int i=0;i<pset_size;i++){
            for(int j=0;j<size;j++){
                if(i&(1<<j)){
                    cout<<s1[j];
                }  
            }
            cout<<endl;
        }
    }
           
};



int main(){int i;
    SET s2;
    s2.unionof();
    s2.symmetric_diff();
    s2.intersection();
    s2.powerset();
    return 0;
}