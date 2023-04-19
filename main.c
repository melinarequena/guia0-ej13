/*Implemente una función que reciba dos strings como parámetro y devuelva 1 si son
iguales y 0 en caso contrario. No se puede usar la función strcmp() de la librería
        string.h.*/

#include<stdio.h>
void igualono(char *, char *);
int main(){
    char t1[1000], t2[1000], *t1ptr, *t2ptr;
    printf("Ingrese el texto 1 y 2:\n");
    fflush(stdin);
    gets(t1);
    fflush(stdin);
    gets(t2);
    t2ptr =  &t2;
    t1ptr = &t1;
    igualono(t1, t2);
    return 0;
}
void igualono(char *t1ptr, char *t2ptr){
    int i, c1=0, c2=0;
    for(i=0; t1ptr[i]!='\0'; i++){
        if(t1ptr[i]==t2ptr[i]){
            c1++;
        }
        c2++;
    }
    if(c1==c2){
        printf("1");
    }else
        printf("0");
}

