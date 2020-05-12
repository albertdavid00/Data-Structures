#include <iostream>
using namespace std;

struct stiva {
    int info;
    stiva* next;
}*top;

void PUSH(int x) {
    stiva* new_lista = new stiva; //alocare spatiu
    new_lista->info = x;    //atribuire camp1 cu int
    new_lista->next = top; //atribuire camp2 cu lista*
    top = new_lista;   // atribuire prim cu lista*
}
int POP() {
    int val = -1;
    stiva* p = top;
    if (top != NULL) {
        top = top->next;
        val = p->info;
        delete p;
    }
    return val;
}
int main()
{
    PUSH(1);
    cout << POP();
    PUSH(2);
    PUSH(3);
    cout << " " << POP() << " ";
    cout << POP();

    return 0;
}
