#include<stdio.h>

int ba_sumall(int arr){

    int n1 = 2 ;
    int sum = 0 ;

    // Adding elements
    for(int i = 0 ; i < n1 ; i++){
        sum += arr[i] ;
    }
  return sum ;
}

int main(){

    printf("\t\t\t-------- LETS HAVE FUN WITH ARRAYS -------------\n\n");
    printf("We provide various operations on Arrays SO LETS GET STARTERD:\nEnter the size of your Array: ");
    int n ;
    scanf("%d" , &n) ;
    int arr[n] ;

    // To enter the elements in array
    for(int i = 0 ; i< n ;i++){
        printf("Enter the %d element of your array: " , i+1);
        scanf("%d" , &arr[i]) ;
    }

    printf("\t\tHere is your array: ");
    for(int i = 0 ; i< n ;i++){
        printf("%d " , arr[i]) ;
    }

    // Displaying the options
    int option ;
    printf("\nChoose operation to perform from the following list:\n\n") ;

    printf("Basic Arithmetic (Type 1)\n\n") ;
    printf("Sort the Array (Type 2)\n\n") ;
    printf("Edit the Array (Type 3)\n\n") ;
    printf("To Find (Type 4)\n\n") ;
    printf("Special numbers in Array (Type 5)\n\n") ;

    printf(" Enter your option : ");
    scanf("%d" ,&option) ;
    printf("\n");

    switch (option){
        int option_BA ;
        //Basic Arithmatic
    case 1 :
        printf(" Basic Arithmatic: ");
        printf("\n  Sum all elements (Type 1) \n");
        printf("  Sum by indexing (Type 2) \n");
        printf("  Substraction by indexing (Type 3) \n");
        printf("  Multiply all elements (Type 4) \n");
        printf("  Multiply by indexing (Type 5) \n");
        printf("  Sum by indexing (Type 6) \n");

        printf("Enter your option : ");
        scanf("%d" ,&option_BA) ;


        switch (option_BA) {
           // sum of all
        case 1 :
            ba_sumall(int arr);
            printf("%d" ,ba_sumall(arr) ) ;
        }

    }





return 0 ;
}
