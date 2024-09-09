//*************************************************
// fracturing.c
// Author: Jose Costas
// UCF ID: 5477731
// Date: 9/5/24
// Class: COP3223, Professor Parra
// Purpose: This program will print the output
// from five (5) different user defined functions
// using 5 sets of coordinate points.
// Input: x1, y1, x2, and y2
// Output: Distance, Perimeter, Area, Width, and Height
//*************************************************

#include <stdio.h>
#include <math.h>
#define PI 3.14159

//*******************************************************
// double calculateDistance()
//
// Purpose: Calculates the distance between two (2) sets
// of coordinate points.
// Output: Prints the distance between the two points.
// Precondition: None
// Postcondition: None
//*******************************************************

double calculateDistance(){
    double x1, x2, y1, y2;
    double distanceResult;

    printf("Enter your x1 value: "); // lines 24 - 34, couldn't figure out how to only make 3 print statements. my apologies.
    scanf("%lf", &x1);
    printf("Enter your x2 value: ");
    scanf("%lf", &x2);

    printf("Enter your y1 value: ");
    scanf("%lf", &y1);
    printf("Enter your y2 value: ");
    scanf("%lf", &y2);

    distanceResult = sqrt(pow((x2 - x1), 2) + pow((y2 - y1),2)); //distance formula

    printf("\nThe distance between your two points is: %lf units \n\n", distanceResult);

    return distanceResult;
}

//*******************************************************
// double calculatePerimeter())
//
// Purpose: Calculates the perimeter of a circle.
// Output: Prints the perimeter of a circle.
// Precondition: None
// Postcondition: None
//*******************************************************

double calculatePerimeter(){
    double pi = PI;
    double perimeter;
    double radius;

    radius = (calculateDistance() / 2);

    perimeter = 2 * pi * radius;// forumla to find perimeter / circumference of a circle

    printf("The perimeter of your circle is: %lf units\n", perimeter);

    return perimeter;
}

//*******************************************************
// double perimeterDifficulty()
//
// Purpose: Helper function that rates the difficulty
// level of creating the calculatePerimeter function
//
// Output: Prints the difficulty level of creating
// calculatePerimeter.
//
// Precondition: None
// Postcondition: None
//*******************************************************

double perimeterDifficulty(){
    double creatingPerimeter = 4.0;

    printf("The difficulty level to create the calculatePerimeter function was: %.1lf\n\n", creatingPerimeter);

    return creatingPerimeter;
}

//*******************************************************
// double calculateArea())
//
// Purpose: Calculates the area of a circle.
// Output: Prints the area of a circle.
// Precondition: None
// Postcondition: None
//*******************************************************

double calculateArea(){
    double area;
    double pi = PI;
    double radius;

    radius = (calculateDistance() / 2); //formula to find radius of a circle
    
    area = pi * pow(radius, 2);//formula to find area of a circle

    printf ("The area of your circle is: %lf units^2\n", area);

    return area;
}

//*******************************************************
// double areaDifficulty()
//
// Purpose: Helper function that rates the difficulty
// level of creating the calculateArea function
//
// Output: Prints the difficulty level of creating
// calculateArea.
//
// Precondition: None
// Postcondition: None
//*******************************************************

double areaDifficulty(){
    double creatingArea = 2.0;

    printf("The difficulty level to create the calculateArea function was: %.1lf\n\n", creatingArea);

    return creatingArea;
}

//*******************************************************
// double calculateWidth()
//
// Purpose: Calculates the width of a circle.
// Output: Prints the width of a circle.
// Precondition: None
// Postcondition: None
//*******************************************************

double calculateWidth(){
    double width;
    width = calculateDistance();

    printf("Since the width of a circle can be interpreted as its diameter, the width of your circle is: %lf units\n", width);

    return width;
}

//*******************************************************
// double widthDifficulty()
//
// Purpose: Helper function that rates the difficulty
// level of creating the calculateWidth function
//
// Output: Prints the difficulty level of creating
// calculateWidth.
//
// Precondition: None
// Postcondition: None
//*******************************************************

double widthDifficulty(){
    double creatingWidth = 1.0;
    printf("The difficulty level to create the calculateWidth function is: %.1lf\n\n", creatingWidth);

    return creatingWidth;
}

//*******************************************************
// double calculateHeight()
//
// Purpose: Calculates the height of a circle.
// Output: Prints the height of a circle.
// Precondition: None
// Postcondition: None
//*******************************************************

double calculateHeight(){
    double height;
    height = calculateDistance();

    printf("Since the height of a circle can be interpreted as its diameter, the height of your circle is: %lf units\n", height);

    return height;
}

//*******************************************************
// double heightDifficulty()
//
// Purpose: Helper function that rates the difficulty
// level of creating the calculateHeight function
//
// Output: Prints the difficulty level of creating
// calculateHeight.
//
// Precondition: None
// Postcondition: None
//*******************************************************

double heightDifficulty(){
    double creatingHeight = 1.0;
    printf("The difficulty level in creating the creatingHeight function is: %.1lf\n\n", creatingHeight);

    return creatingHeight;
}

int main(int argc, char **argv){
    calculateDistance(); //function call for calculating distance
    
    calculatePerimeter(); //function call for calculating perimeter / circumference of a circle
    perimeterDifficulty(); //function call that prints difficulty level in creating calculatePerimeter

    calculateArea(); //function call for calculating the area of a circle
    areaDifficulty(); //function call that prints difficulty level in creating calculateArea

    calculateWidth(); //function call for calculating the width / diameter of a circle
    widthDifficulty(); //function call that prints difficulty level in creating calculateWidth

    calculateHeight(); //function call for calculating the height / diameter of a circle
    heightDifficulty(); //function call that prints difficulty level in creating calculateHeight
    
    return 0;
}