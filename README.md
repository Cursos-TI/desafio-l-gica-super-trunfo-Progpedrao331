# Super Trunfo em C - Desafio Nível Novato (Versão Interativa)

## Funcionalidades

  * **Entrada de Dados via Teclado**: O programa solicita que o usuário digite todos os atributos para duas cartas do jogo.
  * **Suporte para Nomes com Espaços**: Utiliza uma máscara de `scanf` aprimorada (`%[^\n]`) para permitir a entrada de nomes de cidades com espaços (ex: "Rio de Janeiro").
  * **Cálculo Automático de Atributos**: Após a entrada de dados, o programa calcula e exibe a "Densidade Populacional" e o "PIB per capita" para cada carta.
  * **Comparação Lógica**: A lógica para determinar o vencedor é feita com estruturas `if-else`.
  * **Regras de Comparação Específicas**:
      * Para a maioria dos atributos, a carta com o **maior** valor vence.
      * Para o atributo "Densidade Populacional", a carta com o **menor** valor vence.
  * **Exibição Clara dos Resultados**: Ao final, o programa mostra um resumo da comparação, indicando o atributo utilizado, os valores de cada carta e o resultado final (vitória, derrota ou empate).

## Como Compilar e Executar

### Pré-requisitos

Para compilar e executar este código, você precisará de um compilador C. O mais comum é o **GCC** (GNU Compiler Collection), que geralmente já vem instalado em sistemas Linux e macOS. Para Windows, ele pode ser instalado através de ferramentas como o MinGW ou o WSL.

### Passo a Passo

1.  **Salvar o Código**: Salve o código em um arquivo chamado `super_trunfo.c`.

2.  **Abrir o Terminal**: Abra um terminal (ou prompt de comando) e navegue até a pasta onde você salvou o arquivo.

3.  **Compilar o Programa**: Execute o seguinte comando para compilar o código. Isso criará um arquivo executável chamado `super_trunfo`.

    ```sh
    gcc super_trunfo.c -o super_trunfo
    ```

4.  **Executar o Programa**: Para iniciar o jogo, execute o arquivo recém-criado:

    ```sh
    ./super_trunfo
    ```

## Como Alterar o Atributo de Comparação

Nesta versão do desafio, a escolha do atributo a ser comparado ainda é feita **diretamente no código**. Para alterar, siga os passos:

1.  Abra o arquivo `super_trunfo.c` em um editor de texto.
2.  Encontre a linha que define a variável `atributo_a_comparar`:
    ```c
    int atributo_a_comparar = 1;
    ```
3.  Altere o valor da variável de acordo com a lista abaixo:
      * `1`: População
      * `4`: Densidade Populacional
        *(Para comparar outros atributos, seria necessário adicionar mais blocos `else if` na estrutura de decisão do código)*
4.  Salve o arquivo e **recompile o programa** usando o comando `gcc` novamente para que as alterações tenham efeito.