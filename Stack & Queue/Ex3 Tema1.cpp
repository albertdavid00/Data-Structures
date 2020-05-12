//#include <iostream>
//using namespace std;
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
//    int val = -1;
//    stiva* p = top;
//    if (top != NULL) {
//        top = top->next;
//        val = p->info;
//        delete p;
//    }
//    return val;
//}
//int n, v[1001], i;
//int main()
//{
//    cin >> n;
//    for (i = 1; i <= n; i++)
//        cin >> v[i];
//    for (i = 1; i <= n; i++) {
//        if (!top) {
//            Push(v[i]);
//        }
//        else if (v[i] == top->info) {
//            Pop();
//        }
//        else {
//            Push(v[i]);
//        }
//    }
//    if (Pop() == -1)
//        cout << "Configuratie valida.";
//    else cout << "Configuratie invalida.";
//    return 0;
//}