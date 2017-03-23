"""Algo developed from written porition"""

import argparse
from sympy import isprime

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

        #d_p
        self.d_p = None

        #d, b_p


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
            self.e_d = min([e_r, e_x])

    def find_ebp_edp(self):
        if self.y % self.p != 0:
            self.e_bp = 0
            self.e_dp = 0
        else:
            e_r = self.r / self.p
            e_x = self.x / self.p
            self.e_bp = min([e_r, e_x])
            self.e_dp = self.e_bp
            
    def find_dp(self):
        iterations = self.r /self.p
        p_to_edp = self.p ** self.e_dp
        while iterations > 1:
            p_to_edp *= p_to_edp
            iterations -= 1

        self.d_p = p_to_edp

    def solve_congruence_1(self):
        #-a mod b = b - (a mod b) ....
        pass

    def solve_congruence_2(self):
        pass


if __name__ == '__main__':
    n = sa_algo(3,2,1,3)
    n.check_conditions()
    n.find_ed()
    n.find_ebp_edp()
    n.find_dp()
    print n.d
