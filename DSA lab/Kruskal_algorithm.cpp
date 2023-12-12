#include <iostream>
#include <algorithm>
using namespace std;

class Edge
{
public:
    int source;
    int destination;
    int weight;
};

bool compare(Edge e1, Edge e2)
{
    return e1.weight < e2.weight;
}
int findParent(int v, int *parent)
{
    if (parent[v] == v)
    {
        return v;
    }
    return findParent(parent[v], parent);
}
void kruskals(Edge *input, int E, int n)
{
    // Sort the input array-ascending order based on weights
    sort(input, input + E, compare);
    Edge *output = new Edge[n - 1];

    int *parent = new int[n];

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }
    int count = 0;
    int i = 0;
    while (count != n - 1)
    {
        Edge currentEdge = input[i];
        // check if we can add the currentEdge in MST or not
        int sourceParent = findParent(currentEdge.source, parent);
        int destinationParent = findParent(currentEdge.destination, parent);

        if (sourceParent != destinationParent)
        {
            output[count] = currentEdge;
            count++;
            parent[sourceParent] = destinationParent;
        }
        i++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (output[i].source < output[i].destination)
            cout << output[i].source << " " << output[i].destination << " " << output[i].weight << endl;
        else
        {
            cout << output[i].destination << " " << output[i].source << " " << output[i].weight << endl;
        }
    }
}
int main()
{
    int n, E;
    cout<<"Enter the number of vertices and edges: "<<endl;
    cin >> n >> E;
    Edge *input = new Edge[E];
    for (int i = 0; i < E; i++)
    {
        int s, d, w;
        cin >> s >> d >> w;
        input[i].source = s;
        input[i].destination = d;
        input[i].weight = w;
    }
    cout<<"The minimum spanning tree is:"<<endl;
    kruskals(input, E, n);
    return 0;
}