//#include <iostream>
//#include <string.h>
//using namespace std;
//
//struct arbore {
//	char info[51];
//	arbore* st, * dr;
//}*root;
//void Insert(const char* key) {
//	arbore* p = new arbore;
//	strcpy_s(p->info, strlen(key) + 1, key);
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
//		if (strcmp(key, q->info) < 0)
//			q = q->st;
//		else
//			q = q->dr;
//	}
//	if (trail) {
//		if (strcmp(key, trail->info) < 0)
//			trail->st = p;
//		else
//			trail->dr = p;
//	}
//	return;
//}
//void SRD(arbore* nod) {
//	if (nod == NULL)
//		return;
//	else {
//		SRD(nod->st);
//		cout << nod->info << " ";
//		SRD(nod->dr);
//	}
//}
//int main()
//{
//	int n;
//	char sir[51];
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> sir;
//		Insert(sir);
//	}
//	SRD(root);
//	return 0;
//}
//Consola
//7
//ccba aabc mnpas bdas aaa xyz wraspz
//aaa aabc bdas ccba mnpas wraspz xyz