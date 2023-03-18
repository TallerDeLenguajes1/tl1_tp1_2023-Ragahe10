#include <stdio.h>

int main(){
    printf("HOLA MUNDO");
    int a, *punt;
    punt=&a;
    a=1;
    printf("\nEl contenido del puntero es: %d", *punt);
    printf("\nLa direccion de memoria almacenada por el puntero es: %p", punt);
    printf("\nla direccion de memoria de la variable es: %p", &a);
    printf("\nla direccion de memoria del puntero. es: %p", &punt);
    printf("\nel tamanio de memoria utilizado por esa variable es: %d", sizeof(a));
    return 0;
}
