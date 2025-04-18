#include <stdio.h>
#include <stdlib.h>

int returnSquare(int x){
    return x * x;
}

int main() {
    printf("Hello world");

    int x = 5;
    for (int i = 0; i <= x; i++){
        printf("%d", returnSquare(i));
    }


}
