/*2. 4.38 (World Population Growth) World population has grown considerably over 
the centuries. Continued growth could eventually challenge the limits of 
breathable air, drinkable water, arable cropland and other precious resources. 
There is evidence that growth has been slowing in recent years and that world 
population could peak some time this century, then start to decline.
For this exercise, research world population growth issues online. Be sure to 
investigate various viewpoints. Get estimates for the current world population and 
its growth rate (the percentage by which it is likely to increase this year). Write
a program that calculates world population growth each year for the next 75 years, 
using the simplifying assumption that the current growth rate will stay constant.
(c++ how to program) */

#include<iostream>
using namespace std ;

int main(){
    int counter(1) , year(75) , increase(0) , total(0) , worldPopulation(100000000) ;
    double rate(1.05) ;
    increase = (worldPopulation/100) *  rate ;
    total = worldPopulation + increase ;

    cout << "\n\tYear\tworldPopulation\tincreasing\t\n" << endl ;
    cout << "\t"<<counter<<"\t"<<total<<"\t"<<increase<<"\t" << endl ;


    while(counter<=year){

        double nowWorldPopulation(0);
        
        increase = (total/100) *  rate ;
        total = total + increase ;

        if(total<worldPopulation*2){
            cout << "\t"<<counter<<"\t"<<total<<"\t"<<increase<<"\t" << endl ;

        }
        if(total>worldPopulation*2){
            if(total<(worldPopulation*2)+increase){

                cout <<"\t"<<counter<<"\t"<<total<<"\t"<<increase
                <<"\t(This year worldPopulation will double)\t\n" ;

            }
            else{

            cout << "\t"<<counter<<"\t"<<total<<"\t"<<increase<<"\t" << endl ;

            }
        }


        counter++ ;
    }

}