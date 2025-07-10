#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char pesan[31];
    fgets(pesan, sizeof(pesan), stdin);
    pesan[strcspn(pesan, "\n")] = 0;

    for (int i = 0; i < strlen(pesan); i++) {
        pesan[i] = toupper(pesan[i]);
    }

    for (int i = 0; i < strlen(pesan); i++) {
        if (pesan[i] == ' ') {
            printf("0 ");
        } else if (pesan[i] == 'A') {
            if (i > 0 && (pesan[i - 1] == 'B' || pesan[i - 1] == 'C')) {
                printf("-1 "); // Cetak -1 jika A berdampingan dengan B atau C
            }
            printf("1 "); // Cetak 1 untuk A
        } else if (pesan[i] == 'B') {
            if (i > 0 && (pesan[i - 1] == 'A' || pesan[i - 1] == 'C')) {
                printf("-1 "); // Cetak -1 jika B berdampingan dengan A atau C
            }
            printf("1 1 "); // Cetak 1 1 untuk B
        } else if (pesan[i] == 'C') {
            if (i > 0 && (pesan[i - 1] == 'A' || pesan[i - 1] == 'B')) {
                printf("-1 "); // Cetak -1 jika C berdampingan dengan A atau B
            }
            printf("1 1 1 "); // Cetak 1 1 1 untuk C
        } else if (pesan[i] == 'D') {
            if (i > 0 && (pesan[i - 1] == 'E' || pesan[i - 1] == 'F')) {
                printf("-1 "); // Cetak -1 jika D berdampingan dengan E atau F
            }
            printf("2 "); // Cetak 2 untuk D
        } else if (pesan[i] == 'E') {
            if (i > 0 && (pesan[i - 1] == 'D' || pesan[i - 1] == 'F')) {
                printf("-1 "); // Cetak -1 jika E berdampingan dengan D atau F
            }
            printf("2 2 "); // Cetak 2 2 untuk E
        } else if (pesan[i] == 'F') {
            if (i > 0 && (pesan[i - 1] == 'D' || pesan[i - 1] == 'E')) {
                printf("-1 "); // Cetak -1 jika F berdampingan dengan D atau E
            }
            printf("2 2 2 "); // Cetak 2 2 2 untuk F
        } else if (pesan[i] == 'G') {
            if (i > 0 && (pesan[i - 1] == 'H' || pesan[i - 1] == 'I')) {
                printf("-1 "); // Cetak -1 jika G berdampingan dengan H atau I
            }
            printf("3 "); // Cetak 3 untuk G
        } else if (pesan[i] == 'H') {
            if (i > 0 && (pesan[i - 1] == 'G' || pesan[i - 1] == 'I')) {
                printf("-1 "); // Cetak -1 jika H berdampingan dengan G atau I
            }
            printf("3 3 "); // Cetak 3 3 untuk H
        } else if (pesan[i] == 'I') {
            if (i > 0 && (pesan[i - 1] == 'G' || pesan[i - 1] == 'H')) {
                printf("-1 "); // Cetak -1 jika I berdampingan dengan G atau H
            }
            printf("3 3 3 "); // Cetak 3 3 3 untuk I
               } else if (pesan[i] == 'J') {
            if (i > 0 && (pesan[i - 1] == 'K' || pesan[i - 1] == 'L')) {
                printf("-1 "); // Cetak -1 jika J berdampingan dengan K atau L
            }
            printf("4 "); // Cetak 4 untuk J
        } else if (pesan[i] == 'K') {
            if (i > 0 && (pesan[i - 1] == 'J' || pesan[i - 1] == 'L')) {
                printf("-1 "); // Cetak -1 jika K berdampingan dengan J atau L
            }
            printf("4 4 "); // Cetak 4 4 untuk K
        } else if (pesan[i] == 'L') {
            if (i > 0 && (pesan[i - 1] == 'J' || pesan[i - 1] == 'K')) {
                printf("-1 "); // Cetak -1 jika L berdampingan dengan J atau K
            }
            printf("4 4 4 "); // Cetak 4 4 4 untuk L
        } else if (pesan[i] == 'M') {
            if (i > 0 && (pesan[i - 1] == 'N')) {
                printf("-1 "); // Cetak -1 jika M berdampingan dengan N
            }
            printf("5 "); // Cetak 5 untuk M
        } else if (pesan[i] == 'N') {
            if (i > 0 && (pesan[i - 1] == 'M')) {
                printf("-1 "); // Cetak -1 jika N berdampingan dengan M
            }
            printf("5 5 "); // Cetak 5 5 untuk N
        } else if (pesan[i] == 'O') {
            if (i > 0 && (pesan[i - 1] == 'N')) {
                printf("-1 "); // Cetak -1 jika O berdampingan dengan N
            }
            printf("5 5 5 "); // Cetak 5 5 5 untuk O
        } else if (pesan[i] == 'P') {
            if (i > 0 && (pesan[i - 1] == 'Q' || pesan[i - 1] == 'R')) {
                printf("-1 "); // Cetak -1 jika P berdampingan dengan Q atau R
            }
            printf("6 "); // Cetak 6 untuk P
        } else if (pesan[i] == 'Q') {
            if (i > 0 && (pesan[i - 1] == 'P' || pesan[i - 1] == 'R')) {
                printf("-1 "); // Cetak -1 jika Q berdampingan dengan P atau R
            }
            printf("6 6 "); // Cetak 6 6 untuk Q
        } else if (pesan[i] == 'R') {
            if (i > 0 && (pesan[i - 1] == 'P' || pesan[i - 1] == 'Q')) {
                printf("-1 "); // Cetak -1 jika R berdampingan dengan P atau Q
            }
            printf("6 6 6 "); // Cetak 6 6 6 untuk R
        } else if (pesan[i] == 'S') {
            if (i > 0 && (pesan[i - 1] == 'T')) {
                printf("-1 "); // Cetak -1 jika S berdampingan dengan T
            }
            printf("7 "); // Cetak 7 untuk S
        } else if (pesan[i] == 'T') {
            if (i > 0 && (pesan[i - 1] == 'S')) {
                printf("-1 "); // Cetak -1 jika T berdampingan dengan S
            }
            printf("7 7 "); // Cetak 7 7 untuk T
               } else if (pesan[i] == 'U') {
            if (i > 0 && (pesan[i - 1] == 'S' || pesan[i - 1] == 'T')) {
                printf("-1 "); // Cetak -1 jika U berdampingan dengan S atau T
            }
            printf("7 7 7 "); // Cetak 7 7 7 untuk U
        } else if (pesan[i] == 'V') {
            if (i > 0 && (pesan[i - 1] == 'W')) {
                printf("-1 "); // Cetak -1 jika V berdampingan dengan W
            }
            printf("8 "); // Cetak 8 untuk V
        } else if (pesan[i] == 'W') {
            if (i > 0 && (pesan[i - 1] == 'V')) {
                printf("-1 "); // Cetak -1 jika W berdampingan dengan V
            }
            printf("8 8 "); // Cetak 8 8 untuk W
        } else if (pesan[i] == 'X') {
            if (i > 0 && (pesan[i - 1] == 'V' || pesan[i - 1] == 'W')) {
                printf("-1 "); // Cetak -1 jika X berdampingan dengan V atau W
            }
            printf("8 8 8 "); // Cetak 8 8 8 untuk X
        } else if (pesan[i] == 'Y') {
            if (i > 0 && (pesan[i - 1] == 'Z')) {
                printf("-1 "); // Cetak -1 jika Y berdampingan dengan Z
            }
            printf("9 "); // Cetak 9 untuk Y
        } else if (pesan[i] == 'Z') {
            if (i > 0 && (pesan[i - 1] == 'Y')) {
                printf("-1 "); // Cetak -1 jika Z berdampingan dengan Y
            }
            printf("9 9 "); // Cetak 9 9 untuk Z
        }
    }
    printf("\n");
    return 0;
}