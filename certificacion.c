#include <stdio.h> 
#include <stdbool.h> 


int main(){
    int estado_animo= 0;
    bool confia_en_amigo_bool= false;
    int valor_bool=0;
    float confia_en_amigos_num=0;
    float fuerza_fisica=0;
    const int RESULTADO_DESCONOCIDO=65;
    const int RESULTADO_JUSTO=233;
    const int RESULTADO_POSITIVO=370;
    const int ESTADO_DE_ANIMO_INCORRECTO=10;
    
    //indago por los datos
    printf("Hola Eleven, te voy a hacer unas preguntas antes de tu enfrentamiento con el Demogorgon\n");
    printf("Como es tu estado de animo en este momento?\n");
    scanf("%i", &estado_animo);
    if (estado_animo< ESTADO_DE_ANIMO_INCORRECTO){
        printf("Mmm me parece que es un poco corto el rango este, del 1 al 100 como esta tu estado de animo?\n");
    scanf("%i", &estado_animo);
    }
    printf("Ahora contame, confias en tus amigos? 1 de verdadero o 0 de falso \n");
    scanf("%i", & valor_bool);
    confia_en_amigo_bool= valor_bool;
    printf("Mmm en este caso tampoco me parece que alcance con esta respuesta\nmejor pensemos en que tan alta es tu confianza en ellos\n");
    printf("Indica con:\n-1 si es Baja\n-2 si es Mediana\n3- si es Alta");
    scanf("%f", &confia_en_amigos_num);
    switch(confia_en_amigos_num){ //doy valor a la confianza
        case 1: 
            confia_en_amigos_num=0.7;
            break;
        case 2:
            confia_en_amigos_num= 1.3;
            break;
        case 3:
            confia_en_amigos_nun=3.7;
    }

    fuerza_fisica= estado_animo* confia_en_amigos_num;
    if(fuerza_fisica < RESULTADO_DESCONOCIDO){
        printf("El resultado de la batalla es desconocido\nHan desaparecido Eleven y el Demogorgon!! :0\n");

    }else if (fuerza_fisica >= RESULTADO_DESCONOCIDO & <RESULTADO_JUSTO){
        printf("El resultado es favorable para Eleven\npero ha quedado muy devil luego del enfrentamiento :3 \n");

    }else if (fuerza_fisica >= RESULTADO_JUSTO & < RESULTADO_POSITIVO){
        printf("El resultado es más que positivo\nEleven ha vencido al Demogorgon y está en optimas condiciones :D", );
    }


    return 0;
}
