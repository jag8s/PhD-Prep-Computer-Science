/*
 * Personal Introduction Program
 * Created by: Alan Gates
 * Date: 01/27/2026
 * 
 * Description: This program displays personal information 
 * about myself in a formatted way on the console.
 * 
 * My Learning Goals:
 * How to add comment and documentation
 * Displaying basic information
 * Formatting output text
 * 
 * [Add your learning goals here]

 */
//Include necessary headfer for input/output
#include <iostream>

//Main function
int main () {
    //My Code
    // Display Header
    std::cout << "==============================" << std::endl;
    std::cout << "====PERSONAL INTRODUCTION=====" << std::endl;
    std::cout << "==============================" << std::endl;

    // Display Basic Infor
    std::cout << "Name: Alan Gates" << std::endl;
    std::cout << "Role: Cybersecurity Researcher" << std::endl;
    // Educational background section
    std::cout << "\nEDUCATION" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Degree: MS Cybersecurity, MS Business Informatics" << std::endl;
    std::cout << "School: Northern Kentucky University" << std::endl;
    std::cout << "Year: 2025" << std::endl;

    // Career goals section
    std::cout << "\nCAREER GOALS" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Short-term: Earn a PhD" << std::endl;
    std::cout << "Long-term: Publish a textbook." << std::endl;

    // Why taking this course
    std::cout << "\nWHY I'M TAKING THIS COURSE" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "I am taking this course to backfill computer science subject matter." << std::endl;

    // Why taking this course
    std::cout << "\nTOPICS I AM EXCITED ABOUT" << std::endl;
    std::cout << "------------------------------------" << std::endl;
    std::cout << "Linear Algebra and Algorithms" << std::endl;




    // Closing message
    std::cout << "\nThank you for reading my introduction!" << std::endl;

    //Display Footer
    std::cout << "==============================" << std::endl;


    //Return Statement 
    return 0;
}