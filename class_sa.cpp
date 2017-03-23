//
//  class_sa.cpp
//  sa_algo
//
//  Created by Paul Laliberte on 3/18/17.
//  Copyright © 2017 Paul Laliberte. All rights reserved.
//

#include "class_sa.hpp"


//constructor
sa_algo::sa_algo()
{
    
    std::cout << "Enter radius, x_coor, y_coor, prime: ";
    std::cin >> radius >> x_coor >> y_coor >> prime;
    
}

bool sa_algo::isPrime(int var)
{
    bool prime_check = true;
    
    for (int i = 2; i < var; i++)
        if (var % i == 0)
        {
            prime_check = false;
        }

    return prime_check;
}

//make sure input is valid
int sa_algo::check_conditions()
{
    int right_var = std::pow(x_coor, 2) + y_coor + std::pow(y_coor,2);

    if (right_var % radius != 0)
    {
        throw std::invalid_argument("The condition (1) does not hold.");
    }
    
    bool check_prime = isPrime(prime);
    
    if (check_prime == true)
    {
        if (radius % prime != 0)
        {
            throw std::invalid_argument("p does not divide r.");
        }
    }
    else{
        throw std::invalid_argument("p is not prime.");
    }
    
    return 0;
}


//setter methods
void sa_algo::find_ed()
{
    int var = 1 + y_coor;
    if (var % prime != 0)
    {
        e_d = 0;
    }
    else
    {
        int e_r = radius / prime;
        int e_x = x_coor / prime;
        e_d = std::min(e_r, e_x);
        
    }
}

void sa_algo::find_ebp_edp()
{
    //add code
}

void sa_algo::find_dp()
{
    //add code
}

void sa_algo::find_d()
{
    //add code
}

void sa_algo::find_bp()
{
    //add code
}

void sa_algo::find_points()
{
    //add code
}

void sa_algo::find_circle_matrix()
{
    //NOTE: requires a complex numbers package, add a linear alg. package
    //      to make things easier (could do the lin. alg. on own if wanted)
    
    //add code
}



//getter methods

//ive set these up to just be able to check that the input is what we
//want -- in the final code these would be used to get a circles specific
//value when click/hover over a circle in Chloe's allegro
void sa_algo::get_initial_variables()
{
    std::cout << "radius: " << radius << std::endl;
    std::cout << "x-coordinate: " << x_coor << std::endl;
    std::cout << "y-coordinate: " << y_coor << std::endl;
    std::cout << "prime: " << prime << std::endl;
}


void sa_algo::get_ed()
{
    std::cout << "e_d: " << e_d << std::endl;
}

void sa_algo::get_ebp_edp()
{
    //add code
}

void sa_algo::get_dp()
{
    //add code
}

void sa_algo::get_d()
{
    //add code
}

void sa_algo::get_bp()
{
    //add code
}

void sa_algo::get_points()
{
    //add code
}

void sa_algo::get_circle_matrix()
{
    //add code
}



//deconstructor
sa_algo::~sa_algo()
{
    //delete pointers...
}























