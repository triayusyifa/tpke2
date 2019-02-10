#include "list.h"

void createList(List &L)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    first(L) = NULL;
}

address Allocation(infotype x)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void dealLocation(address &P)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    delete P;
}

void printInfo(List L)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address P = first(L);
    if(P == NULL)
    {
        cout << "[empty]";
    }
    while(P != NULL)
    {
        cout << info(P) << " ";
        P = next(P);
    }
}

void insertFirst(List &L, address P)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    if(first(L) == NULL)
    {
        first(L) = P;
        last(L) = P;
    }
    else
    {
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast(List &L, address P)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    if(first(L) != NULL)
    {
        next(last(L)) = P;
        last(L) = P;
    }
    else
    {
        insertFirst(L, P);
    }
}

void deleteFirst(List &L, address P)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    P = first(L);
    if(first(L) != last(L))
    {
        first(L) = next(P);
        next(P) = NULL;
    }
    else
    {
        first(L) = NULL;
        last(L) = NULL;
    }
}

void deleteLast(List &L, address P)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address Q = first(L);
    if (Q != NULL)
    {
        if (next(Q) == NULL)
        {
            P = Q;
            first(L) = NULL;
            last(L) = NULL;
        }
        else
        {
            while (next(next(Q)) != NULL)
            {
                Q = next(Q);
            }
            P = next(Q);
            last(L) = Q;
            next(Q) = NULL;
        }
    }
}

void cekSelisih(List L)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address P = first(L);
    address Q = last(L);
    if((P != NULL) && (Q != NULL))
    {
        if(info(P) < info(Q))
        {
            cout << "Hasil Selisih : " << info(Q) - info(P);
        }
        else
        {
            cout << "Hasil Selisih : " << info(P) - info(Q);
        }
    }
    else
    {
        cout << "Inputan Kurang dari 2";
    }
}

void perPindahan(List &L)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address P = first(L);
    if (next(P) != NULL)
    {
        while (next(P) != last(L))
        {
            P = next(P);
        }
        next(last(L)) = first(L);
        first(L) = last(L);
        last(L) = P;
        next(P) = NULL;
    }
    else
    {
        printInfo(L);
    }
}

void geser(List &L)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    address P = first(L);
    while(next(P) != last(L))
    {
        P = next(P);
    }
    address Q = first(L);
    address R = last(L);
    next(R) = next(Q);
    next(P) = Q;
    next(Q) = NULL;
    first(L) = R;
    last(L) = Q;
}

void sambungkanList(List &L, List &L2)
{
    /*
    Name : Cornelius Stephanus Alfredo
    NIM : 1301180287
    */
    next(last(L)) = first(L2);
    last(L) = last(L2);
}
