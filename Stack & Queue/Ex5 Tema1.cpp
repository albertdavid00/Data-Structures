//#include <iostream>
//using namespace std;
//
//struct stiva {
//	int info;
//	stiva* next;
//}*top;
//void Push(int x) {
//	stiva* p = new stiva;
//	p->info = x;
//	p->next = top;
//	top = p;
//}
//int Pop() {
//	int val = -1;
//	stiva* p = top;
//	if (top) {
//		top = top->next;
//		val = p->info;
//		delete p;
//	}
//	return val;
//}
//int main()
//{
//	int n, i, x, k=0;
//	cin >> n;
//	int* v = new int[n];
//	for (i = 0; i < n; i++) {
//		cin >> v[i];
//		if (!top) {
//			Push(v[i]);
//		}
//		else {
//			if (top->info == v[i])
//				Push(v[i]);
//			else
//				Pop();
//		}
//	}
//	if (top) {
//		x = top->info;
//		for (i = 0; i < n; i++) {
//			if (v[i] == x)
//				k++;
//		}
//		if (k > n / 2) {
//			cout << "Element majoritar: " << x;
//		}
//		else
//			cout << "Nu exista element majoritar.";
//	}
//	else
//		cout << "Nu exista element majoritar.";
//	delete[] v;
//	return 0;
//}