//#include <iostream>
//using namespace std;
//struct coada {
//	int info;
//	coada* next;
//}*prim_i,*ultim_i,*prim_j,*ultim_j;
//void push(int x, int y) {
//	coada* p = new coada;
//	coada* q = new coada;
//	p->info = x;
//	p->next = NULL;
//	if (ultim_i != NULL)
//		ultim_i->next = p;
//	ultim_i = p;
//	if (prim_i == NULL)
//		prim_i = p;
//
//	q->info = y;
//	q->next = NULL;
//	if (ultim_j != NULL)
//		ultim_j->next = q;
//	ultim_j = q;
//	if (prim_j == NULL)
//		prim_j = q;
//}
//int pop_i() {
//	int x = -1;
//	coada* q;
//	q = prim_i;
//	if (prim_i != NULL) {
//		prim_i = prim_i->next;
//		x = q->info;
//		delete q;
//	}
//	if (prim_i == NULL)
//		ultim_i = NULL;
//	return x;
//}
//int pop_j() {
//	int x = -1;
//	coada* q;
//	q = prim_j;
//	if (prim_j != NULL) {
//		prim_j = prim_j->next;
//		x = q->info;
//		delete q;
//	}
//	if (prim_j == NULL)
//		ultim_j = NULL;
//	return x;
//}
//int main()
//{
//	int n, i, j, k, x, y,a[21][21];
//	cin >> n;
//	for (i = 0; i < n; ++i)
//		for (j = 0; j < n; ++j) {
//			cin >> a[i][j];
//		}
//	k = 2;
//	for (i = 0; i < n; i++)
//		for(j = 0; j< n; j++)
//			if (a[i][j] == 1){
//				push(i,j);
//				while (prim_i) {
//					x = pop_i();
//					y = pop_j();
//					a[x][y] = k;
//					if (x < n - 1)
//						if (a[x + 1][y] == 1)
//							push(x + 1, y);
//					if (x > 0)
//						if (a[x - 1][y] == 1)
//							push(x - 1, y);
//					if (y > 0)
//						if (a[x][y - 1] == 1)
//							push(x, y - 1);
//					if (y < n - 1)
//						if (a[x][y + 1] == 1)
//							push(x, y + 1);
//				}
//				k++;
//			}
//	cout << '\n';
//	for (i = 0; i < n; i++) {
//		for (j = 0; j < n; j++)
//			cout << a[i][j] << " ";
//		cout << '\n';
//	}
//	return 0;
//}
