#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include "libros.h"
#define MAXCHAR 1010

void mostrarPersonas(Libro *libros);
void buscarPersona(Libro *lLibros);
void eliminarpersona(Libro *libros);
void salir(Libro *lLibros);
void showMenu(Libro *libros);
void agregar();

void salir(Libro *lLibros);

char *toLowerCase(char *name);

int conta=0;

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
    printf("%s",libros[1].titulo);
    showMenu(libros);
    return 0;

}

void showTitles(){
    printf("Ingrese la opción \n");
    printf("1. - Buscar libro \n");
    printf("2. - agregar libro \n");
    printf("3. - eliminar libro \n");

    printf("4. - Borrar Persona \n");
    printf("5. - Mostrar Personas \n");
    printf("6. - Salir \n");
}
void showMenu(Libro *libros){
    int option = 0;
    int option2 = 0;
    int option3 = 0;
    int option4 = 0;
    int option5 = 0;


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
            case 1:
                buscarPersona(libros);
                break;
            case 2:
                printf("Qué desea eliminar");
                //agregar(libros);
                break;
            case 3:
                eliminarpersona(libros);
                break;
            case 4:
                mostrarPersonas(libros);
                break;
            case 5:
                salir(libros);
                break;
        }
    } while (option!=5);
}



void eliminarpersona(Libro *libros){
    char eliminar[1000];
    char borrar[1000];
    printf("\n\tPuede eliminar las siguientes cosas:\n");
    printf("\tLibro. \n");
    printf("\tSede. \n");
    printf("\tPiso. \n");
    printf("\tSeccion. \n");
    printf("\tEscriba que busca eliminar: ");
    scanf(" %[^\n]s",eliminar);
    if((strncmp(eliminar, "libro", 100) ==0) || (strncmp(eliminar,"Libro",100)==0)){
        char libro[255];
        printf("\tIngrese el libro: ");
        scanf(" %[^\n]s",libro);
        for (int i =0; i<conta; i++){
            if (strncmp(libro, libros[i].titulo, 100) ==0){
                memset(libros[i].titulo, 0, 100);
                memset(libros[i].autor, 0, 100);
                memset(libros[i].seccion, 0, 100);
                memset(libros[i].edificio, 0, 100);
                memset(libros[i].sede, 0, 100);
                libros[i].anio=0;
                libros[i].piso=0;
                libros[i].estante=0;

            }
        }
    }
    //Sede
    if((strncmp(eliminar, "sede", 100) ==0) || (strncmp(eliminar,"Sede",100)==0)){

        int count= 0;
        int contador= 0;
        char sd[255];
        printf("\tIngrese el nombre de la Sede: ");
        scanf(" %[^\n]s",sd);

        for (int i = 0; i < conta; i++)
        {
            if (i < conta)
            {

                if (strcmp(sd, libros[i].sede)==-10 || strcmp(sd, libros[i].sede)== 0 )
                {
                    contador=contador+1;
                }
            }

        }


        if (contador!=0)
        {
            printf("\n");
            printf("\tExisten libros asociados a la sede ingresada\n");
            printf("\t¿Desea borrarla de todos modos?(Si/No): ");
            scanf(" %[^\n]s",borrar);
        }
        for (int i = 0; i < conta; i++)
        {
            if((strncmp(borrar, "Si",100)==0)||(strncmp(borrar,"si",100)==0))
            {
                if (strncmp(sd, libros[i].sede, 100) ==-10 || strncmp(sd, libros[i].sede, 100) == 0 )
                {
                    memset(libros[i].titulo, 0, 100);
                    memset(libros[i].autor, 0, 100);
                    memset(libros[i].seccion, 0, 100);
                    memset(libros[i].edificio, 0, 100);
                    memset(libros[i].sede, 0, 100);
                    libros[i].anio=0;
                    libros[i].piso=0;
                    libros[i].estante=0;
                }
            }
        }
        if((strncmp(borrar, "No",100)==0)||(strncmp(borrar,"no",100)==0))
        {
            printf("\tOk, no se ha borrado ninguna sede\n");
        }


    }
    if((strncmp(eliminar, "piso", 100) ==0) || (strncmp(eliminar,"Piso",100)==0)){
        int count= 0;
        int ps=0;
        printf("\tIngrese el numero del piso: ");
        scanf("%d",&ps);

        for (int i = 0; i < conta; i++)
        {
            if (ps==libros[i].piso)
            {

                count= count + 1;
            }

        }


        if (count!=0)
        {
            printf("\tExisten libros asociados a la sede ingresada\n");
            printf("\t¿Desea borrarla de todos modos?(Si/No): ");
            scanf(" %[^\n]s",borrar);
        }
        for (int i = 0; i < conta; i++)
        {
            if((strncmp(borrar, "Si",100)==0)||(strncmp(borrar,"si",100)==0))
            {
                if (ps==libros[i].piso)
                {
                    memset(libros[i].titulo, 0, 100);
                    memset(libros[i].autor, 0, 100);
                    memset(libros[i].seccion, 0, 100);
                    memset(libros[i].edificio, 0, 100);
                    memset(libros[i].sede, 0, 100);
                    libros[i].anio=0;
                    libros[i].piso=0;
                    libros[i].estante=0;
                }
            }
        }
        if((strncmp(borrar, "No",100)==0)||(strncmp(borrar,"no",100)==0))
        {
            printf("\tOk, no se ha borrado ningun piso\n");
        }

    }

    //seccion
    if((strncmp(eliminar, "seccion", 100) ==0) || (strncmp(eliminar,"Seccion",100)==0)){
        int count= 0;
        char sc[255];
        char borrar[255];
        printf("\tIngrese el nombre de la Seccion: ");
        scanf(" %[^\n]s",sc);

        for (int i = 0; i < conta; i++)
        {
            if (strncmp(sc, libros[i].seccion, 100) ==0)
            {
                count= count + 1;
            }

        }


        if (count!=0)
        {
            printf("\tExisten libros asociados a la seccion ingresada\n");
            printf("\t¿Desea borrarla de todos modos?(Si/No): ");
            scanf(" %[^\n]s",borrar);
        }
        for (int i = 0; i < conta; i++)
        {
            if((strncmp(borrar, "Si",100)==0)||(strncmp(borrar,"si",100)==0))
            {
                if (strncmp(sc, libros[i].seccion, 100) ==0)
                {
                    memset(libros[i].titulo, 0, 100);
                    memset(libros[i].autor, 0, 100);
                    memset(libros[i].seccion, 0, 100);
                    memset(libros[i].edificio, 0, 100);
                    memset(libros[i].sede, 0, 100);
                    libros[i].anio=0;
                    libros[i].piso=0;
                    libros[i].estante=0;
                }
            }
        }
        if((strncmp(borrar, "No",100)==0)||(strncmp(borrar,"no",100)==0))
        {
            printf("\tOk, no se ha borrado ninguna seccion\n");
        }


    }
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







void mostrarPersonas(Libro *libros) {

    //accedo a la cantidad de registro que lei
    for (int i = 0; i < registryCount; ++i) {
        //puedo solo imprimir su mail por ejemplo
        printf("%s,%s. \n", libros[i].titulo, libros[i].autor);
    }


}


