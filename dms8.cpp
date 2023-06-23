#include <iostream>
using namespace std;

const int SIZE = 100;

void display(int graph[][SIZE],int n){
    int indegree[SIZE]={0};
    int outdegree[SIZE]={0};



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (graph[i][j]!=0)
            {
                outdegree[i]++;
                indegree[j]++;
            }
            
        }
        
    }

    cout << "Vertex\tIn-Degree\tOut-Degree" << endl;
    for (int i = 0; i < n; i++) {
        cout << i+1 << "\t" << indegree[i] << "\t\t" << outdegree[i] << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of vertices in the graph: ";
    cin >> n;

    int graph[SIZE][SIZE];
    cout << "Enter the adjacency matrix representation of the graph:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> graph[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << graph[i][j]<<" ";
        }
        cout<<"\n";
    }

    display(graph,n);
}