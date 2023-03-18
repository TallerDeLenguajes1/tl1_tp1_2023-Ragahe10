#include <stdio.h>

float Cuadrado(float num);
void cuadrado2(float num, float *p);
void DatosVariable (float *p);
void invertir(float *a, float *b);
void ordenar(float *a, float *b);

int main(){
    float a,b,c;
    printf("Ingrese un numero (A):");
    scanf("%f",&a);
    printf("Ingrese otro numero (B):");
    scanf("%f",&b);

    printf("\nEl cuadrado de A es: %.2f", Cuadrado(a));

    cuadrado2(b, &c);
    printf("\nEl cuadrado de B es: %.2f", c);

    printf("\n **DATOS DE A**");
    DatosVariable(&a);
    printf("\n **DATOS DE B**");
    DatosVariable(&b);

    printf("\nIntercambiando los valores de A y B");
    invertir(&a, &b);
    printf("\n **NUEVOS DATOS DE A**");
    DatosVariable(&a);
    printf("\n **NUEVOS DATOS DE B**");
    DatosVariable(&b);

    printf("\nOrdenando al mayor en B y al menor en A");
    ordenar(&a, &b);
    printf("\n **NUEVOS DATOS DE A**");
    DatosVariable(&a);
    printf("\n **NUEVOS DATOS DE B**");
    DatosVariable(&b);
    return 0;
}
float Cuadrado(float num)
{
    return (num*num);
}
void cuadrado2(float num, float *p)
{
    *p= num*num;
}
void DatosVariable (float *p)
{
    printf("\nContenido: %.2f", *p);
    printf("\nDireccion: %p", p);
}
void invertir(float *a, float *b)
{
    float x;
    x=(*a);
    (*a)=*b;
    (*b)=x;
}
void ordenar(float *a, float *b)
{
    float x;
    if((*a) > (*b)){
        x=(*b);
        (*b) = (*a);
        (*a) = x;
    }
}