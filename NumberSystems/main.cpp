/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on September 26, 2019, 8:02 PM
 */

#include <stdio.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv){ 
    //create variables and array
    int num, numOG, base,remainder,digitPos=31, size=32;
    char symbol[36] = {'0','1','2','3','4','5','6','7','8','9',
                        'A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T',
                        'U','V','W','X','Y','Z'};
    char result[size];  //holds converted number from base 10 to user base choice 
    int digits[size];   //holds list of remainders
//    for(int i = 0; i <= digitPos; i++)
//        result[i] = '0';

    printf("Enter the base 10 number you would like to convert: ");
    scanf("%d",&num);
    numOG = num;
    
    printf("Enter the base you would like to convert %d to: ", num);
    scanf("%d",&base);
    
    while((base < 2) || (base > 36)){
        printf("Invalid, please enter a base between 2 and 36: ");
        scanf("%d", &base);
    }
    
    while(num > 0){
        remainder = num % base;
        num /= base;
        digits[digitPos] = remainder;
        result[digitPos] = symbol[remainder];
        printf("%c\n",result[digitPos]);
        printf("%d = %c\n",remainder,symbol[remainder]);
        printf("%s\n",result);
        digitPos--;
    }

    printf("%d base 10 is ", numOG);
    
    //print answer
    for(int i = 0; i < size; i++){
        //if(result[i] != '0')
            printf("%c",result[i]);
    }    
    printf(" base %d",base);
    return 0;
}

