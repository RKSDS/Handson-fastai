# -*- coding: utf-8 -*-
"""
Created on Thu May 31 12:47:58 2018

@author: rkumarsingh
"""

#use getter and setter.
#use mutable and non-mutable functions to get and set values.

#val1 = input("Enter a Number:")
#val2 = input("Enter 2nd number:")


#try:
#    val1= float(val1)
#except:
#    print("Unable to cast. Exiting")

# try:
#    val2 = float(val2)
#except:
#    print("Casting is not possible, breaking")

def square_sum(a,b):
    return(val1**2 + val2**2 + 2*val1*val2)

#string/character is not casted.

#print("%s added with %s and squared gives %s" %(val1, val2, square_sum(val1, val2)))

name = 'manisha'

print(name[0].upper() + name[1:])
print(name[0].upper() + name[1:-1] + name[-1].upper())
print(name[:2].upper() + name[2:-2] + name[-2:].upper())
print(name[:2] + name[2:].upper())


a = "hello how are you doing!"
a.split(" ")[0]
a.split(" ")[-1]

a.split(" ")[0][-1]
a.split(" ")[-1][0]

a="math-10-soc-20-sci-30"
a.split("-")[1::2]

a="10-20-30-40-50-60"
a.split("-")[:3]
a.split("-")[3:]

a="south-Q1-15,20,30,22"
sum(a.split("-")[1].split(","))
