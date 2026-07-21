#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;

int main() {
    int n;//vertices
    int m;//edges

    cout << "Enter the number of vertices: ";
    cin >> n;
    cout << "Enter the number of edges: ";
    cin >> m;

    unordered_map<int, list<int> > ajList;

    for (int i = 0; i < m; i++) {
        int u, v;
       cin >> u >> v;
        ajList[u].push_back(v);
        ajList[v].push_back(u);// if graph is undirected
    }
    cout << "The adjacency list is: " << endl;
    for (const auto& pair : ajList) {
        cout << pair.first << "->";
        for (const auto& vertex : pair.second) {
            cout << vertex << ",";
        }
        cout << endl;
    }
};


    