#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

using namespace std;


int comparar_cadenas(char *cad1 , char *cad2)
{
    char *p1 = cad1;
    char *p2 = cad2;
    while(*p1 && *p2){

    if(*p1 > *p2){
        cout<<endl;
        cout<<"CADENA MAYOR: "<<cad1;
        return 0;
    }
    if(*p2 > *p1){
        cout<<endl;
        cout<<"CADENA MAYOR: "<<cad2;
        return 0;
    }

    p1 ++;
    p2 ++;

}
if(*p1 == NULL)
{
    cout<<"CADENA MAYOR: "<< cad2<<endl;
}
else{
    cout<<"CADENA MENOR: "<< cad1<<endl;
}

}


int main()
{
    string a;
    string b;
    cout<<"Ingrese primera cadena: ";cin>>a;
    cout<<"Ingrese segunda cadena: ";cin>>b;
    comparar_cadenas((char*)a.c_str(),(char*)b.c_str());




    return 0;
}
