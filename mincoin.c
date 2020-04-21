
#include<stdio.h>
  
// m is size of coins array (number of different coins) 
int minCoins(int coins[], int m, int V) 
{ int INT_MAX;
    // table[i] will be storing the minimum number of coins 
    // required for i value.  So table[V] will have result 
    int table[V+1]; 
  
    // Base case (If given value V is 0) 
    table[0] = 0; 
  
    // Initialize all table values as Infinite 
    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 
  
    // Compute minimum coins required for all 
    // values from 1 to V 
    for (int i=1; i<=V; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j<m; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
} 
  

int main() 
{ int m,V,INT_MAX,coins[10];
   
    printf("ENTER THE NUMBER OF COINS\n");
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {  printf("ENTER AN ELEMENT\n");
        scanf("%d",&coins[i]);
    }
    printf("ENTER THE VALUE OF V\n");
    scanf("%d",&V);
    printf("Minimum coins required is %d\n",minCoins(coins, m, V)); 
    return 0; 
} 
