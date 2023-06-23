#include <iostream>

using namespace std;

const int SIZE = 100;
bool CompleteGraph(int graph[SIZE][SIZE], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (graph[i][j] != graph[j][i] && graph[i][j] == 0) {
                return false;
            }
        }
    }

    return true;
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

    if (CompleteGraph(graph, n)) {
        cout << "The given graph is a complete graph." << endl;
    } else {
        cout << "The given graph is not a complete graph." << endl;
    }

    return 0;
}
