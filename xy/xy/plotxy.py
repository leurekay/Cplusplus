# -*- coding: utf-8 -*-
"""
Created on Sat Jan 14 22:17:34 2017

@author: aa
"""

from math import *
import matplotlib.pyplot as plt
import numpy as np
f_para=open("parameter.txt",'r')
parameter=f_para.readlines()
L=int(parameter[0].split()[1])
T=float(parameter[1].split()[1])
nBath=int(parameter[2].split()[1])


pathread="data.txt"
fr = open(pathread, 'r')
data=fr.readlines()
lattice=np.zeros((L,L))
for i in range(L):
    temp=data[i].split()
    for j in range(L):
        lattice[i][j]=temp[j]


class Point:
    def __init__(self,x,y):
        self.x=x
        self.y=y
p1=Point(0,0)


def arrow(f,p,angle):
    A=Point(p.x+0.4*cos(pi+angle),p.y+0.4*sin(pi+angle))
    B=Point(p.x+0.4*cos(angle),p.y+0.4*sin(angle))   
    ArrAngle=pi/5
    ArrLen=0.2
    ArrAngle_absolute1=pi+angle-ArrAngle
    ArrAngle_absolute2=pi+angle+ArrAngle
    C1=Point(B.x+ArrLen*cos(ArrAngle_absolute1),B.y+ArrLen*sin(ArrAngle_absolute1))
    C2=Point(B.x+ArrLen*cos(ArrAngle_absolute2),B.y+ArrLen*sin(ArrAngle_absolute2))
    #plt.figure(figsize=(6,6))
    plt.plot([A.x,B.x,C1.x,C2.x,B.x],[A.y,B.y,C1.y,C2.y,B.y],"g")
    plt.xlim(-1,L+1)
    plt.ylim(-1,L+1)
    
f=plt.plot(figsize=(20,20))
ax = plt.gca()
ax.set_aspect(1)
for i in range(L):
    for j in range(L):
        p=Point(i+1,j+1)
        arrow(f,p,lattice[i][j])
plt.savefig("T"+str(int(T*100))+"L"+str(L),dpi=500)