#include <stdio.h>

int main() {
    int L, C;
    int A, B;

    // Leitura das dimensões do salão e posição inicial do robô
    scanf("%d %d", &L, &C);
    scanf("%d %d", &A, &B);

    // Verificações das restrições
    if (L < 1 || L > 1000 || C < 1 || C > 1000) {
        return 1; // Dimensões do salão fora do intervalo permitido
    }

    if (A < 1 || A > L || B < 1 || B > C) {
        return 1; // Posição inicial do robô fora do intervalo permitido
    }

    // Leitura da matriz de ladrilhos
    int matrix[L][C];
    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < C; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Posição inicial do robô
    int current_column = B - 1; // Convertendo B para base 0

    // Percorre da coluna B para a direita até encontrar um ladrilho branco
    while (current_column < C) {
        if (current_column == C - 1 || matrix[A - 1][current_column] == 0) {
            // Se chegamos ao final da linha ou encontramos um ladrilho branco
            current_column = C; // Forçar a saída do loop
        }
        current_column++;
    }

    // A posição final é (A, current_column + 1)
    printf("%d %d\n", A, current_column + 1);

    return 0;
}