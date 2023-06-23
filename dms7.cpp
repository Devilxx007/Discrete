#include <iostream>
#include <vector>
using namespace std;
// Number of vertices in the graph
    int V = 5;

void addEdge(vector<int> adj[], int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V) {
    for (int v = 0; v < V; v++) {
        cout << "Adjacency list of vertex " << v ;
        
        for (int edge : adj[v]) {
            cout << " -> " << edge;
        }
        cout<<endl;
    }
}

bool isGraphComplete(vector<int> adj[], int V) {
    for (int v = 0; v < V; v++) {
        if (adj[v].size() != V - 1) {
            return false;
        }
    }
    return true;
}

int main() {
    

    // Create an array of vectors to represent the graph
    vector<int> adj[V];

    // Adding edges to the graph
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);

    // Print the adjacency list
    printGraph(adj, V);
    if(isGraphComplete(adj,V)){
        cout<<"Graph is complete";
    }
    else{
        cout<<"Graph is not complete";
    }

    return 0;
}