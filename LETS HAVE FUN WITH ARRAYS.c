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


// To Find
int tfa_larno(int arr[], int n )
{
    int max  = arr[0];
    for(int i = 0 ; i < n ; i++ )
    {
        if(arr[i] > max)
        max = arr[i];
    }
    return max ;
}

int tfa_smallnum (int arr[], int n )
{
    int min  = arr[0];
    for(int i = 0 ; i < n ; i++ )
    {
        if(arr[i] < min)
        min = arr[i];
    }
  return (min) ;
}

float tfa_average(int arr[], int n )
{
    float sum = 0;
    for(int i = 0 ; i < n ; i++ )
    {
        sum = sum + arr[i] ;
    }
    float avg = sum / n ;
  return (avg) ;
}

int tfa_everyfreq(int arr[] , int n){
  int c = 0 ;
  int v1[n];
  for(int i = 0 ; i < n ; i++ )
  {
    v1[i] = 0 ;
  }
  int store_num[n];
  int store_freq[n];
  for(int i =0 ; i<n ; i++ )
  { int count = 0;
    if(v1[i] != 1)
    {
      store_num[c] = arr[i] ;

      for(int j=0; j<n ;j++)
      {
      if(arr[i] == arr[j])
      {
      count++ ;
      v1[j] = 1 ;
      }
      }
      store_freq[c] = count ;
      c++ ;
    }
  }
  for(int i = 0 ; i < c ; i++  )
  {
    printf("Frequency of %d is %d . \n", store_num[i] , store_freq[i]);
  }

}

int tfa_larfreq(int arr[] , int n){
  int c = 0 ;
  int v1[n];
  for(int i = 0 ; i < n ; i++ )
  {
    v1[i] = 0 ;
  }
  int store_num[n];
  int store_freq[n];
  for(int i =0 ; i<n ; i++ )
  { int count = 0;
    if(v1[i] != 1)
    {
      store_num[c] = arr[i] ;

      for(int j=0; j<n ;j++)
      {
      if(arr[i] == arr[j])
      {
      count++ ;
      v1[j] = 1 ;
      }
      }
      store_freq[c] = count ;
      c++ ;
    }
  }
  int max = 0 ;
  int num ;
  for(int i = 0 ; i < c ; i++  )
  {
    if(max < store_freq[i])
    {
      max = store_freq[i];
      num = store_num[i];
    }
  }
  printf("The number with highest frequency is %d and its frequency is %d ", num , max);

}

int tfa_lowestfreq(int arr[] , int n){

  int c = 0 ;
  int v1[n];
  for(int i = 0 ; i < n ; i++ )
  {
    v1[i] = 0 ;
  }
  int store_num[n];
  int store_freq[n];
  for(int i =0 ; i<n ; i++ )
  { int count = 0;
    if(v1[i] != 1)
    {
      store_num[c] = arr[i] ;

      for(int j=0; j<n ;j++)
      {
      if(arr[i] == arr[j])
      {
      count++ ;
      v1[j] = 1 ;
      }
      }
      store_freq[c] = count ;
      c++ ;
    }
  }
  int min = store_freq[0] ;
  int num ;
  for(int i = 0 ; i < c ; i++  )
  {
    if(min > store_freq[i])
    {
      min = store_freq[i];
      num = store_num[i];
    }
  }
  printf("The numebr with lowest frequency is %d and its frequceny is %d ", num , min);

}

// Special Numbers
int sn_special_num(int arr[], int n )
{
    int c = 0 ;
    int store[n];
    for(int i = 0 ; i <n ; i++ )
    { int a = arr[i] ;
      int sum = 0;
        while (a > 0 )
        {  int fact = 1;
             int rem = a%10 ;
            for(int j = 1 ; j <= rem ; j++ )
                fact = fact*j ;
            sum = sum + fact ;
            if (arr[i] == sum)
            {
                store[c] = arr[i];
                c++ ;
            }
            a = a/10 ;
        }
    }
    printf("The special numbers among the array are : ");
    for(int k = 0 ; k < c ; k++)
    {
        printf("%d ", store[k]);
    }
}


int sn_armstrong(int arr[], int n )
{
    int c = 0 ;
    int store[n];
    for(int i = 0 ; i <n ; i++ )
    { int a = arr[i] ;
      int sum = 0;
        while (a > 0 )
        {  int fact = 1;
             int rem = a%10 ;
             sum = sum + pow(rem,3);
            if (arr[i] == sum)
            {
                store[c] = arr[i];
                c++ ;
            }
            a = a/10 ;
        }
    }
    printf("The armstrong among the array are : ");
    for(int k = 0 ; k < c ; k++)
    {
        printf("%d ", store[k]);
    }
}

int sn_pallindrome(int arr[], int n )
{
    int c = 0 ;
    int store[n];
    for(int i = 0 ; i <n ; i++ )
    { int a = arr[i] ;
      int sum = 0;
        while (a > 0 )
        {  int fact = 1;
             int rem = a%10 ;
             sum = (sum*10) + rem;
            if (arr[i] == sum)
            {
                store[c] = arr[i];
                c++ ;
            }
            a = a/10 ;
        }
    }
    printf("The pallindrome among the array are : ");
    for(int k = 0 ; k < c ; k++)
    {
        printf("%d ", store[k]);
    }
}


int sn_Niven_num(int arr[], int n )
{
    int c = 0 ;
    int store[n];
    for(int i = 0 ; i <n ; i++ )
    { int a = arr[i] ;
      int sum = 0;
        while (a > 0 )
        {  int fact = 1;
             int rem = a%10 ;
             sum = sum + rem;
             a = a/10 ;
        }
        if (arr[i] % sum == 0 )
            {
                store[c] = arr[i];
                c++ ;
            }
    }
    printf("The Niven among the array are : ");
    for(int k = 0 ; k < c ; k++)
    {
        printf("%d ", store[k]);
    }
}

int sn_smithno(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int digitsum = 0;
        int a = arr[i];
        while (a > 0) {
            digitsum += a % 10;
            a /= 10;
        }

        int primeSum = 0;
        int temp = arr[i];
        while (temp % 2 == 0) {
            primeSum += 2;
            temp /= 2;
        }

        for (int j = 3; j * j <= temp; j += 2) {
            while (temp % j == 0) {
                primeSum += j;
                temp /= j;
            }
        }

        if (temp > 2) {
            primeSum += temp;
        }

        if (digitsum == primeSum) {
            printf("%d is a Smith number\n", arr[i]);
        }
    }
    return 0;
}

int sn_sophie_num(int arr[] , int n )
{
    int arr2[n];
    int c = 0 ;
    for (int i = 0 ; i< n ; i++ )
    {
        int a = 2*arr[i]+1;
        int count = 0 ;
        for(int j = 1 ; j <= a ; j++ )
        { if(a%j==0)
          count++;
        }
        if(count == 2)
        {
            arr2[c] = arr[i];
            c++ ;
        }
    }
    if(c == 0)
        printf("No Sophie German prime number is present in the entered array  ");
    else
       {
           printf("The Sophie German prime number in the array are ");
           for(int i = 0 ; i < c ; i++ )
            printf("%d ", arr2[i]);

       }

}

// Edit array

void ea_insert(int arr[] , int n , int index, int nu){
    if (index < 0 || index > n) {
        printf("Invalid index\n");
        return;
    }

    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = nu;
    (n)++;

    printf("\nYour array is: ");
    for(int i = 0 ; i< n ; i++){
    printf("%d " , arr[i]) ;
    }
}


void ea_delete(int arr[], int n, int index) {
    if (index < 0 || index >= n) {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (n)--;

    printf("\nYour array is: ");
    for(int i = 0 ; i< n ; i++){
    printf("%d " , arr[i]) ;
    }
}

void ea_swap(int arr[], int n, int index1, int index2) {
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;

    printf("\nArray after swapping elements at index %d and %d:", index1, index2);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void ea_update(int arr[], int n, int old_val, int new_val) {
    int updated = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == old_val) {
            arr[i] = new_val;
            updated = 1;
        }
    }

    if (updated) {
        printf("Array after updating elements: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    } else {
        printf("Value %d not found in the array.\n", old_val);
    }
}

void ea_updateindex(int arr[], int n, int index, int new_val) {
    if (index < 0 || index >= n) {
        printf("\nInvalid index. Please enter an index between 0 and %d.\n", n - 1);
        return;
    }

    arr[index] = new_val;

    printf("\n\nArray after updating element at index %d:", index);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void ea_append(int *arr , int n , int append){

    arr[n] = append ;
    n++ ;

    printf("\n\nArray after Appending: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
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
    printf("To Find (Type 3)\n");
    printf("Edit Array (Type 4)\n");
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
            }//

            case 2: { // Sorting Arrays
                int option_SA;
                  printf("\n Sorting array: ");
                  printf("\n  Incresing order(Type 1) \n");
                  printf("  Decreasing order (Type 2) \n");
                  printf("  Left Shift (Type 3) \n");
                  printf("  Right Shift (Type 4) \n");
                  printf("  Reverse an array (Type 5) \n");
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

                    //end of basic arithemic
                    default:
                        printf("Invalid option. Please try again.\n");
                }
                break;
            }

            case 3:{ // To Find
                int option_TFA;
                  printf("\n To Find: ");
                  printf("\n  Largest no (Type 1) \n");
                  printf("  Smallest no (Type 2) \n");
                  printf("  Average of array (Type 3) \n");
                  printf("  Frequency of each element (Type 4) \n");
                  printf("  Element with Highest Frequency (Type 5) \n");
                  printf("  Element with Lowest Frequency (Type 6) \n");
                  printf("  Exit to main menu (Type 0)\n");

                printf("Enter your option: ");
                scanf("%d", &option_TFA);
                printf("\n");

                switch(option_TFA) {
                    case 0:
                        break;  // Exit to the main menu
                    case 1:{
                        printf("Largest no in array is: %d" , tfa_larno(arr,n));
                        break;
                    }

                    case 2: {
                        printf("Smallest no in array is: %d" , tfa_smallnum(arr,n));
                        break;
                    }

                    case 3: {
                        printf("Average of array is: %d" , tfa_average(arr,n));
                        break ;
                    }

                    case 4: {
                        tfa_everyfreq(arr,n) ;
                        break ;
                    }
                    case 5: {
                        tfa_larfreq(arr,n) ;
                        break ;
                    }

                    case 6: {
                        tfa_lowestfreq(arr,n) ;
                    }

                    default:
                        printf("Invalid option. Please try again.\n");
                }
                break;
            }

            case 4:{ // Edit Array
                int option_EA;
                  printf("\n  Edit Your Array: ");
                  printf("\n  Insert a Number (Type 1) \n");
                  printf("  Delete Number (Type 2) \n");
                  printf("  Swap Elements (Type 3) \n");
                  printf("  Update No. (Type 4) \n");
                  printf("  Append a No. (Type 5) \n");
                  printf("  Exit to main menu (Type 0)\n");

                printf("Enter your option: ");
                scanf("%d", &option_EA);
                printf("\n");

                switch(option_EA) {
                    case 0:
                        break;
                    case 1:{
                        int index ;
                        int nu ;
                        printf("Enter the index:");
                        scanf("%d" , &index) ;
                        printf("Enter the number to be inserted: ");
                        scanf("%d",  &nu) ;
                        ea_insert(arr,n,index,nu) ;

                        break;
                    }

                    case 2: {
                       int index ;
                        printf("Enter the index to delete:");
                        scanf("%d" , &index) ;
                        ea_delete(arr,n,index) ;

                        break;
                    }

                    case 3: {

                        int index1, index2;

                        printf("Enter the first index to swap: ");
                        scanf("%d", &index1);
                        printf("Enter the second index to swap: ");
                        scanf("%d", &index2);

                        if (index1 >= 0 && index1 < n && index2 >= 0 && index2 < n) {
                            ea_swap(arr, n, index1, index2);
                        }
                        else {
                            printf("Invalid indices. Please enter indices between 0 and %d.\n", n - 1);
                        }
                        break ;
                    }

                    case 4: {
                        printf("Update by Value (Type 1)\n");
                        printf("Update by Indexing (Type 2)\n\n");
                        int upchoie ;
                        printf("Enter your choice: ") ;
                        scanf("%d" , &upchoie) ;

                         switch(upchoie){
                            case 1: {
                                 int old_val, new_val;
                                printf("Enter the value to update: ");
                                scanf("%d", &old_val);
                                printf("Enter the new value: ");
                                scanf("%d", &new_val);

                                ea_update(arr, n, old_val, new_val);
                                break ;

                            }
                            case 2: {
                                  int index, new_val;
                                  printf("Enter the index to update: ");
                                  scanf("%d", &index);
                                  printf("Enter the new value: ");
                                  scanf("%d", &new_val);

                                  ea_updateindex(arr, n, index, new_val);
                                }

                        }

                        break ;
                    }
                    case 5: {
                        int apendno ;
                        printf("Enter the no to Append: ") ;
                        scanf("%d" , &apendno) ;

                        ea_append(arr,n,apendno) ;
                        break ;
                    }

                    case 6: {
                        tfa_lowestfreq(arr,n) ;
                    }

                    default:
                        printf("Invalid option. Please try again.\n");
                }
                break;
            }

            case 5:{ // Special numbers
                int option_SN;
                  printf("\n Special Numbers: ");
                  printf("\n  Special no (Type 1) \n");
                  printf("  Armstrong no. (Type 2) \n");
                  printf("  Pallindrome (Type 3) \n");
                  printf("  Niven no. (Type 4) \n");
                  printf("  Smith no. (Type 5) \n");
                  printf("   (Type 6) \n");
                  printf("  Exit to main menu (Type 0)\n");

                printf("Enter your option: ");
                scanf("%d", &option_SN);
                printf("\n");

                switch(option_SN) { //Special no
                    case 0:
                        break;  // Exit to the main menu
                    case 1:
                        sn_special_num(arr, n) ;
                        break;
                    case 2: {
                        sn_armstrong(arr, n) ;
                        break;
                    }
                    case 3: {
                        sn_pallindrome(arr , n) ;
                        break ;
                    }

                    case 4: {
                        sn_Niven_num(arr , n );
                        break ;
                    }
                    case 5: {
                        sn_smithno(arr , n );
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
            default:
                printf("Invalid option. Please try again.\n");
        }


        printf("\n\nChoose operation to perform from the following list:\n");
        printf("Basic Arithmetic (Type 1)\n");
        printf("Sort the Array (Type 2)\n");
        printf("To Find (Type 3)\n");
        printf("Edit Array (Type 4)\n");
        printf("Special numbers in Array (Type 5)\n");
        printf("Exit (Type 0)\n");

        printf("Enter your option: ");
        scanf("%d", &option);
        printf("\n") ;
    }

    printf("Thank you for using the program!\n");
    return 0;
}
