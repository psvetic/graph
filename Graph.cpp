#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<vector <int> > graph;
    vector<int> temp;
    vector<int> nodes;
    vector<pair<int, int> > edges;
    pair<int, int> tempPair;
    int x = 0;
    int br;
    char odg;
    int nodeX;
    int nodeY;

    do {
        cout << "How many nodes are in the graph (max 10): " << endl;
        cin >> x;
    } while (x > 10);

    for (int i=0; i<x; i++) {
        for (int j=0; j<x; j++) {
            temp.push_back(0);
        }
        graph.push_back(temp);
    }

    cout << "Name your nodes (with numbers): " << endl;

    for (int i=0; i<x; i++) {
        cin >> br;
        nodes.push_back(br);
    }

    cout << "Type every connection between nodes..." << endl;

    do {
        cout << "Node X: " << endl;
        cin >> nodeX;
        cout << "Node Y: " << endl;
        cin >> nodeY;


        for (int i=0; i<nodes.size(); i++) {
            for (int j=0; j<nodes.size(); j++) {
                if (nodes[i] == nodeX && nodes[j] == nodeY) {
                    graph[i][j] = 1;
                    graph[j][i] = 1;
                }
            }
        }

        tempPair.first = nodeX;
        tempPair.second = nodeY;
        edges.push_back(tempPair);

        cout << "Do you have more nodes to connect? (y/n) " << endl;
        cin >> odg;
    } while(odg != 'n');

    cout << "List of all nodes: " ;

    for (int i=0; i<nodes.size(); i++) {
        cout << nodes[i] << " ";
    }
    cout << endl;

    cout << "List of all pairs: ";

    for (int i=0; i<edges.size(); i++) {
        cout << "(" << edges[i].first << ", " << edges[i].second << ") ";
    }
    cout << endl;

    cout << "Matrix" << endl;

    for (int i=0; i<graph.size(); i++) {
        for (int j=0; j<graph.size(); j++) {
            cout << graph[i][j];
        }
        cout << endl;
    }





    return 0;
}
