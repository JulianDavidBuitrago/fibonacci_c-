// fibonacci.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}


public static void Main(String[] args)
{
    //Sneake_Case 

    Console.WriteLine("Ingrese un número");
    int Entrada = Convert.ToInt32(Console.ReadLine());

    int Fibonacci = Calcular_Fibonacci(Entrada);
    Console.WriteLine("El Fibonacci es " + Fibonacci + " y" + Primo(Fibonacci));

    Console.ReadKey();

}

public static string Primo(int calcular)
{

    int contador = 0;

    for (int i = 1; i <= calcular; i++)
    {
        if (calcular % i == 0)
        {
            contador++;
        }
    }

    if (contador == 2)
    {
        return " el número es primo";
    }
    else
    {
        return " el número no es primo.";
    }

}

public static int Calcular_Fibonacci(int calcular)
{
    int Primero = 0;
    int Segundo = 1;
    int resultado = 0;

    if (calcular >= 1)
    {
        for (int i = 0; i < calcular; i++)
        {
            resultado = Primero + Segundo;

            Primero = Segundo;
            Segundo = resultado;
        }
    }
    return resultado;
}