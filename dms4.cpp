#include <iostream>
using namespace std;
void solutionlist(int n,int C,int* solution, int currindex ,int currsum){
    if (currindex==n)
    {
        if (currsum==C)
        {
            for (int i = 0; i < n; i++)
            {
                cout<< solution[i] <<" ";
            }
            cout<<endl;
            
        }
        return;
        
    }
    for (int i = 0; i <= C-currsum; i++)
    {
        solution[currindex]=i;
        solutionlist(n,C,solution,currindex+1,currsum+i);
    }
    
    
}

int main(){
    int n;
    int C;
    cout<<"Enter the number of variabe: "<<endl;
    cin>>n;
    cout<<"Enter the value of C i.e C<=10: "<<endl;
    cin>>C;

    int* solution = new int [n];
    cout<<"The solutions is: "<<endl;
    solutionlist(n,C,solution,0,0);
}