"""Algo developed from written porition"""

import argparse
from sympy import isprime

#TODO: finish functions that had done before, complete algo by next friday/convert to c++

class sa_algo:

    def __init__(self, radius, x_coor, y_coor, prime):
        #initial variables
        self.r = radius
        self.x = x_coor
        self.y = y_coor
        self.p = prime

        #e_d, e_bp, e_dp
        self.e_d = None
        self.e_bp = None
        self.e_dp = None


    def check_conditions(self):
        right_side = self.x ** self.x + self.y + self.y ** self.y
        if right_side % self.r != 0:
            raise Exception('The condition (1) does not hold')

        if isprime(self.p) == True:
            if self.r % self.p != 0:
                raise Exception('p does not divide r')
        else:
            raise Exception('p is not prime')

    def find_ed(self):
        var = 1 + self.y
        if var % self.p != 0:
            self.e_d = 0
        else:
            e_r = self.r / self.p
            e_x = self.x / self.p
            self.e_bp, self.e_dp = min([e_r, e_x])

    def find_ebp_edp(self):
        #already defined - update later
        pass

    def find_dp(self):
        #already defined - update later 
        pass

    def solve_congruence_1(self):
        #define
        pass


if __name__ == '__main__':
    pass
