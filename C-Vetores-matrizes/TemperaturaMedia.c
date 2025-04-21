#include <stdio.h>
/*
Exerc�cio 2. Temperatura m�dia

O programa a seguir deve ler as temperaturas registradas diariamente, durante uma se-
mana, e informar em quantos dias a temperatura esteve acima da m�dia para o referido

per�odo. Crie as fun�es necess�rias para a correta execu�o desse programa.
*/
float Media(float v[]){

    float m = 0;
    for(int i = 0; i < 7 ;i++){
        m += v[i];
    }
    return m/7; 
}

void preenche(float v[]){
    for(int i = 0; i < 7 ;i++){
        printf("%da temperatura?", i+1);
        scanf("%f", &v[i]);
    }

}

int conta(float v[], float m){
    int c = 0;
    for(int i = 0; i < 7 ;i++){
        if(v[i]>m)c++;
    }
    return c;

}

int mainTempMedia (void){
    float v[7];
    preenche(v);
    float m = Media(v);
    printf("Media: %.1f %cC\n", m, 248);
    printf("Dias acima da media: %d\n", conta(v,m));

    return 0;

}