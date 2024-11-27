/* ============================================================================

    Linguagem C
    Título do Programa: Multiuso 
    
    Autor: Raphael Marins de Melo
    Data: 26/10/2024

============================================================================ */


/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{
    float kg, altura, imc;
    int funcao;

    do
    {
        // Limpa a tela
        #ifdef _WIN32
            system("cls"); // Windows
        #else
            system("clear"); // Linux/Mac
        #endif

        printf("=-=-=-=-=-=-=-=-=-=-= Programa 5 em 1 =-=-=-=-=-=-=-=-=-=-=\n");
        printf("[1] Para calcular o seu IMC.\n");
        printf("[2] Para converter a temperatura em Celsius para Fahrenheit.\n");
        printf("[3] Para calcular centimetros em metros.\n");
        printf("[4] Converte Libras em Quilogramas.\n");
        printf("[5] Converter quilometros em milhas.\n");
        printf("[6] Para finalizar o programa.\n");
        printf("===========================================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &funcao);

        switch (funcao)
        {
        case 1: // Cálculo do IMC
            printf("***************** IMC *****************\n\n");
            printf("Digite o seu peso (kg): ");
            scanf("%f", &kg);
            printf("Digite a sua altura (m): ");
            scanf("%f", &altura);

            if (altura <= 0) {
                printf("Altura invalida! Tente novamente.\n");
                break;
            }

            imc = kg / (altura * altura);

            if (imc < 18.5)
                printf("O seu IMC e %.2f. Voce esta abaixo do peso.\n", imc);
            else if (imc >= 18.5 && imc < 25)
                printf("O seu IMC e %.2f. Voce esta no peso normal.\n", imc);
            else if (imc >= 25 && imc < 30)
                printf("O seu IMC e %.2f. Voce esta com sobrepeso.\n", imc);
            else
                printf("O seu IMC e %.2f. Voce esta obeso.\n", imc);
            break;

        case 2: // Conversão de temperatura
            {
                float celsius, fahrenheit;
                printf("Digite a temperatura em Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = (celsius * 9 / 5) + 32;
                printf("%.2f Celsius equivale a %.2f Fahrenheit.\n", celsius, fahrenheit);
            }
            break;

        case 3: // Conversão de centímetros para metros
            {
                float centimetros, metros;
                printf("Digite o valor em centimetros: ");
                scanf("%f", &centimetros);
                metros = centimetros / 100;
                printf("%.2f centimetros equivale a %.2f metros.\n", centimetros, metros);
            }
            break;
        case 4: //Converte Libras em Quilogramas.
        {
            float libras, kg;
            printf("Digite o peso em libras para saber o peso em KG: ");
            scanf("%f", &libras);
            kg = libras * 0.4536;
            printf("%.2f lbs convertido e %.2f KG.\n",libras,kg);
        }
            break;
        case 5: //Converter quilometros em milhas
        {
            float mph, km;
            printf("Digite quantos km voce quer converter em milhas: ");
            scanf("%f", &km);
            mph = km * 0.621371;
            printf("%f KM e igual a %f milhas.\n",km,mph);
        }
            break;
        case 6: // Finalizar o programa
            printf("Programa finalizado...\n");
            break;

        default:
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }

        // Pausa antes de retornar ao menu
        printf("\nPressione Enter para continuar...");
        getchar(); getchar(); // Lê o buffer para evitar problemas no pause

    } while (funcao != 6);

    return 0;
}


/* ============================================================================  
                                                              
                                       _                      
                                      / \                     
                                     |oo >                    
                                     _\=/_                    
                    ___         #   /  _  \   #               
                   /<> \         \\//|/.\|\\//                
                 _|_____|_        \/  \_/  \/                 
                | | === | |          |\ /|                    
                |_|  0  |_|          \_ _/                    
                 ||  0  ||           | | |                    
                 ||__*__||           | | |                    
                |* \___/ *|          []|[]                    
                /=\ /=\ /=\          | | |                    
________________[_]_[_]_[_]_________/_]_[_\_______________________________
                                                              
                                                              
============================================================================ */
/* --- Final do Programa --- */