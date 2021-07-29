#include <stdio.h> 
#include <stdbool.h> 

const int RESULTADO_DESCONOCIDO=65;
const int RESULTADO_JUSTO=233;
const int RESULTADO_POSITIVO=370;
const int ESTADO_DE_ANIMO_INCORRECTO=10;

/*Descripcion: solicita el estado de animo y lo devuelve en numero
 *Pre: el valor debe ser entre 1 y 100
 *Post: devuelve el valor ingresado por el usuario
*/
int pregunto_estado_animo (){
    int estado_animo=0;
    printf("Hola Eleven, te voy a hacer unas preguntas antes de tu enfrentamiento con el Demogorgon\n");
    printf("Como es tu estado de animo en este momento?\n");
    scanf("%i", & estado_animo);
    if (estado_animo< ESTADO_DE_ANIMO_INCORRECTO){
        printf("Mmm probemos de nuevo mejor, del 1 al 100 como esta tu estado de animo?\n");
    scanf("%i", &estado_animo);
    }
    return estado_animo;
}

/*Descripcion: solicita el estado de animo y lo devuelve en numero convertido segun tabla de confianza 
 *Pre: el valor debe ser entre 1 y 3
 *Post: devuelve el valor convertido segun tabla
*/
float confianza_en_amigos (){
    float confia_en_amigos=0;
    printf("Ahora contame, confias en tus amigos? 1 de verdadero o 0 de falso \n");
    printf("Mmm en este caso tampoco me parece que alcance con esta respuesta\nmejor pensemos en que tan alta es tu confianza en ellos\n");
    printf("Indica con:\n-1 si es Baja\n-2 si es Mediana\n-3 si es Alta\n");
    scanf("%f", &confia_en_amigos);
    if (confia_en_amigos == 1){
        confia_en_amigos=0.7;
    }else if (confia_en_amigos== 2){
        confia_en_amigos=1.3;
    }else if (confia_en_amigos==3){
        confia_en_amigos=3.7;
    }else{ 
        printf("Error, ingrese si su confiaza es:\n-1 si es Baja\n-2 si es Mediana\n3- si es Alta\n");
    }
    return confia_en_amigos;
}
/*Descripcion: hace el calculo para saber el resultado de la batalla
 *Pre: toma el resultado de la fuerza fisica calculado en main
 *Post: no devuelve nada
*/
void resultado_batalla (float fuerza_fisica){
    if(fuerza_fisica < RESULTADO_DESCONOCIDO){
        printf("El resultado de la batalla es desconocido\nHan desaparecido Eleven y el Demogorgon!! :0\n");

    }else if ((fuerza_fisica > RESULTADO_DESCONOCIDO) & (fuerza_fisica<RESULTADO_JUSTO)){
        printf("El resultado es favorable para Eleven\npero ha quedado muy devil luego del enfrentamiento :3 \n");

    }else if ((fuerza_fisica >= RESULTADO_JUSTO) & (fuerza_fisica< RESULTADO_POSITIVO)){
        printf("El resultado es más que positivo!!\nEleven ha vencido al Demogorgon y está en optimas condiciones :D\n");
    }

}


int main(){
    int estado_animo= 0;
    float confia_en_amigos=0;
    float fuerza_fisica=0;

    estado_animo= pregunto_estado_animo();
   
    confia_en_amigos= confianza_en_amigos ();
    
    fuerza_fisica= estado_animo* confia_en_amigos;

    resultado_batalla (fuerza_fisica);
   
    return 0;
}