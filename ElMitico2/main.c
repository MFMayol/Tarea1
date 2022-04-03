#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "Personas.h"
#define MAXCHAR 1010
enum OPTIONS {BUSCAR = 1, ELIMINAR = 2, MOSTRAR = 3, SALIR = 4};

void mostrarPersonas(Libro *libros);
void buscarPersona(Libro *lLibros);
void eliminarPersona(Libro *libros);
void salir(Libro *lLibros);
void showMenu(Libro *libros);

void salir(Libro *lLibros);

char *toLowerCase(char *name);

int main(int argc, char *argv[] ){

    //Abro el archivo
    FILE *fp = openFile(argv[1]);
    //Defino la estructura que usare para guardar los contenidos en memoria
    Libro *libros;
    //paso el contenido del file a un array de personas
    libros = getLibros(fp);
    //cierro el archivo.
    closeFile(fp);
    //Cargo la estructura
    showMenu(libros);
    return 0;

}

void showTitles(){
    printf("Ingrese la opción \n");
    printf("1. - Buscar Persona \n");
    printf("2. - Borrar Persona \n");
    printf("3. - Mostrar Personas \n");
    printf("4. - Salir \n");
}
void showMenu(Libro *libros){
    int option = 0;

    do {
        showTitles();
        scanf("%d", &option);
        //esto hace que el menu vuelva a mostrarse hasta que me ingrese una opcion valida
        while (option <= 0 || option >= 5) {
            printf("Opcion Invalida! \n");
            showTitles();
            scanf("%d", &option);
        }

        switch (option) {
            case BUSCAR:
                buscarPersona(libros);
                break;
            case ELIMINAR:
                eliminarPersona(libros);
                break;
            case MOSTRAR:
                mostrarPersonas(libros);
                break;
            case SALIR:
                salir(libros);
                break;
        }
    } while (option!=4);
}







void salir(Libro *lLibros) {
    printf("Gracias por usar el programa \n");
}

void buscarPersona(Libro *libros) {
    char name[50];
    printf("Ingrese el nombre o parte del nombre del titulo a buscar \n");
    scanf("%s", &name);
    //Hago una busqueda linea
    int i = 0;
    int encontre = 0;
    while (i<registryCount && encontre == 0){
        char *nameConverted = toLowerCase(libros[i].titulo);
        char *nameToLook = toLowerCase(name);
        char *ret = strstr(nameConverted, nameToLook);
        if(ret){
            encontre = 1;
        } else {
            i++;
        }
    }
    //verifico que sali por que encontre
    if (encontre == 1){
        printf("El libro Existe, estos son los datos \n");
        printf("%s,%s. \n", libros[i].titulo, libros[i].autor);
    } else {
        printf("La libro no existe!");
    }

}

char *toLowerCase(char *name) {
    char *converted =  (char*)malloc( strlen(name) * sizeof(char));
    strcpy(converted,name);
    for(int i = 0; converted[i]; i++){
        converted[i] = tolower(converted[i]);
    }
    return converted;
}

void eliminarPersona(Libro *libros) {
    char titu[100];
    int cont=0, i=0;
    printf("dame el titulo de la wea");//intento que recorra el array y el cont es para que me cuente la posicion en la que esta lo que eliminaremos
    scanf("%s",titu);
    while (libros[i].titulo!=titu){
        printf("%i\n",cont);
        cont++;
    }

    }





void mostrarPersonas(Libro *libros) {

    //accedo a la cantidad de registro que lei
    for (int i = 0; i < registryCount; ++i) {
        //puedo solo imprimir su mail por ejemplo
        printf("%s,%s. \n", libros[i].titulo, libros[i].autor);
    }


