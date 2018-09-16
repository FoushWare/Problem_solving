// a program to find the mother vertex of the Graph
#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;//No of vertics
    list<int> *adj;
    void DfsUtil(int v,vector<bool>&visited);
    public:
    Graph(int v);
    void addEdge(int u,int v);
    int findMotherVertex();
};

Graph::Graph(int v){
 this->V=v;
    adj=new list<int>[v];
}
void Graph::addEdge(int u,int v){
    adj[u].push_back(v);
}
void Graph::DfsUtil(int v,vector<bool>&visited){
    visited[v]=true;
    list<int>::iterator i;
    for(i=adj[v].begin();i!=adj[v].end();i++)
        if(!visited[*i])
            DfsUtil(*i,visited);
}


int Graph::findMotherVertex(){
    int Mother=0;
    vector<bool>visited(V,false);
    for(int i=0;i<V;i++)
        if(!visited[i]){
            DfsUtil(i,visited);
            Mother=i;
        }
    fill(visited.begin(),visited.end(),false);
    DfsUtil(Mother,visited);
    for(int i=0;i<V;i++)
        if(visited[i] == false)
            return -1;
    return Mother;

}



int main(){

    Graph g(7);
       g.addEdge(0, 1);
       g.addEdge(0, 2);
       g.addEdge(1, 3);
       g.addEdge(4, 1);
       g.addEdge(6, 4);
       g.addEdge(5, 6);
       g.addEdge(5, 2);
       g.addEdge(6, 0);

       cout << "A mother vertex is " << g.findMotherVertex();
    return 0;



}
