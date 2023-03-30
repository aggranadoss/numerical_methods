# Explanation of the algorithm.

## Angel Granados

The sine function can be evaluated by means of the infinite series
following:

$$\sin x = x - \frac{x^{3}}{3!}+\frac{x^{5}}{5!}-\frac{x^{7}}{7!}+ \cdots$$

Write an algorithm to implement this formula so that calculate and print the values of sin x as each is added end of the series. In other words, calculate and print the sequence stock for

$$ \sin x = x $$

$$ \sin x = x - \frac{x^{3}}{3!} $$

$$ \sin x = x - \frac{x^{3}}{3!}+\frac{x^{5}}{5!} $$

up to the term of order n that you choose. For each of the above values, calculate and display the percentage error relative:

 $$  \text{ percent error}=\frac{\text{true value}-\text{approximation with the series}}{\text{true value}} \hspace{0.1cm} x 100 \hspace{0.1cm} \text{  percent}   $$

Write the algorithm for 

- a) Structured flowchart

- b) Find sin(1.5) up to and including the term $\frac{x^{15}}{15!}$

## Solution:

 ![a](https://github.com/aggranadoss/numerical_methods/blob/main/chapter_2/2.4/sinx.svg)

- b) Must be compiled on Unix system with the command "gcc -o sinx sinx.c -lm" and test with x = 1.5
