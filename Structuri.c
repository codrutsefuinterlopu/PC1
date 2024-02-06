#include "stdio.h"
#include <string.h>
#include <math.h>
// Definirea structurii
struct Student {
    double nota1,nota2,medie;
    char nume[50];
};

int main() {
    // Inițializarea unei variabile de tipul struct Student
    struct Student student1[5];
    student1[0].nota1 = 9.5;
    student1[0].nota2 = 7.0;
    student1[0].medie = (student1[0].nota1 + student1[0].nota2)/2;
    strcpy(student1[0].nume, "Ion Popescu0");
    
    
    student1[1].nota1 = 8.5;
    student1[1].nota2 = 3.0;
    student1[1].medie = (student1[1].nota1 + student1[1].nota2)/2;
    strcpy(student1[1].nume, "Ion Popescu1");
    
    
    student1[2].nota1 = 4.5;
    student1[2].nota2 = 9.0;
    student1[2].medie = (student1[2].nota1 + student1[2].nota2)/2;
    strcpy(student1[2].nume, "Ion Popescu2");
    
    
    
    student1[3].nota1 = 5.5;
    student1[3].nota2 = 2.0;
    student1[3].medie = (student1[3].nota1 + student1[3].nota2)/2;
    strcpy(student1[3].nume, "Ion Popescu3");
    
    
    
    student1[4].nota1 = 6.5;
    student1[4].nota2 = 4.0;
    student1[4].medie = (student1[4].nota1 + student1[4].nota2)/2;
    strcpy(student1[4].nume, "Ion Popescu4");
    for(int i=0;i<5;i++)
        if(student1[i].medie>6)
        printf("Nume: %s\n", student1[i].nume);
        
    struct Student max = student1[0];
    struct Student min = student1[0];
    
    for (int i=0;i<5;i++){
        
        if(student1[i].nota1>max.nota1)
            max = student1[i];
        
        if(student1[i].nota2<min.nota2)
            min = student1[i];
    }
    
    printf("Nume: %s Medie: %.2f\n", max.nume, max.medie);
    printf("Nume: %s Medie: %.2f\n", min.nume, min.medie);
    


    return 0;
}
