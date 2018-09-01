// A simple represention of graph using STL
#include <bits/stdc++.h>
//macro//
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define ll long long int
#define ld long double
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define present(c,x) ((c).find(x) != (c).end())
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define mp make_pair
//typedef//
typedef std::vector<int> vi;
typedef std::set<char> sc;

typedef std::vector<vi> vvi;
typedef std::pair<int,int> ii;
typedef std::vector<int>::iterator it;
typedef std::vector<std::string> vs;
typedef std::vector<char> vc;
//this is for stop sync with input/output in c  to not to overhead and slow the program
//std::ios_base::sync_with_stdio(false);
#include <iostream>
#include<cstring>//for memset
using namespace std;
/** ********************************************************************************************************/

// A utiltiy function that add an adge between two nodes
// Undirected Graph.
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printGraph(vector<int>adj[],int nodes){
    for (int i=0;i<nodes;i++){
        cout<<"adjacence list of vertics "<<i<<endl;
        cout<<"head ";
        for(auto x:adj[i])
            cout<<"-> "<<x;
        printf("\n");


    }
}



int main(){
    //I have 5 nodes
    int nodes=5;
    // what i care about  node number ,the node neibour

    /**
      the graph can be represented by adjacencyList
    */

    vector <int> adj[nodes];

    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);

    printGraph(adj,nodes);













}

