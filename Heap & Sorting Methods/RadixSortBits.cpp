//#include <iostream>
//#include <algorithm>
//using namespace std;
//int a[101], n, i, nr[1001];
//
//void CountSort(int* a, int n) {
//	int base = 256, i, b[101],ultimii8biti;
//	static int p = 0;
//	for (i = 0; i < n; i++) {
//		ultimii8biti = a[i] >> p & 255;
//		nr[ultimii8biti]++;
//		b[i] = 0;
//	}
//	for (i = 1; i <= base; i++) {
//		nr[i] += nr[i - 1];
//	}
//	for (i = n - 1; i >= 0; --i) {
//		b[--nr[a[i] >> p & 255]] = a[i];
//	}
//	for (i = 0; i < n; i++) {
//		a[i] = b[i];
//	}
//	for (i = 0; i <= base; i++)
//		nr[i] = 0;
//	p += 8;
//}
//void RadixSortBits(int* a, int n, int Max)
//{
//	while (Max) {
//		CountSort(a, n);
//		Max = Max >> 8;
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
//	RadixSortBits(a, n, Max);
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