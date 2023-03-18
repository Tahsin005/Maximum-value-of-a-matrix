#include<stdio.h>
#include<limits.h>
/*Find out the maximum value in a 2D array*/
int main(){
    int r,c;
    int i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int arr[r][c];
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int max=INT_MIN;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max<arr[i][j]){
            max=arr[i][j];
            }
        }
    }
    printf("The minimum value in this 2D array is: %d\n", max);
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(max==arr[i][j])
            printf("The maximum value index is (%d,%d)", i,j);
            break;
        }
    }
    return 0;
}