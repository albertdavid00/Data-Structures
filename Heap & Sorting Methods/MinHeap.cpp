//#include <iostream>
//#include <algorithm>
//using namespace std;
//int n, i, heap[101], x, length;
//
//void insert(int x){
//	int i = length;
//	length++;
//	heap[i] = x;
//	while ( x < heap[(i - 1) / 2]) {
//		heap[i] = heap[(i - 1) / 2];
//		heap[(i - 1) / 2] = x;
//		i = (i - 1) / 2;
//	}
//}
//int extract() {
//	int i = 0, x = heap[0];
//	if (length == 1) {
//		length--;
//		return x;
//	}
//	heap[0] = heap[--length];
//	while ((heap[i] > heap[2 * i + 1] || heap[i] > heap[2 * i + 2]) && 2 * i + 1 < length) {
//		if (heap[2 * i + 1] < heap[2 * i + 2]) {
//			swap(heap[i], heap[2 * i + 1]);
//			i = 2 * i + 1;
//		}
//		else {
//			swap(heap[i], heap[2 * i + 2]);
//			i = 2 * i + 2;
//		}
//	}
//	return x;
//}
//void HeapSort() {
//	int aux[101], i = 0;
//	while (length) {
//		aux[i] = extract();
//		i++;
//	}
//	for (int j = 0; j < i; j++) {
//		heap[j] = aux[j];
//		length++;
//	}
//}
//int main()
//{
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> x;
//		insert(x);
//	}
//	cout << "Min-heap: ";
//	for (i = 0; i < n; i++)
//		cout << heap[i] << " ";
//	int Min = extract();
//	cout<<'\n'<<"Minimul din heap este: "<<Min<<"\n";
//	insert(Min);
//	HeapSort();
//	cout << "Heap sortat: ";
//	for (i = 0; i < length; i++)
//		cout << heap[i] << " ";
//	cout << '\n';
//	return 0;
//}
///* Consola 
//10
//6 19 23 14 10 5 2 84 100 50
//	
//Min-heap: 2 10 5 19 14 23 6 84 100 50
//Minimul din heap este: 2
//Heap sortat: 2 5 6 10 14 19 23 50 84 100
//*/
//
