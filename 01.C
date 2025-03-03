#include <stdio.h>
main(){
    int numero, antercessor, sucessor;
    printf("DIGITE O NUMERO INTEIRO:");
    scanf("%d",&numero);
    antercessor= numero-1;
    sucessor= numero+1;
    printf("o antercesor do numero e %d\n",antercessor);
    printf("o sucessor do numero e %d\n",sucessor);

    return 0;
}
