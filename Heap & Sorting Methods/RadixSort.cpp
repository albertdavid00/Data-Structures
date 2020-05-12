//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[101], n, i, nr[1001];
//
//void CountSort(int* a, int n) {
//	int base = 10, i, b[101];
//	static int p = 1;
//	for (i = 0; i < n; i++) {
//		nr[a[i] / p % 10]++;
//		b[i] = 0;
//	}
//	for (i = 1; i <= base; i++) {
//		nr[i] += nr[i - 1];
//	}
//	for (i = n - 1; i >= 0; --i) {
//		b[--nr[a[i] / p % 10]] = a[i];
//	}
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//	}
//	for (i = 0; i <= base; i++)
//		nr[i] = 0;
//	p *= 10;
//}
//void RadixSort(int* a, int n, int Max)
//{
//	while (Max > 0) {
//		CountSort(a, n);
//		Max /= 10;
//	}
//}
//int main()
//{
//	int Max = 0;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//		if (a[i] > Max)
//			Max = a[i];
//	}
//	RadixSort(a, n, Max);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
///*
//Consola:
//5
//95435323 12983 3459843 1239212 4589335
//12983 1239212 3459843 4589335 95435323
//*/