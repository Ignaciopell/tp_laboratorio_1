/*
 ============================================================================
 Name        : tp.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "funciones.h"

int main()
 {
	setbuf(stdout,NULL);

    float numeroA=0;
    float numeroB=0;
    int ingresoNumA=false;
    int ingresoNumB=false;
    int opciones=0;
    int calculos=false;

    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    int resultadoFactorialA;
    int resultadoFactorialB;

    while(opciones!=5)
    {
        printf("------Menu de opciones------");//Muestro las opciones que el usuario debe ingresar.
        printf("\nPara realizar una operacion,introduzca uno de los siguientes numeros:");
        printf("\n1.Ingresar el primer numero");
        printf("\n2.Ingresar el segundo numero");
        printf("\n3.Calcular todas las operaciones");
        printf("\n4.Mostrar resultados de las operaciones");
        printf("\n5.Salir");

        printf("\nIngrese la opcion que quiera realizar(1 al 5):");//Le pido al usuario que ingrese dichas opciones.
        scanf("%d",&opciones);
        fflush(stdin);

        switch(opciones)
            {
                case 1://Le pido al usuario el primer numero que tiene que ingresar.
                    printf("\nIngrese un valor para su primer numero:");
                    scanf("%f",&numeroA);
                    fflush(stdin);
                    ingresoNumA=true;
                    break;
                case 2://Le pido al usuario el segundo numero que tiene que ingresar.
                    printf("\nIngrese un valor para su segundo numero:");
                    scanf("%f",&numeroB);
                    fflush(stdin);
                    ingresoNumB=true;
                    break;

                case 3:

                if(ingresoNumA==false || ingresoNumB==false)
                {
                  printf("\nPor favor, ingrese un valor para A o B primero y reintente \n\n");
                    break;
                }else
                {
                    resultadoSuma=sumar(numeroA,numeroB);
                    resultadoResta=restar(numeroA,numeroB);
                    resultadoMultiplicacion=multiplicar(numeroA,numeroB);
                    resultadoDivision=dividir(numeroA,numeroB);
                    resultadoFactorialA=factorial(numeroA);
                    resultadoFactorialB=factorial(numeroB);

                    calculos=true;
                    printf("\n#####Se realizo los calculos para los numeros %f y %f adecuadamente.#####\n\n",numeroA,numeroB);
                    break;
                }


                case 4://Muestro los resultados de todas las operaciones mencionadas.
                    if(calculos==true)
                    {
                        printf("\n1.El resultado de la suma es:%f",resultadoSuma);

                        printf("\n2.El resultado de la resta es:%f",resultadoResta);

                        printf("\n4.El resultado de la multiplicacion es:%f",resultadoMultiplicacion);

                        if(numeroB==0)
                        {
                            printf("\n3.No es posible dividir por 0.");
                        }else
                        {
                            printf("\n3.El resultado de division es:%f",resultadoDivision);
                        }

                        if(numeroA<0 || numeroB<0)
                        {
                             printf("\n5.ERROR!no es posible realizar el factorial con un numero negativo.\n");
                        }
                        else
                        {
                            printf("\n5.El factorial de A es:%d y el factorial de B es:%d\n\n",resultadoFactorialA,resultadoFactorialB);
                        }

                    }
                    else
                    {
                        printf("\nERROR!,no se encontraron calculos realizados para calcular.\n\n");
                    }
                    break;
                case 5:
                	printf("\nGracias por usar mi calculadora!\n");
                    break;
                default://En caso de que el usuario ingrese mal un numero de las opciones.
                    printf("\nEl numero ingresado para las opciones es invalido,reintente nuevamente.\n\n");
                    break;

            }
    }
    return 0;
 }
