#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 100

int main(){
    char nomes[MAX_PACIENTES][100];
    int idades[MAX_PACIENTES], bpms[MAX_PACIENTES], saturacoes[MAX_PACIENTES], dores[MAX_PACIENTES];
    int prioridade[MAX_PACIENTES];
    float temperaturas[MAX_PACIENTES];

    int total = 0;
    int continuar = 1;


    while (continuar) {
        printf("TRIAGEM DE EMERGENCIA\n");
        
        if (total >= MAX_PACIENTES) {
            printf("Erro, Capacidade maxima de memoria atingida.\n");
            break;
        }

        printf("Nome do Paciente: ");
        scanf(" %99[^\n]", nomes[total]);
        
        printf("Idade: ");
        scanf("%d", &idades[total]);

        printf("Temperatura (C): ");
        scanf("%f", &temperaturas[total]);

        printf("Frequencia Cardiaca (BPM): ");
        scanf("%d", &bpms[total]);

        printf("Nivel de dor (0-10): ");
        scanf("%d", &dores[total]);


        int prioridade_atual = 0;
        if (temperaturas[total] > 38.5 || temperaturas[total] < 35.0) prioridade_atual += 2;
        if (bpms[total] > 110 || bpms[total] < 50) prioridade_atual += 2;
        if (dores[total] >= 8) prioridade_atual += 3;
        if (idades[total] > 65 || idades[total] < 5) prioridade_atual += 1;

        prioridade[total] = prioridade_atual;

        printf("==================================\n");
        printf("PACIENTE: %s\n", nomes[total]);
        
        if (prioridade_atual >= 6) 
        printf("RESULTADO: VERMELHO (Emergencia)\n");
        
        else if (prioridade_atual >= 4)
        printf("RESULTADO: AMARELO (Urgente)\n");
        
        else if (prioridade_atual >= 2)
        printf("RESULTADO: VERDE (Pouco urgente)\n");
        
        else 
        printf("RESULTADO: BRANCO (Nao urgente)\n");
        
        printf("==================================\n");

        total++;

        printf("\nDeseja realizar uma nova triagem? (1-Sim, 0-Sair): ");
        if (scanf("%d", &continuar) != 1) 
        break;
    }

    printf("ATENDIMENTOS\n");
    for (int i = 0; i < total; i++) {
        printf("[%d] %-20s | Prioridade: %d\n", i + 1, nomes[i], prioridade[i]);
    }

    printf("Sistema encerrado.\n");
    
    return 0;
}
