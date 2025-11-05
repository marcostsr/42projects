#include <stdio.h>
#include <stdlib.h>

#define MAX_PERMS 120
#define N 4

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Funcao recursiva para gerar todas as combinacoes da matriz
void permutacoes(int nums[], int start, int end, int resultado[][N], int *count) {
    if (start == end) {
        for (int i = 0; i < N; i++) {
            resultado[*count][i] = nums[i];
        }
        (*count)++;
        return;
    }
    for (int i = start; i <= end; i++) {
        swap(&nums[start], &nums[i]);
        permutacoes(nums, start + 1, end, resultado, count);
        swap(&nums[start], &nums[i]);
    }

}

int main() {
    int matriz[N][N];
    int vet[MAX_PERMS][2];
    int comb[MAX_PERMS][N];

    // Initialize permutation array
    int nums[N];
    for (int i = 0; i < N; i++) {
        nums[i] = i + 1;
    }

    // Generate all permutations
    int resultado[MAX_PERMS][N];
    int count = 0;
    permutacoes(nums, 0, N - 1, resultado, &count);

    // Copiar as permutacoes as combinacoes
    for (int i = 0; i < MAX_PERMS; i++) {
        for (int j = 0; j < N; j++) {
            comb[i][j] = resultado[i][j];
        }
    }

    /*Inicializa a matriz ix2 para termos as solucoes possiveis de um certo par*/
    for (int i = 0; i < MAX_PERMS; i++) {
        vet[i][0] = 1;
        vet[i][1] = 1;
    }

    // Calcula os valores de vet
    for (int i = 0; i < MAX_PERMS; i++) {
        int Ncomp1 = 1, Ncomp2 = 1;
        for (int j = 0; j < N - 1; j++) {
            if (comb[i][j] < comb[i][j + 1] && Ncomp1 < comb[i][j + 1]) {
                vet[i][0]++;
                if (Ncomp1 < comb[i][j]) {
                    Ncomp1 = comb[i][j];
                }
            } else {
                if (Ncomp1 < comb[i][j]) {
                    Ncomp1 = comb[i][j];
                }
            }
            int idx = N - 1 - j;
            int prev_idx = N - 2 - j;
            if (comb[i][idx] < comb[i][prev_idx] && Ncomp2 < comb[i][prev_idx]) {
                vet[i][1]++;
                if (Ncomp2 < comb[i][prev_idx]) {
                    Ncomp2 = comb[i][prev_idx];
                }
            } else {
                Ncomp2 = comb[i][prev_idx];
            }
        }
    }

    int colsol[4][2] = {{4,1},{3,2},{2,2},{1,2}};
    int linsol[4][2] = {{4,1},{3,2},{2,2},{1,2}};

    // Initialize matriz with zeros
    for (int i = 0; i < N; i++) {
        for (int s = 0; s < N; s++) {
            matriz[i][s] = 0;
        }
    }

    // Solver logic
    for (int i = 0; i < N; i++) {
        int c1 = colsol[i][0];
        int c2 = colsol[i][1];
        int l1 = linsol[i][0];
        int l2 = linsol[i][1];

        for (int s = 0; s < N; s++) {
            for (int j = 0; j < MAX_PERMS; j++) {
                for (int t = 0; t < MAX_PERMS; t++) {
                    if (c1 == vet[j][0] && c2 == vet[j][1]) {
                        if (comb[j][s] == comb[t][s]) {
                            if (l1 == vet[t][0] && l2 == vet[t][1]) {
                                matriz[i][s] = comb[t][s];
                                
							}
							
						}
						
					}
					
				}
				
			}
			
		}

	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
		printf(" %d ",matriz[i][j]);
		}
		printf("\n");	
	}
}