//
//  Fahrenheit.c
//  Jaisel_Lab
//
//  Created by Singh, Jaisel on 9/19/19.
//  Copyright © 2019 labs. All rights reserved.
//

#include "Fahrenheit.h"
#include <stdio.h>
#include <math.h>
int main(void) {
    // insert code here...
    double Temp1, Temp2, Temp3, Temp4 ;
    printf("Enter the first Fahrenheit temperature\n") ;
    scanf("%lf", &Temp1) ;
    printf("Enter the second Fahrenheit temperature\n") ;
    scanf("%lf", &Temp2) ;
    printf("Enter the third Fahrenheit temperature\n") ;
    scanf("%lf", &Temp3) ;
    printf("Enter the fourth Fahrenheit temperature\n") ;
    scanf("%lf", &Temp4) ;
    
    double celsius1,F2Freeze1, celsius2,F2Freeze2, celsius3, F2Freeze3, celsius4,F2Freeze4 ;
    
    celsius1 = (5*(Temp1-32))/9 ;
    F2Freeze1 = Temp1 - 32 ;
    printf("Your first Fahrenheit Temperature is %lf.\n It equals %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point.\n Your Celsius equivalent is %lf away from the Celsius freezing point.\n", Temp1, celsius1, F2Freeze1, celsius1) ;
    
    celsius2 = (5*(Temp2-32))/9 ;
    F2Freeze2 = Temp2 - 32 ;
    printf("Your second Fahrenheit Temperature is %lf.\n It equals %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point.\n Your Celsius equivalent is %lf away from the Celsius freezing point.\n", Temp2, celsius2, F2Freeze2, celsius2) ;
    
    celsius3 = (5*(Temp3-32))/9 ;
    F2Freeze3 = Temp3 - 32 ;
    printf("Your third Fahrenheit Temperature is %lf.\n It equals %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point.\n Your Celsius equivalent is %lf away from the Celsius freezing point.\n", Temp1, celsius3, F2Freeze3, celsius3) ;
    
    celsius4 = (5*(Temp4-32))/9 ;
    F2Freeze4 = Temp4 - 32 ;
    printf("Your fourth Fahrenheit Temperature is %lf.\n It equals %lf in Celsius.\n Your Fahrenheit Temperature is %lf away from the Fahrenheit freezing point.\n Your Celsius equivalent is %lf away from the Celsius freezing point.\n", Temp4, celsius4, F2Freeze4, celsius4) ;
    
    return 0;
}
