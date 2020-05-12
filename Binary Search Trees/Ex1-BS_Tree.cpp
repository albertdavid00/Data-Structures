//#include <iostream>
//using namespace std;
//
//struct arbore{
//	int info;
//	arbore* st, * dr;
//}*root;
// 
//// Inserarea unei chei 
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
//// cautarea unei chei (0/1)
//int check(int key) {
//	arbore* q = root;
//	while (q != NULL) {
//		if (key < q->info)
//			q = q->st;
//		else if (key > q->info)
//			q = q->dr;
//		else
//			return 1;
//	}
//	return 0;
//}
////afisare SRD
//void SRD(arbore* root) {
//	if (root == NULL)
//		return;
//	else {
//		SRD(root->st);
//		cout << root->info << " ";
//		SRD(root->dr);
//	}
//}
////afisare RSD
//void RSD(arbore* root) {
//	if (root == NULL)
//		return;
//	else {
//		cout << root->info << " ";
//		RSD(root->st);
//		RSD(root->dr);
//	}
//}
////Stergerea unei chei
//void Delete(int key) {
//	if (root == NULL)
//		return;
//	arbore* p = root;
//	arbore* q = p;
//	while (p->info != key) {
//		q = p;
//		if (key < p->info)
//			p = p->st;
//		else
//			p = p->dr;
//		if (p == NULL) {
//			cout << "Nodul " << key << " nu se afla in arbore" << '\n';
//			return;
//		}
//	}
//	if (p->st == NULL && p->dr == NULL) {	//nodul nu are fii
//		if (p == root) {		
//			root = NULL;
//			return;
//		}
//		delete p;
//		return;
//	}
//	else if (p->st == NULL) {		//are doar fiu drept	
//		if (q->st != NULL && q->st->info == key)
//			q->st = p->dr;
//		else if (q->dr != NULL && q->dr->info == key)
//			q->dr = p->dr;
//		else {
//			root = root->dr;	// p = q = root
//		}
//		delete p;
//		return;
//	}
//	else if (p->dr == NULL) {		// are doar fiu stang
//		if (q->st != NULL && q->st->info == key)
//			q->st = p->st;
//		else if (q->dr != NULL && q->dr->info == key)
//			q->dr = p->st;
//		else {
//			root = root->st;		// p = q = root
//		}
//		delete p;
//		return;
//	}
//	else {					//daca nodul are 2 fii
//		bool ok = 0;
//		arbore* trail, * replace;
//		trail = p;
//		replace = p->st;
//		while (replace->dr != NULL) {
//			trail = replace;
//			replace = replace->dr;
//			ok = 1;			//intra cel putin o data in while
//		}
//		if (!ok) {			// p->st->dr == NULL	
//			if (root == p) {	
//				root->info = replace->info;
//				root->st = replace->st;
//				delete replace;
//				return;
//			}
//			else {
//				if (q->dr && q->dr->info == p->info)
//					q->dr = replace;
//				else if (q->st && q->st->info == p->info)
//					q->st = replace;
//				replace->dr = p->dr;
//				delete p;
//				return;
//			}
//		}
//		if (replace->st != NULL)
//			if (ok)
//				trail->dr = replace->st;
//			else
//				trail->st = replace->st;
//		p->info = replace->info;
//		delete replace;
//		trail->dr = NULL;
//		return;
//	}
//}
//int main()
//{
//	Insert(6);
//	Insert(4);	
//	Insert(9);
//	Insert(2);
//	Insert(1);
//	Insert(5);
//	Insert(3);
//	Insert(7);
//	Insert(8);
//	cout << check(3) << " " << check(10)<< "\n";
//	cout << "SRD: ";
//	SRD(root);
//	cout << '\n';
//	cout << "RSD: ";
//	RSD(root);
//	cout << '\n';
//	Delete(6);
//	SRD(root);
//	cout << '\n';
//	RSD(root);
//	return 0;
//}