#include <stdio.h>

struct Amigo
{
    char nombre[20];
    int edad;
};

void ejercicio1() {
    struct Amigo agenda[3] = { {"Juan", 10}, {"Maria", 20}, {"Ana", 30} };
    printf("Agenda de amigos\n");
    for (int i=0; i<3; i++) {
        printf("Amigo %i: Nombre %s - Edad %i \n", i+1, agenda[i].nombre, agenda[i].edad);
    }
}

void ejercicio2() {

}

void ejercicio3() {
    int altura;
    int base;
    printf("Calculo de area de un triangulo rectangulo\n");
    printf("Ingrese la altura\n");
    scanf("%d", &altura);
    printf("Ingrese la base\n");
    scanf("%d", &base);
    printf("La Base es: %i \n", (base*altura)/2);
}

void ejercicio4() {
    int num;
    int suma=1;
    printf("Calculo de factorial\n");
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    for(int i=0; i<num;i++) {
        suma = suma + suma*i;
    } 
    printf("El factorial es: %i \n", suma);
}

void ejercicio5() {
    #define cuadrado(num) num*num
    int num;
    printf("Calculo de cuadrado con macros\n");
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    printf("El cuadrado es: %i \n", cuadrado(num));
}

void ejercicio6() {

}

void ejercicio7() {
    
    printf("Suma array \n");
    printf("Media \n");
    printf("Minimo valor \n");
    printf("Maximo valor \n");    
}

void ejercicio8() {

}
void ejercicio9() {

}

int main() 
{
    //ejercicio1();
    //ejercicio2();
    //ejercicio3();
    //ejercicio4();
    //ejercicio5();
    //ejercicio6();
    //ejercicio7();
    //ejercicio8();
    //ejercicio9();
    return 0;
}