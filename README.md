# Multiuso - 5 Programas em 1

Este é um programa em linguagem C que oferece cinco funcionalidades distintas em uma única aplicação. Desenvolvido como uma ferramenta multiuso, ele permite realizar cálculos de Índice de Massa Corporal (IMC), conversão de temperatura (Celsius para Fahrenheit), conversão de centímetros para metros, conversão de libras para quilogramas e conversão de quilômetros para milhas.

## Visão Geral

O programa apresenta um menu interativo que permite ao usuário escolher qual das cinco funcionalidades deseja utilizar. Após a escolha, o programa solicita as entradas necessárias, realiza o cálculo ou a conversão e exibe o resultado. O usuário pode realizar múltiplas operações até optar por finalizar o programa.

## Funcionalidades

1.  **Cálculo do IMC:**
    * Solicita o peso em quilogramas (kg) e a altura em metros (m).
    * Calcula o Índice de Massa Corporal (IMC) utilizando a fórmula: $\text{IMC} = \frac{\text{peso}}{\text{altura}^2}$.
    * Exibe o valor do IMC e a classificação correspondente (abaixo do peso, peso normal, sobrepeso, obeso).
    * Realiza uma validação básica para garantir que a altura inserida seja um valor positivo.

2.  **Conversão de Celsius para Fahrenheit:**
    * Solicita a temperatura em graus Celsius (°C).
    * Converte a temperatura para graus Fahrenheit (°F) utilizando a fórmula: $F = (C \times \frac{9}{5}) + 32$.
    * Exibe a temperatura convertida.

3.  **Conversão de Centímetros para Metros:**
    * Solicita o valor em centímetros (cm).
    * Converte o valor para metros (m) utilizando a relação: $1 \text{ metro} = 100 \text{ centímetros}$.
    * Exibe o valor convertido.

4.  **Conversão de Libras para Quilogramas:**
    * Solicita o peso em libras (lbs).
    * Converte o peso para quilogramas (kg) utilizando o fator de conversão: $1 \text{ libra} \approx 0.4536 \text{ quilogramas}$.
    * Exibe o peso convertido.

5.  **Conversão de Quilômetros para Milhas:**
    * Solicita a distância em quilômetros (km).
    * Converte a distância para milhas utilizando o fator de conversão: $1 \text{ quilômetro} \approx 0.621371 \text{ milhas}$.
    * Exibe a distância convertida.

6.  **Finalizar o Programa:**
    * Opção para encerrar a execução do programa.

## Como Utilizar

1.  **Compilação:**
    * Para compilar o código, utilize um compilador C (como GCC) com o seguinte comando:
        ```bash
        gcc nome_do_arquivo.c -o multiuso
        ```
        Substitua `nome_do_arquivo.c` pelo nome do arquivo fonte do programa.

2.  **Execução:**
    * Após a compilação, execute o programa com o seguinte comando:
        ```bash
        ./multiuso
        ```
        (Em sistemas Linux/macOS)
        ```bash
        multiuso.exe
        ```
        (Em sistemas Windows)

3.  **Interação:**
    * O programa exibirá um menu com as opções das funcionalidades.
    * Digite o número correspondente à funcionalidade desejada e pressione Enter.
    * Siga as instruções na tela para inserir os valores necessários.
    * O resultado será exibido.
    * Após cada operação, o programa retornará ao menu principal até que a opção de finalizar seja escolhida.

## Tecnologias Utilizadas

* **Linguagem C:** A linguagem de programação utilizada para desenvolver o programa.
* **Bibliotecas Padrão:** O programa utiliza as bibliotecas padrão `stdio.h` para operações de entrada e saída e `stdlib.h` para funções de uso geral, incluindo a função `system` para limpar a tela.

## Estrutura do Código

O código é organizado em uma função principal (`main`) que contém um loop `do-while` para exibir o menu e executar as funcionalidades escolhidas pelo usuário através de uma estrutura `switch-case`. Cada `case` corresponde a uma das funcionalidades do programa.

## Autor

* **Raphael Marins de Melo**
* **Data:** 26/10/2024

## Observações

* O programa utiliza a função `system("cls")` no Windows e `system("clear")` em outros sistemas operacionais para limpar a tela do terminal, proporcionando uma melhor experiência de usuário ao navegar pelo menu.
* Após cada operação, o programa pausa e aguarda que o usuário pressione a tecla Enter antes de retornar ao menu, permitindo que o usuário visualize o resultado antes de continuar.
* Uma validação básica é implementada na função de cálculo do IMC para evitar erros com alturas não positivas.

## Contribuições

Contribuições para melhorar o programa são bem-vindas. Se você encontrar algum bug ou tiver sugestões de novas funcionalidades, sinta-se à vontade para abrir uma issue ou enviar um pull request.
