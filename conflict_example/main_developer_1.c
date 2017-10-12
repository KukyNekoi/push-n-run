#include <stdio.h>

int sum(int a, int b){
    return a+b;
}

int main(){
    int a = 0, b = 0;
    printf("Ingrese a: ");
    scanf("%d\n", &a);
    printf("Ingrese b: ");
    scanf("%d\n", &b);
    int result = sum(a, b);
    printf("Resultado a+b: %d", result);
    return 0;
}
