// ALG II Projeto 2 - O Primeiro Dicionário do Samuel

// Aluno: Gustavo Domingues de Oliveira - RA: 10743453
// Aluno: Rafael Dantas de Moraes - RA: 10736655
// Aluno: Pedro Nery - RA: 10427292


#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define limite_palavras 1000
#define tam_max_palavra 50
#define limite_stopwords 100

void converterParaMinusculas(char texto[]) {

    int i;

    for (i = 0; texto[i]; i++) {
        texto[i] = tolower((unsigned char) texto[i]);
    }
}

int buscaBinariaRec(char lista[][tam_max_palavra], char alvo[], int ini, int fim) {

    if (ini > fim) {
        return -1;
    }

    int meio = (ini + fim) / 2;

    int comparacao = strcmp(alvo, lista[meio]);

    if (comparacao == 0) {
        return meio;
    }

    if (comparacao < 0) {
        return buscaBinariaRec(lista, alvo, ini, meio - 1);
    }

    return buscaBinariaRec(lista, alvo, meio + 1, fim);
}

void inserirEmOrdem(char lista[][tam_max_palavra], int frequencia[], int *totalPalavras, char novaPalavra[]) {

    int pos = *totalPalavras;
    int i;

    for (i = 0; i < *totalPalavras; i++) {

        if (strcmp(novaPalavra, lista[i]) < 0) {
            pos = i;
            break;
        }
    }

    for (i = *totalPalavras; i > pos; i--) {

        strcpy(lista[i], lista[i - 1]);

        frequencia[i] = frequencia[i - 1];
    }

    strcpy(lista[pos], novaPalavra);

    frequencia[pos] = 1;

    (*totalPalavras)++;
}

int ehStopWord(char stopWords[][tam_max_palavra], int totalStopWords, char palavra[]) {

    int i;

    for (i = 0; i < totalStopWords; i++) {

        if (strcmp(stopWords[i], palavra) == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {

    FILE *arquivo = fopen("texto.txt", "r");

    if (!arquivo) {

        printf("Erro ao abrir o arquivo texto.txt\n");

        return 1;
    }

    char stopWords[][tam_max_palavra] = {
        "the", "in", "to", "a"
    };

    int totalStopWords = 4;

    char listaPalavras[limite_palavras][tam_max_palavra];
    int freqPalavras[limite_palavras];

    int total = 0;

    char palavraAtual[tam_max_palavra];

    int caractere;
    int indice = 0;

    while ((caractere = fgetc(arquivo)) != EOF) {

        if (isalpha(caractere)) {

            if (indice < tam_max_palavra - 1) {
                palavraAtual[indice++] = caractere;
            }
        }

        else if (indice > 0) {

            palavraAtual[indice] = '\0';

            converterParaMinusculas(palavraAtual);

            if (!ehStopWord(stopWords,totalStopWords,palavraAtual)) {

                int pos = buscaBinariaRec(listaPalavras, palavraAtual, 0, total - 1);

                if (pos == -1) {

                    inserirEmOrdem(listaPalavras, freqPalavras, &total, palavraAtual);
                }

                else {
                    freqPalavras[pos]++;
                }
            }

            indice = 0;
        }
    }

    if (indice > 0) {

        palavraAtual[indice] = '\0';

        converterParaMinusculas(palavraAtual);

        if (!ehStopWord(stopWords, totalStopWords, palavraAtual)) {

            int pos = buscaBinariaRec(listaPalavras, palavraAtual,0, total - 1);
            if (pos == -1) {
                inserirEmOrdem(listaPalavras,freqPalavras,&total,palavraAtual);
            }

            else {
                freqPalavras[pos]++;
            }
        }
    }
    fclose(arquivo);
    int i;
    for (i = 0; i < total; i++) {
        printf("%s, %d\n",
               listaPalavras[i],
               freqPalavras[i]);
    }

    printf("\ntotal de palavras diferentes no dicionario = %d\n",
           total);

    return 0;
}