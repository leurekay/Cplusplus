# -*- coding: utf-8 -*-
"""
Created on Tue Jan 10 21:11:46 2017

@author: aa
"""
import pylab
import matplotlib.pyplot as plt
pathread="squ"
fr = open(pathread, 'r')
raw=fr.readlines()
count=0
X=[]
Y=[]
for strList in raw:
    s=strList.split()
    X.append(float(s[0]))
    Y.append(float(s[1]))           
fr.close()


plt.figure(1)
pylab.title("")
pylab.xlabel('$parameter$', fontsize=16)
pylab.ylabel('$order$', fontsize=16)

pylab.plot(X, Y,'bo-', clip_on=False,label='mc')
#pylab.plot(j, Omd, 'y*-', clip_on=False,label="md")
pylab.legend()
pylab.savefig(pathread)

