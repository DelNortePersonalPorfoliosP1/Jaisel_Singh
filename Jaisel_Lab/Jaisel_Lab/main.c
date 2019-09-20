//
//  main.c
//  Jaisel_Lab
//
//  Created by Singh, Jaisel on 9/17/19.
//  Copyright © 2019 labs. All rights reserved.
//

#include <stdio.h>
#include "operators.h"
#include "Pythagoran.h"
#include "ractangle.h"
#include "Fahrenheit.h"
#include "datatypes.h"
int main(void) {
    
    int lab;
    int a = 1;
    
    while (a<6){
        
        printf("choose lab by typing in a number 1-5");
        scanf("%i",&lab);
        
        if (lab == 1){
            Pythagoran();
        }
        if (lab == 2){
            ractangle();
        }
        if (lab == 3){
            operators();
        }
        if (lab == 4){
            Fahrenheit();
        }
        if (lab == 5){
            datatypes();
        }
        if (lab == 6){
            return 18;
        }
 }
 }

