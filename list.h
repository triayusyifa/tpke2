#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infotype;
typedef struct elmlist *address;

struct elmlist
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    infotype info;
    address next;
};

struct List
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address first;
    address last;
};

void createList(List &L);

address Allocation(infotype x);
void dealLocation(address &P);

void printInfo(List L);

void insertFirst(List &L, address P);
void insertLast(List &L, address P);

void deleteFirst(List &L, address P);
void deleteLast(List &L, address P);

void cekSelisih(List L);
void perPindahan(List &L);
void geser(List &L);

void sambungkanList(List &L, List &L2);

#endif // LIST_H_INCLUDED
