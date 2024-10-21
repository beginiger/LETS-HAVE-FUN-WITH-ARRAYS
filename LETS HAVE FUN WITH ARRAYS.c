#include<stdio.h>

// Function to sum all elements in the array
int ba_sumall(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to sum two elements based on their indices
int ba_sumindex(int arr[], int n, int i1, int i2) {
    // Check if the indices are within the valid range
    if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < n) {
        return arr[i1] + arr[i2];
    }
}

int ba_subsIndex(int arr[] , int n , int i1 , int i2){
    if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < n) {
        return arr[i1] - arr[i2];
    }

}

int ba_multall(int arr[] , int n ){
    int mult = 1 ;
    for(int i = 0 ; i< n ; i++){
        mult *= arr[i] ;
    }
return mult ;
}

int ba_multIndex(int arr[] , int n , int i1 , int i2){
    if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < n) {
        return arr[i1] * arr[i2];
    }
}

int ba_divIndex(int arr[] , int n , int i1 , int i2){
    if (i1 >= 0 && i1 < n && i2 >= 0 && i2 < n) {
        return arr[i1]/arr[i2];
    }
}

//          SORTING ALGO

int sa_increasing(int arr[] , int n ){

    for(int i = 0 ; i< n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
}

int sa_decreasing(int arr[] , int n){
    for(int i = 0 ; i< n ; i++){
        for(int j = i+1 ; j< n ; j++){
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp ;
            }
        }
    }
}

int sa_leftshift(int arr[] , int n){
    int temp = arr[0] ;
    for(int i = 0 ; i< n ; i++){
        arr[i] = arr[i+1] ;
    }
    arr[n-1] = temp ;

}

int sa_rightshift(int arr[] , int n){
    int temp = arr[n-1] ;
    for(int i = n-1 ; i>=0 ; i--){
        arr[i] = arr[i-1] ;
    }
    arr[0] = temp ;
}

int sa_reverse(int arr[] , int n){
    int temp ;
    for(int i = 0 ; i< n/2 ; i++){
        temp = arr[i] ;
        arr[i] = arr[n-1-i] ;
        arr[n-1-i] = temp ;
    }
}

int main() {

    printf("\t\t\t-------- LET'S HAVE FUN WITH ARRAYS -------------\n\n");
    printf("We provide various operations on Arrays. SO LET'S GET STARTED:\n");

    printf("Enter the size of your Array: ");
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the elements in the array
    for(int i = 0; i < n; i++) {
        printf("Enter the %d element of your array: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the entered array
    printf("\n\t\tHere is your array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Displaying the main options
    int option;
    printf("\nChoose operation to perform from the following list:\n\n");
    printf("Basic Arithmetic (Type 1)\n");
    printf("Sort the Array (Type 2)\n");
    printf("Edit the Array (Type 3)\n");
    printf("To Find (Type 4)\n");
    printf("Special numbers in Array (Type 5)\n");
    printf("Exit (Type 0)\n");

    printf("Enter your option: ");
    scanf("%d", &option);

    // Continue the menu until the user exits
    while(option != 0) {
        switch(option) {
            case 1: { // Basic Arithmetic
                int option_BA;
                  printf("\n Basic Arithmatic: ");
                  printf("\n  Sum all elements (Type 1) \n");
                  printf("  Sum by indexing (Type 2) \n");
                  printf("  Substraction by indexing (Type 3) \n");
                  printf("  Multiply all elements (Type 4) \n");
                  printf("  Multiply by indexing (Type 5) \n");
                  printf("  Division by indexing (Type 6) \n");
                  printf("  Exit to main menu (Type 0)\n");

                printf("Enter your option: ");
                scanf("%d", &option_BA);
                printf("\n");

                // Basic Arithmetic operations switch
                switch(option_BA) {
                    case 0:
                        break;  // Exit to the main menu
                    case 1:
                        printf("Sum of all elements is: %d\n", ba_sumall(arr, n));
                        break;
                    case 2: {
                        int i1, i2;
                        printf("Enter the two indices (separated by space): ");
                        scanf("%d %d", &i1, &i2);
                        int sum = ba_sumindex(arr, n, i1, i2);
                        if (sum != -1) {
                            printf("Sum of elements at index %d and %d is: %d\n", i1, i2, sum);
                        } else {
                            printf("Error: Indices out of bounds.\n");
                        }
                        break;
                    }
                    case 3: {
                        int i1, i2;
                        printf("Enter the two indices (separated by space): ");
                        scanf("%d %d", &i1, &i2);
                        int subs = ba_subsIndex(arr , n , i1,i2) ;
                         printf("Substraction of elements at index %d and %d is: %d\n", i1, i2, subs);
                        break ;
                    }

                    case 4: {
                        int mult = ba_multall(arr , n) ;
                         printf("\nMultiplication of all element is: %d\n\n", mult);
                         break ;
                    }
                    case 5: {
                        int i1, i2;
                        printf("Enter the two indices (separated by space): ");
                        scanf("%d %d", &i1, &i2);
                        int multindex = ba_multIndex(arr , n , i1,i2) ;
                         printf("\nMultiplication of elements at index %d and %d is: %d\n", i1, i2, multindex);
                        break ;
                    }
                    case 6: {
                        int i1, i2;
                        printf("Enter the two indices (separated by space): ");
                        scanf("%d %d", &i1, &i2);
                        int divindex = ba_divIndex(arr , n , i1,i2) ;
                        printf("\nDivision of elements at index %d and %d is: %d\n", i1, i2, divindex);
                        break ;
                    }

                    //end of basic arithemic
                    default:
                        printf("Invalid option. Please try again.\n");
                }
                break;
            }

            case 2: { // Sorting Arrays
                int option_SA;
                  printf("\n Sorting array: ");
                  printf("\n  Incresing order(Type 1) \n");
                  printf("  Decreasing order (Type 2) \n");
                  printf("  Left Shift (Type 3) \n");
                  printf("  Right Shift (Type 4) \n");
                  printf("  Reverse an array (Type 5) \n");
                  printf("  Division by indexing (Type 6) \n");
                  printf("  Exit to main menu (Type 0)\n");

                printf("Enter your option: ");
                scanf("%d", &option_SA);
                printf("\n");

                // Sorting Array operations
                switch(option_SA) {
                    case 0:
                        break;  // Exit to the main menu
                    case 1:
                        sa_increasing(arr , n ) ;
                        printf("Here is your Array in Increasing order: \n") ;
                        for(int i = 0 ; i < n ; i++ ){
                            printf("%d " , arr[i]) ;
                        }
                        break;

                    case 2: {
                        sa_decreasing(arr , n) ;
                        printf("Here is your Array in Decreasing order: \n") ;
                        for(int i = 0 ; i < n ; i++ ){
                            printf("%d " , arr[i]) ;
                        }
                        break;
                    }

                    case 3: {
                        sa_leftshift(arr,n) ;
                        printf("Here is your Array after Leftshifting: ") ;
                        for(int i = 0 ; i < n ; i++ ){
                            printf("%d " , arr[i]) ;
                        }
                        break ;
                    }

                    case 4: {
                        sa_rightshift(arr,n) ;
                        printf("Here is your Array after Rightshifting: ") ;
                        for(int i = 0 ; i < n ; i++ ){
                            printf("%d " , arr[i]) ;
                        }
                         break ;
                    }
                    case 5: {
                        sa_reverse(arr, n) ;
                        for(int i = 0 ; i < n ; i++ ){
                            printf("%d " , arr[i]) ;
                        }
                        break ;
                    }
                    case 6: {
                        int i1, i2;
                        printf("Enter the two indices (separated by space): ");
                        scanf("%d %d", &i1, &i2);
                        int divindex = divIndex(arr , n , i1,i2) ;
                        printf("\nDivision of elements at index %d and %d is: %d\n", i1, i2, divindex);
                        break ;
                    }

                    //end of basic arithemic
                    default:
                        printf("Invalid option. Please try again.\n");
                }
                break;
            }


            case 3:
                printf("Editing functionality ");
                break;

            case 4:
                printf("Finding functionality ");
                break;

            case 5:
                printf("Special numbers functionality ");
                break;

            default:
                printf("Invalid option. Please try again.\n");
        }


        printf("\n\nChoose operation to perform from the following list:\n");
        printf("Basic Arithmetic (Type 1)\n");
        printf("Sort the Array (Type 2)\n");
        printf("Edit the Array (Type 3)\n");
        printf("To Find (Type 4)\n");
        printf("Special numbers in Array (Type 5)\n");
        printf("Exit (Type 0)\n");

        printf("Enter your option: ");
        scanf("%d", &option);
        printf("\n") ;
    }

    printf("Thank you for using the program!\n");
    return 0;
}
