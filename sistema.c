#include <stdio.h>
char entradaInterfaz[100];
int main() {
    do{
    printf("1. Proceso de fabricacion\n");
    printf("2. Almacen materia prima\n");
    printf("3. Almacen producto terminado\n");
    printf("4. Talento humano\n");
    printf("5. Mercadeo y publicidad\n");
    printf("6. Finanzas\n");
    printf("7. Proyectos\n");
    printf("8. Mantenimiento\n");
    printf("9. Tecnologia de informacion\n");
    printf("10. Gerencias\n");
    printf("11. Produccion y calidad\n");
    printf("Seleccione una opcion (0 para salir): ");

    scanf("%s", entradaInterfaz);
    switch (entradaInterfaz[0]) {
        case '1':
            printf("Proceso de fabricacion\n");
            break;
        case '2':
            printf("Almacen materia prima\n");
            break;
        case '3':
            printf("Almacen producto terminado\n");
            break;
        case '4':
            printf("Talento humano\n");
            break;
        case '5':
            printf("Mercadeo y publicidad\n");
            break;
        case '6':
            printf("Finanzas\n");
            break;
        case '7':
            printf("Proyectos\n");
            break;
        case '8':
            printf("Mantenimiento\n");
            break;
        case '9':
            printf("Tecnologia de informacion\n");
            break;
        case '10':
            printf("Gerencias\n");
            break;
        case '11':
            printf("Produccion y calidad\n");
            break;
        default:
            printf("Opcion no valida, intente de nuevo.\n");
    }
    } while (entradaInterfaz[0] != '0');
    return 0;
}