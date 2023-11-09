/*
MATHIMA : DOMHMENOS PROGRAMMATISMOS
TMHMA : Τ11
ERGASTHRIAKH ASKHSH : 3
HMEROMHNIA : 9/11/2023
ONOMA : LYTRIDIS ALEXANDROS
ARITHMOS MHTRWOY : 2023195
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  float salary, unicef, sos, final_salary;
  
  printf("Enter employee's salary: ");
  scanf("%f", &salary);
  
  if (salary <= 800) {
    unicef = salary * 0.04;
    sos = salary * 0.05;
  } else if (salary <= 1200) {
    unicef = salary * 0.06;
    sos = salary * 0.075;
  } else if (salary <= 2000) {
    unicef = salary * 0.08;
    sos = salary * 0.095;
  } else {
    unicef = salary * 0.11;
    sos = salary * 0.12;
  }
  
  final_salary = salary - unicef - sos;
  
  printf("UNICEF contribution: %.2f\n", unicef);
  printf("SOS contribution: %.2f\n", sos);
  printf("Final salary: %.2f\n", final_salary);
  
  return 0;
}
