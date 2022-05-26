#include <stdio.h>

int main()
{
    int vip = 0, camarote = 0, arquibancada = 0, gramado = 0, valorarrecadado = 0, meiaqtd = 0, totalingressos = 0, tipoingresso = 0, meiaentrada = 0 ;
    printf("%d", meiaentrada);
    int meiavip = 0, meiacamarote = 0, meiaarquibancada =0 , meiagramado = 0, percentual = 0;
    int cpf = 1;
    int valorvip = 0, valorcamarote = 0, valorgramado = 0, valorarquibancada = 0;
    printf("Olá, Seja bem vindo!!\n");
    printf("Aqui voce podera fazer a compra do ingresso.\n");
    printf("Para continuar digite o seu cpf ou 0 para terminar: \n");
    scanf("%d", &cpf);
    while(cpf!=0){
        printf("Deseja adiquirir valor meia entrada? 1- Sim | 2- Não \n");
        scanf("%d", &meiaentrada);
        if(meiaentrada == 2){
            printf("Digite a area que deseja adiquirir o ingresso (numero): ");
            printf("1- VIP R$400,00 | 2- CAMAROTE R$300,00 | 3- GRAMADO R$150,00 | 4- ARQUIBANCADA R$100,00 \n");
            scanf("%d", &tipoingresso);
            if (tipoingresso == 1){
                vip = vip + 1;
                valorvip = valorvip + 400;
            }
            if (tipoingresso == 2){
                camarote = camarote + 1;
                valorcamarote = valorcamarote + 300;
            }
            if (tipoingresso == 3){
                gramado = gramado + 1;
                valorgramado = valorgramado + 150;
            }
            if (tipoingresso == 4){
                arquibancada = arquibancada + 1;
                valorarquibancada = valorarquibancada + 100;
            }
        }
        
        if (meiaentrada == 1) {
            printf("Digite a area que deseja adiquirir o ingresso (numero): ");
            printf("1- VIP R$200,00 | 2- CAMAROTE R$150,00 | 3- GRAMADO R$75,00 | 4- ARQUIBANCADA R$50,00 \n");
            scanf("%d", &tipoingresso);
            if (tipoingresso == 1){
                meiavip = meiavip + 1;
                valorvip = valorvip + 200;
            }
            if (tipoingresso == 2){
                meiacamarote = meiacamarote + 1;
                valorcamarote = valorcamarote + 150;
            }
            if (tipoingresso == 3){
                meiagramado = meiagramado + 1;
                valorgramado = valorgramado + 75;
            }
            if (tipoingresso == 4){
                meiaarquibancada = meiaarquibancada + 1;
                valorarquibancada = valorarquibancada + 50;
            }
        }
        printf("Para continuar digite o seu cpf ou 0 para terminar: \n");
        scanf("%d", &cpf);
    }
    
    valorarrecadado = valorvip + valorcamarote + valorgramado + valorarquibancada;
    meiaqtd = meiavip + meiacamarote + meiagramado + meiaarquibancada;
    totalingressos = meiaqtd + vip + camarote + gramado + arquibancada;
    
    printf("O total de valor arrecadado no show foi de: %d", valorarrecadado);
    
    if ((valorvip>valorcamarote) && (valorvip>valorgramado) && (valorvip>valorarquibancada)){
        printf("A Area que mais arrecadou foi a VIP com o total de: %d", valorvip);
    }
    if ((valorcamarote>valorvip) && (valorcamarote>valorgramado) && (valorcamarote>valorarquibancada)){
        printf("A Area que mais arrecadou foi o CAMAROTE com o total de: %d", valorcamarote);
    }
    if ((valorgramado>valorvip) && (valorgramado>valorcamarote) && (valorgramado>valorarquibancada)){
        printf("A Area que mais arrecadou foi o GRAMADO com o total de: %d", valorgramado);
    }
    if ((valorarquibancada>valorvip) && (valorarquibancada>valorcamarote) && (valorarquibancada>valorgramado)){
        printf("A Area que mais arrecadou foi a ARQUIBANCADA com o total de: %d", valorarquibancada);
    }
    
    percentual = (meiaqtd * 100) / totalingressos;
    printf("A quatidade de estudantes meia entrada foi de: %d", meiaqtd);
    printf ("O percentual de meia entrada em relação ao total de ingressos foi de: %d", percentual);
    
    return 0;
}
