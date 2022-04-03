#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include <stdlib.h>
#include "libros.h"

#define MAXCHAR 1000
#define READ_ONLY "r"
#define WRITE "w+"


int registryCount = 0;

FILE * openFile(char *filename){
    FILE *fp;
    fp = fopen(filename,READ_ONLY);
    return fp;
}

void closeFile(FILE *fp){
    fclose(fp);
}

Libro *getLibros(FILE *fp) {
    //genero un array dinamico de personas
    Libro *libros = (Libro*) malloc(5000*sizeof(Libro));;

    char row[MAXCHAR];
    char *token;
    int cont = 0;
    //saco la primer linea
    fgets(row, MAXCHAR, fp);
    while (!feof(fp)){
        if (!feof(fp)){
            //obtiene la linea siguiente
            fgets(row, MAXCHAR, fp);
            token = strtok(row, ",");
            //print id first
            Libro  *libro = (Libro *) malloc(sizeof(Libro));;
            //convierto el id en entero
            int anio = atoi(token);
            int estante_numero = atoi(token);
            int piso = atoi(token);

            //lo paso a la persona


            libro->titulo = (char*)malloc( strlen(token) * sizeof(char));
            strcpy( libro->titulo, token);
            token = strtok(NULL, ",");

            libro->autor = (char*)malloc( strlen(token) * sizeof(char));
            //finalmente lo copio en el campo de persona
            strcpy( libro->autor, token);
            token = strtok(NULL, ",");

            libro->anio = anio;
            token = strtok(NULL, ",");

            libro->estante = estante_numero;
            token = strtok(NULL, ",");

            libro->seccion = (char*)malloc( strlen(token) * sizeof(char));
            //finalmente lo copio en el campo de persona
            strcpy( libro->seccion, token);
            token = strtok(NULL, ",");

            libro->piso = piso;
            token = strtok(NULL, ",");

            libro->edificio = (char*)malloc( strlen(token) * sizeof(char));
            //finalmente lo copio en el campo de persona
            strcpy( libro->edificio, token);
            token = strtok(NULL, ",");

            libro->sede = (char*)malloc( strlen(token) * sizeof(char));
            //finalmente lo copio en el campo de persona
            strcpy( libro->sede, token);
            token = strtok(NULL, ",");


            libros[cont] = *libro;
            cont++;
        }
    }
    //guardo la cantidad de registros que lei
    registryCount = cont;
    return libros;
}



