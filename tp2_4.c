#include <stdio.h>
#include <time.h>
#include <stdlib.h>
// Arreglo y estructuras globales//
char cpu[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
struct Computadora {
    unsigned int proceso;
    unsigned int fabricacion;
    char* cpu;
    unsigned int numero;
};
typedef struct Computadora PC;
//---- funciones---//
void Iniciar(PC* computadora);
void Mostrar(PC* computadora);
void Vieja(PC* computadora);
void Rapida(PC* computadora);
// --- Main ---
int main() {
    PC computadora[5];
    srand(time(NULL));
    Iniciar(computadora);
    Mostrar(computadora);
    Rapida(computadora);
	Vieja(computadora); 
   
    return 0;
}
//--- Funciones ---//
void Iniciar(PC* computadora) {
	int i;
    for(i = 0; i < 5; i++) {
        computadora->proceso = (int)(rand()%3 + 1);
        computadora->fabricacion = (int)(rand()%9 + 2015);
        computadora->cpu = cpu[(int)rand()%6];
        computadora->numero = (int)(rand()%8 + 1);
        computadora++;
    }
}

void Mostrar(PC* computadora) {
	int i;
    for(i = 0; i < 5; i++) {
        printf("\n-.-----PC %d  ------.-",i+1);
        printf("\nVelocidad: %d",computadora->proceso);
        printf("\nAnio de fabricacion: %d",computadora->fabricacion);
        printf("\nTipo de CPU: %s",computadora->cpu);
        printf("\nCantidad de nucleos: %d",computadora->numero);
        computadora++;
    }
}

void Vieja(PC* computadora) {
    unsigned int edad = 2025;
    int i;
    PC* vieja;
    for(i = 0; i < 5; i++) {
        if(computadora->fabricacion <= edad) {
            edad = computadora->fabricacion;
            vieja = computadora;
        }
        computadora++;
    }
    printf("\n-.------PC mas vieja-----.-");
    printf("\nVelocidad: %d",vieja->proceso);
    printf("\nAnio de fabricacion: %d",vieja->fabricacion);
    printf("\nTipo de CPU: %s",vieja->cpu);
    printf("\nCantidad de nucleos: %d",vieja->numero);
}

void Rapida(PC* computadora) {
    unsigned int velocidad = 8000;
    int i;
    PC* rapida;
    for( i = 0; i < 5; i++) {
        if(computadora->fabricacion <= velocidad) {
            velocidad = computadora->proceso;
            rapida = computadora;
        }
        computadora++;
    }
    printf("\n-.-----PC de mayor velocidad------.-");
    printf("\nVelocidad: %d",rapida->proceso);
    printf("\nAnio de fabricacion: %d",rapida->fabricacion);
    printf("\nTipo de CPU: %s",rapida->cpu);
    printf("\nCantidad de nucleos: %d",rapida->numero);
}

