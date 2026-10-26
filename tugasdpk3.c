#include <stdio.h>
#include <stdlib.h>

int c [3][3] = {{1,2,3},{4,5,6},{7,8,9}};

int main(int argc, char *argv[]) {

    for (int baris=0;baris<3;baris++)
    {
        for(int kolom=0;kolom<3;kolom++)
           printf("%c", c[baris][kolom]);
        printf("\n");
    }

}
