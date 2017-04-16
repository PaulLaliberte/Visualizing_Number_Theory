//
//  main.cpp
//  sa_algo
//
//  Created by Paul Laliberte on 3/18/17.
//  Copyright © 2017 Paul Laliberte. All rights reserved.
//

#include "class_sa.hpp"
#include <stdlib.h> 
#include <vector>
#include <algorithm>
#include <iterator>

void allegro_code()
{
    //sa_algo new_circle;
    //Chloe's code
    //
}

void find_matrix(sa_algo some_circle)
{
    some_circle.find_ed();
    some_circle.find_ebp_edp();
    some_circle.find_dp();
    some_circle.find_d();
    some_circle.find_bp();
    some_circle.find_points();
    some_circle.find_circle_matrix();

    some_circle.get_circle_matrix();
    
    //add other setter functions
}

/*
void get_variables(sa_algo some_circle)
{
    
    //print out variables to test:

    //some_circle.get_initial_variables();
    //std::cout << "" << std::endl;
    //some_circle.get_ed();
    //some_circle.get_ebp_edp();
    //some_circle.get_dp();
    //some_circle.get_d();
    //some_circle.get_bp();
    //some_circle.get_points();
    some_circle.get_circle_matrix();
    
}
*/

int main()
{
    //initialize a new class

    size_t size = 10;
    std::vector<sa_algo> array;

    int i = 0;

    while (i < 10)
    {
        array.push_back(sa_algo(3,2,1));
        i++;
    }

    for (int j = 0; j < (int)array.size(); j++)
    {
        find_matrix(array[j]);
    }



    //this is fine also (but change the print_variables function input too!):
    //sa_algo a_circle;
    //a_circle.get_initial_variables();
    
    
    //catch exceptions - do not change
    /*
    try
    {
        circle->check_conditions();
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Try entering values again." << std::endl;
        return 0;
    }
    
    find_matrix(circle);
    get_variables(circle);
    try
    {
        circle->check_circle_equivalence();
    }
    catch (const std::invalid_argument& e)
    {
        std::cout << "Try entering values again." << std::endl;
        return 0;
    }
    */


    
    return 0;
}
