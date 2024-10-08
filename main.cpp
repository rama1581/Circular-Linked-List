#include <iostream>
#include "doubleCircular.h"

using namespace std;

int main()
{
     List L;
     createList_1301223314(L);

     insertLast_1301223314(L, alokasi_1301223314(5));
     insertLast_1301223314(L, alokasi_1301223314(15));
     insertLast_1301223314(L, alokasi_1301223314(25));
     insertLast_1301223314(L, alokasi_1301223314(35));
     insertLast_1301223314(L, alokasi_1301223314(45));
     insertLast_1301223314(L, alokasi_1301223314(55));
     insertLast_1301223314(L, alokasi_1301223314(65));
     insertLast_1301223314(L, alokasi_1301223314(75));
     insertLast_1301223314(L, alokasi_1301223314(85));

     printInfo_1301223314(L);

     deleteByValue_1301223314(L, 5);
     deleteByValue_1301223314(L,100);
     deleteByValue_1301223314(L,45);
     deleteByValue_1301223314(L,85);
     printInfo_1301223314(L);
}
