//#include <iostream>
//using namespace std;
//int a[101], b[101], nr[1001], Max, n, i;
//int main()
//{
//	Max = 0;
//	cin >> n;
//	for (i = 0; i < n; i++){
//		cin >> a[i];
//		nr[a[i]]++;
//		if (a[i] > Max)
//			Max = a[i];
//	}
//	for (i = 1; i <= Max; i++) {
//		nr[i] += nr[i - 1];
//	}
//	for (i = 0; i < n; i++) {
//		b[--nr[a[i]]] = a[i];
//	}
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//		cout << a[i] << " ";
//	}
//	return 0;
//}

// VARIANTA CU FUNCTIE

//#include <iostream>
//using namespace std;
//int a[101], n, i, nr[1001];
//void CountSort(int* a, int n) {
//	int Max = 0, i, b[101];
//
//	for (i = 0; i < n; i++) {
//		if (a[i] > Max)
//			Max = a[i];
//		nr[a[i]]++;
//	}
//	for (i = 1; i <= Max; i++) {
//		nr[i] += nr[i - 1];
//	}
//	for (i = 0; i < n; i++) {
//		b[--nr[a[i]]] = a[i];
//	}
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//	}
//}
//int main()
//{
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	CountSort(a, n);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int a[101], n, i, nr[1001];
//
//void CountSort(int* a, int n) {
//	int Max = 0, i, b[101];
//
//	for (i = 0; i < n; i++) {
//		if (a[i] > Max)
//			Max = a[i];
//		nr[a[i]]++;
//	}
//	for (i = 1; i <= Max; i++) {
//		nr[i] += nr[i - 1];
//	}
//	for (i = 0; i < n; i++) {
//		b[--nr[a[i]]] = a[i];
//	}
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//	}
//}
//int main()
//{
//	cin >> n;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	CountSort(a, n);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
/*
Consola:
7
50 12 45 11 9 15 23 44
9 11 12 15 23 45 50
*/