#include<stdio.h>

//array is passed first argument as a pointer.
int BinarySearch(int* arrpnt, int low_index, int high_index, int find_number);

int main() {

    int low_index=0, high_index, find_number, result, count=0;
    //high = number of elements
    scanf("%d", &high_index); // number of elements to be in array.
    int array[high_index];
    int* arrpnt;
    arrpnt = &array[0];

    for(count=0; count<high_index; count++) {
        scanf("%d", &array[count]);
    }

    while(arrpnt != NULL) {
        printf("%d", *arrpnt);
        arrpnt += 1;
    }

    scanf("%d", &find_number);// number to be find.

    result = BinarySearch(arrpnt, low_index, high_index, find_number);

    if(result == 1) {
        printf("False\n");
    }
    else {
        printf("True\n");
    }

    return 0;
}

int BinarySearch(int* arrpnt, int low_index, int high_index, int find_number) {
    int mid;
    int result;
    mid = (low_index+high_index)/2;

    if( *(arrpnt+mid) == find_number ){
        return 0;
    }

    else if( *(arrpnt+mid) > find_number ) {
        return BinarySearch( arrpnt, low_index, mid, find_number );
    }

    else if( *(arrpnt+mid) < find_number ) {
        return BinarySearch( arrpnt, mid, high_index, find_number );
    }

    else{
        return 1;
    }
}