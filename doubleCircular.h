#ifndef DOUBLECIRCULAR_H_INCLUDED
#define DOUBLECIRCULAR_H_INCLUDED
#define first(L) L.first
#define first(L2) L2.first
#define Nil nullptr
#define next(P) P->next
#define info(P) P->info
#define last(L) L.last
#define last(L2) L2.last
using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist{
    infotype info;
    address next;
};

struct List{
    address first;
    address last;
};

void createList_1301223314(List &L);

address alokasi_1301223314(infotype x);

void dealokasi_1301223314(address &P);

void insertFirst_1301223314(List &L, address P);

void insertAfter_1301223314(List &L, address Prec, address P);

void insertLast_1301223314(List &L, address P);

address findElm_1301223314(List L, infotype x);

void deleteFirst_1301223314(List &L, address P);

void deleteAfter_1301223314(List &L, address Prec, address &P);

void deleteLast_1301223314(List &L, address &P);

void printInfo_1301223314(List L);

void deleteByValue_1301223314(List &L, infotype x);

void reverseList_1301223314(List L, List &L2);
#endif // DOUBLECIRCULAR_H_INCLUDED
