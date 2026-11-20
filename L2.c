#include <stdio.h>

typedef struct {
    char nome[30];
    float n1, n2, n3;
} Aluno;

int main(void) {
    Aluno alunos[3] = {
        {"Ana", 9.0, 9.0, 9.0},
        {"Pedro", 7.0, 8.0, 6.0},
        {"Maria", 8.0, 8.0, 7.0}
    };

    float maior_media = 0;
    int melhor = 0;

    for (int i = 0; i < 3; i++) {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3;

        if (media > maior_media) {
            maior_media = media;
            melhor = i;
        }
    }

    printf("Maior media: %s (%.2f)\n",
           alunos[melhor].nome, maior_media);

    return 0;
}