#include <stdio.h>

const int TAMANHO_ARRAY = 20;

// Função para encontrar o valor máximo e o índice desse valor em um array
void encontrarMaximo(float arr[], int n, float* max, int* horaMax) {
    *max = arr[0];
    *horaMax = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
            *horaMax = i;
        }
    }
}

// Função para encontrar o valor mínimo e o índice desse valor em um array
void encontrarMinimo(float arr[], int n, float* min, int* horaMin) {
    *min = arr[0];
    *horaMin = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
            *horaMin = i;
        }
    }
}

int main() {
    // Inicializa o array com valores de potência
    float potencias[TAMANHO_ARRAY] = {10.5, 15.2, 20.8, 30.1, 40.3, 50.7, 60.4, 70.9, 80.6, 90.2, 
                                      85.5, 80.1, 70.8, 60.3, 50.9, 40.4, 30.2, 25.7, 15.3, 10.1};

    // Mensagem de boas-vindas
    printf("Analise de potencia.\n\n");
    
      
    // Exibe todos os valores registrados
    printf("Valores de potencia registrados durante o dia:\n");
    for (int i = 0; i < TAMANHO_ARRAY; i++) {
        printf("Hora %d: %.1f W\n", i + 1, potencias[i]);
    }

    // Variáveis para armazenar o máximo e mínimo valores e suas horas
    float maxPotencia, minPotencia;
    int horaMax, horaMin;

    // Encontra o valor máximo e mínimo e as horas correspondentes
    encontrarMaximo(potencias, TAMANHO_ARRAY, &maxPotencia, &horaMax);
    encontrarMinimo(potencias, TAMANHO_ARRAY, &minPotencia, &horaMin);

    // Exibe o valor máximo e mínimo com as horas correspondentes
    printf("\nResumo da analise:\n");
    printf("Potencia maxima registrada: %.1f W na Hora %d\n", maxPotencia, horaMax + 1);
    printf("Potencia minima registrada: %.1f W na Hora %d\n", minPotencia, horaMin + 1);

    // Mensagem de encerramento
    printf("\nOs valores maximo e minimo foram identificados.\n");

    return 0;
}

