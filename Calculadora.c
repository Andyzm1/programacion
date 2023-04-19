#include <stdio.h>
int n1, n2;
void menu (int op, int n1, int n2)
{
    printf("Decida que es lo que desea realizar:\n 1.Sumar\n 2.Restar\n 3.Multiplicar\n 4.Dividir\n 5.Salir\n");
    scanf("%d", &op);
    imprimir(op, n1, n2);
}
void sumar (int s1, int s2)
{
    int suma;
    suma= s1+s2;
    printf("La suma de los dos numeros es %d\n", suma);
}
void restar (int r1, int r2)
{
    int resta;

        resta= r1-r2;
    printf("La resta de los dos numeros es %d\n", resta);
}
void multiplicar (int m1, int m2)
{
    int multi;
    multi= m1*m2;
    printf("El producto de los dos numeros es %d\n", multi);
}
void division (float d1, float d2)
{
    float divi;
    if (d2==0){
        printf("No es posible dividir para 0\n");
    }
    else{
        divi= d1/d2;
    printf("La division de los dos numeros es %.2f\n", divi);
    }
}
void imprimir (int op, int n1, int n2)
{
    switch (op)
    {
    case 1:
        sumar(n1, n2);
        break;
    case 2:
        restar(n1, n2);
        break;
    case 3:
        multiplicar(n1, n2);
        break;
    case 4:
        division(n1, n2);
        break;
    case 5:
        printf("Lindo dia\n");
        break;
    default:
        printf("Opcion invalida, intentelo nuevamente\n");
        menu(op, n1, n2);
        break;
    } 
    
}

int main()
{
    int op;
    do{
         printf("Escriba el primer numero\n");
    scanf("%d", &n1);
    printf("Escriba el segundo numero\n");
    scanf("%d", &n2);
    op=0;
    menu(op, n1, n2);
    } while (op!=5);
    
return 0;
}
