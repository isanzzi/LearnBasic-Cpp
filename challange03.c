#include<stdio.h>

int main(){
    int baskom,count=1;
    scanf("%d", &baskom);
    int papan[baskom][baskom];

    for (int i=0;i<baskom;i++){
        for (int j=0;j<baskom;j++){
            papan[i][j]=0;
        }
    }

//for j ilangin ganti jadi while j dari baskom-- sampe indeks 0
    int j=baskom-1,i=0;
    while(j>=0){
            int temp_i = i, temp_j = j;
            while (temp_i < baskom && temp_j < baskom) {
            papan[temp_i][temp_j] = count;
            count++;
            temp_i++;
            temp_j++;
        }
            j--;
        }


    if (papan[1][0]==0){
            int j=0,i=1;
            while(i<baskom){
                int temp_i = i, temp_j = j;
                while (temp_i < baskom && temp_j < baskom) {
                papan[temp_i][temp_j] = count;
                count++;
                temp_i++;
                temp_j++;
            }
                i++;
            }
    }


    for (int x=0;x<baskom;x++){
        for (int y=0;y<baskom;y++){
            printf("%d ", papan[x][y]);
        }
        printf("\n");
    }
    return 0;
}