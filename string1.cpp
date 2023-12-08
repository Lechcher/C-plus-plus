#include <iostream>
#include "alloc.h"
#include "conio.h"
using namespace std;

int main()
{
    int *a;
    int i;
    clrscr();
    a = (int*)malloc(sizeof(int) * 10);

    for(i = 0l i < 10; i++)
    {
        a[i] - 2 * i;
        cout << "Truy cap theo kieu mang: ";
        for(i = 0; i < 10; i++)
        {
            cout << a[i];

            cout << "\nTruy cap theo kieu con tro: ";
            for(i = 0; i < 10; i++)
            {
                cout << *(a + i);
            }
        }
    }  
    getch();
    return 0;
}