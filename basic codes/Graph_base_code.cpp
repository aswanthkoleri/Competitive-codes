#include<bits/stdc++.h>
using namespace std;
/*Implementation of graph using vectors */
/*Two dimensional vector : key is the vertex and the values are the adjacent vertices */
std::vector<std::vector<int>> G;

class Graph{
public: 
	/*An array of vectors*/
	vector<int> *adjList;/*This is the list to represent the adjacent vertices of a vertex.*/
	/*Constructor */
	Graph(vector<pair<int,int>> &edges,int N){
		/*edges --> Edges 
		N --> The total no of nodes */
		/*Now allocate memory */
		adjList=new vector<int>[N]; 
		for(int i=0;i<edges.size();i++){
			/*First -> source
			second -> destination */
			int src=edges[i].first;
			int dest=edges[i].second;
			adjList[src].push_back(dest);
			/*For undirected the below line comes */
			/*adjList[dest].push_back(src);*/
		}
	}
	/*Now the destructor */
	~Graph(){
		delete[] adjList;
	}
};

void printGraph(Graph &graph,int N){
	for(int i=0;i<N;i++){
		cout<<i<<" --> ";
		for(int j=0;j<graph.adjList[i].size();j++){
			cout<<graph.adjList[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	cout<<"Enter the no of nodes : "<<endl;
	int Nodes;
	cin>>Nodes;
	cout<<"Enter the edges in the graph : "<<endl;
	int NoOfedges;
	cin>>NoOfedges;
	vector<pair<int,int>> edges;
	for(int i=0;i<NoOfedges;i++){
		int src,dest;
		cin>>src>>dest;
		edges.push_back(pair<int,int> (src,dest));
	}
	/*Now create the graph */
	Graph graph(edges,Nodes);
	/*Print the graph */
	printGraph(graph,Nodes);	
	return 0;
}