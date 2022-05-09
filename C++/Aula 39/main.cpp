#include <iostream>
#include <stdlib.h> //função malloc
#include <stdio.h> //função gets

using namespace std;

int main()
{
    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);

    cout << vnome;


    return 0;
}
