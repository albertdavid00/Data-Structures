//#include <iostream>
//using namespace std;
//
//struct arbore {
//	int info;
//	arbore* st, * dr;
//}*root;
//
//void Insert(int key) {
//	arbore* p = new arbore;
//	p->info = key;
//	p->st = NULL;
//	p->dr = NULL;
//	if (root == NULL) {
//		root = p;
//		return;
//	}
//	arbore* q = root;
//	arbore* trail = NULL;
//	while (q != NULL) {
//		trail = q;
//		if (key < q->info)
//			q = q->st;
//		else
//			q = q->dr;
//	}
//	if (trail) {
//		if (key < trail->info)
//			trail->st = p;
//		else
//			trail->dr = p;
//	}
//	return;
//}
//void PrintInterval(arbore* root, int k1, int k2) {
//	if (root == NULL)
//		return;
//	else {
//		if (root->info <= k1) {
//			PrintInterval(root->dr, k1, k2);
//			return;
//		}
//		else if (root->info >= k2) {
//			PrintInterval(root->st, k1, k2);
//			return;
//		}
//		else {
//			cout << root->info << " ";
//			PrintInterval(root->st, k1, k2);
//			PrintInterval(root->dr, k1, k2);
//		}
//	}
//}
//int main()
//{
//	int k1, k2, n, x;
//	cout << "Nr elemente arbore: ";
//	cin >> n;
//	cout << "Elemente: ";
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		Insert(x);
//	}
//	cout << "Interval: ";
//	cin >> k1 >> k2;
//	PrintInterval(root, k1, k2);
//	return 0;
//}
/*
Consola:
Nr elemente arbore: 9
Elemente: 60 40 50 20 30 10 90 70 80
Interval: 25 85
60 40 30 50 70 80
*/
