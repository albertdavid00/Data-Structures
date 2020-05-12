#include <iostream>
#include <stack>
using namespace std;

struct nod {
	int info;
	nod* next;
};

class directedGraph {
	int n = 0;
	nod* adiacenta[100] = { NULL };
public:
	void addNode(int a);
	void addEdge(int source, int target);
	int hasEdge(int source, int target);
	void BFS(int startNode);
	void DFS(int startNode);
	int TwoCycles();
};
void directedGraph::addNode(int a) {
	nod* p = new nod;
	adiacenta[a] = p;
	adiacenta[a]->info = a;
	adiacenta[a]->next = NULL;
	n++;
	return;
}
void directedGraph::addEdge(int source, int target) {
	if (adiacenta[target] == NULL) {
		directedGraph::addNode(target);
	}
	nod* p = new nod;
	p->info = target;
	p->next = NULL;
	nod *q = adiacenta[source];
	while (q->next != NULL) {
		q = q->next;
	}
	q->next = p;
	return;
}
int directedGraph::hasEdge(int source, int target) {
	nod* p = adiacenta[source];
	while (p != NULL) {
		if (p->info == target)
			return 1;
		p = p->next;
	}
	return 0;
}
void directedGraph::BFS(int startNode) {
	int* viz = new int[n+1];
	int* coada = new int[n+1];
	for (int i = 0; i <= n; i++)
		viz[i] = 0;
	coada[0] = startNode;
	viz[startNode] = 1;
	int last = 1, i = 0;
	while (i < last) {
		nod* p = adiacenta[coada[i]]->next;
		while (p != NULL) {
			if (viz[p->info] == 0) {
				coada[last++] = p->info;
				viz[p->info] = 1;
			}
			p = p->next;
		}
		i++;
	}
	for (int i = 0; i < last; i++) {
		cout << coada[i] << " ";
	}
}
void directedGraph::DFS(int startNode) {
	stack<int> stiva;
	int* viz = new int[n + 1];
	for (int i = 0; i <= n; i++)
		viz[i] = 0;
	stiva.push(startNode);
	viz[startNode] = 1;
	cout << startNode << " ";
	while (!stiva.empty()) {
		nod* p = adiacenta[stiva.top()]->next;
		while (p && viz[p->info] == 1) {
			p = p->next;
		}
		if (p != NULL) {
			stiva.push(p->info);
			viz[p->info] = 1;
			cout << p->info << " ";
		}
		else {
			stiva.pop();
		}
	}
	
}
int directedGraph::TwoCycles(){
	int k = 0;
	for (int i = 0; i <= n; i++) {
		if (adiacenta[i] != NULL) {
			nod* p = adiacenta[i]->next;
			while (p != NULL) {
				nod* q = adiacenta[p->info]->next;
				while (q != NULL) {
					if (q->info == adiacenta[i]->info)
						k++;
					q = q->next;
				}
				p = p->next;
			}
		}
	}
	return k / 2;
}
int main()
{
	directedGraph G;
	for (int i = 1; i <= 7; i++)
		G.addNode(i);
	G.addEdge(1, 2);
	G.addEdge(1, 4);
	G.addEdge(1, 3);
	G.addEdge(2, 7);
	G.addEdge(2, 1);
	G.addEdge(2, 4);
	G.addEdge(3, 1);
	G.addEdge(3, 4);
	G.addEdge(4, 7);
	G.BFS(1);
	cout << "\n";
	G.DFS(1);
	return 0;
};
/*
Consola:
BFS: 1 2 4 3 7
DFS: 1 2 7 4 3
*/