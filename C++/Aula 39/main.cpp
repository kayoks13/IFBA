#include <iostream>
#include <stdlib.h> //fun��o malloc
#include <stdio.h> //fun��o gets

using namespace std;

int main()
{
    char *vnome;
    vnome = (char *) malloc(sizeof(char)+1);

    gets(vnome);

    cout << vnome;


    return 0;
}
