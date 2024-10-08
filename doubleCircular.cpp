#include <iostream>
#include "doubleCircular.h"
using namespace std;

void createList_1301223314(List &L) {
    first(L) = Nil;
    last(L) = Nil;
}

address alokasi_1301223314(infotype x) {
    address P;
    P = new elmlist;
    info(P) = x;
    next(P) = Nil;
    return P;
}

void dealokasi_1301223314(address &P) {
    delete  P;
    P = Nil;
}

void insertFirst_1301223314(List &L, address P) {
    if (first(L) == Nil) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        next(last(L) = P);
        first(L) = P;
        last(L) = P;
    }
}

void insertAfter_1301223314(List &L, address Prec, address P) {
    next(P) = next(Prec);
    next(Prec) = P;
    if(last(L) == Prec) {
        last(L) = P;
    }
}

void insertLast_1301223314(List &L, address P) {
    if (first(L) == Nil) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        next(P) = first(L);
        last(L) = P;
    }
}

address findElm_1301223314(List L, infotype x) {
    address P;
    while (P != Nil && info(P) != x) {
        P = next(P);
    }
    return P;
}

void deleteFirst_1301223314(List &L, address P) {
    if (first(L) == P) {
        first(L) = Nil;
        last(L) = Nil;
    } else {
        first(L) = next(P);
        next(last(L) = next(first(L)));
    }
    dealokasi_1301223314(P);
}

void deleteAfter_1301223314(List &L, address Prec, address &P) {
    P = next(Prec);
    next(Prec) = next(P);
    if (last(L) == P) {
        last(L) = Prec;
    }
    dealokasi_1301223314(P);
    (P);
}

void deleteLast_1301223314(List &L, address &P) {
    if (last(L) == P) {
        last(L) = Nil;
        first(L) = Nil;
    } else {
        address Q = first(L);
        while (next(Q) != P) {
            Q = next(Q);
        }
        next(Q) = first(L);
        last(L) = Q;
    }
    dealokasi_1301223314(P);
}

void printInfo_1301223314(List L) {
    address P = first(L);
    cout << info(P) << endl;
    P = next(P);
    while (P != first(L)) {
        cout << info(P) << endl;
    P = next(P);
  }
}

void deleteByValue_1301223314(List &L, infotype x) {
    address P = first(L);
    address Prec = Nil;
    while (P != Nil && info(P) != x) {
        Prec = P;
        P = next(P);
    }
    if (P == Nil) {
        return;
    }

    if (Prec == Nil) {
        deleteFirst_1301223314(L, P);
    } else {
        deleteAfter_1301223314(L, Prec, P);
    }

}

void reverseList_1301223314(List L, List &L2) {
    address P = first(L);
    address Q = Nil;
    while (P != first(L)) {
        Q = next(P);
        next(P) = last(L2);
        last(L2) = P;
        P = Q;
    }
    first(L2) = first(L);
    first(L) = Nil;
    last(L) = Nil;
}
