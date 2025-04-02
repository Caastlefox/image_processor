// image_processor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
#include "main_menu.h"
int main()
{
    char comm;
    manual();
    bool exit_flag = false;
    while (true){
        std::cin >> comm;
        switch (comm)
        {
        case('blur'):
            std::cout << "uninplemented(yet)";
            break;
        case('edge'):
            std::cout << "uninplemented(yet)";
            break;
        case('quit'):
            exit_flag = true;
            break;
        case('q'):
            exit_flag = true;
            break;
        case('help'):
            manual();
            break;
        case('load'):
            std::cout << "uninplemented(yet)";
            break;
        case('shar'):
            std::cout << "uninplemented(yet)";
            break;
        case('shrk'):
            std::cout << "uninplemented(yet)";
            break;
        default:
            std::cout << "invalid command, please use help command to show list of commands" << std::endl;
            break;
        }
        if (exit_flag) { break; }
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
