# Segway
A Segway PT - short for Segway Personal Transporter - is a two-wheeled, self-balancing personal transporter. We simulate a simplified Segway model of inverse pendulum on a moving platform.

<p align="center">
<img src="https://github.com/viswambhar-yasa/Segway/raw/master/Annotation 2020-09-06 171644.png" />
</p>

We obtain a system of coupled nonlinear ordinary differential equations of
second order.
- ordinary differential equation - equation contains an entity u and its ordinary
derivatives 
- nonlinear - equation contains nonlinear expressions e.g. u^2, sin(u)
- second order - highest occuring derivative
- system - more than one equation
- coupled - equation regarding du^2 contains entities, that are not u or one of its derivatives

The ODE equation are solved using RK-4 Method.

