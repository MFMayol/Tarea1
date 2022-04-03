#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "libros.h"
#define MAXCHAR 1010
enum OPTIONS {BUSCAR = 1, ELIMINAR = 2, MOSTRAR = 3, EDITAR = 4, SALIR = 5};

void mostrarPersonas(Libro *libros);
void buscarPersona(Libro *libros);
void eliminarPersona(Libro *libros);
void salir(Libro *libros);
void showMenu(Libro *libros);
void editBook(Libro *libros);

void salir(Libro *libros);

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
    printf("1. - Buscar Libro \n");
    printf("2. - Borrar Libro \n");
    printf("3. - Mostrar libros \n");
    printf("4. - Editar Libro \n");
    printf("5. - Salir \n");
}
void showMenu(Libro *libros){
    int option = 0;

    do {
        showTitles();
        scanf("%d", &option);
        //esto hace que el menu vuelva a mostrarse hasta que me ingrese una opcion valida
        while (option <= 0 || option >= 6) {
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
            case EDITAR:
                editBook(libros);
                break;
        }
    } while (option!=5);
}







void salir(Libro *pLibros) {
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
}
void editBook(Libro *libros){
    int i = 0;
    while(i++ < 6)
    {
        libros[i].titulo = malloc(sizeof(char *));  //assigning memory to variable in each Struct
        libros[i].titulo = strdup("Título");  //copying "name" to variable in each Struct
        printf("C - %s\n", libros[i].titulo);  //printing out name variable in each Struct
    }
}
