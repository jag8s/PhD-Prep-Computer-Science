How to find an Example?|

Magic squares. Matrix square. all columns, rows and diagonals add to the same number
How to find? A magic square of size 4 exits. 
Magic Squares 3x3 assignment solution
8	1	6
3	5	7
4	9	2

I understood that 9 8 7 could not be in same rows

Narrowing the search?
Magic squares exist for all  n>2
3X3 brute force search feasible?
all permutations of 9 digits --> 9X8X7...X1 = 362880
OK for computers, but people?
What is the row column sum?
1+2+3+4+5+6+7+8+9=45, each row, column or diag has 3 digits 45/3 = 15
So with are looking at all possible combination of 15
We can predict the center
We know the if we sum up four lines, we know that is 4 times a constant (in this case 15)
S is the constant, so 4S
we know that all of the lines share the center so the center must be also a S/3 of 1.3 third the sum of each line
4S = 3 * center value + total sum 
total sum is 3S   (HOW DO I KNOW THIS!?!?!)
so S = 3(centervalue) 
S/3=Center Value
The value is 15 in our case
15/3 = 5 = center value
1 cannot be in the corner because that would require 3 solutions to 

Magic Square Fundamentals: The "Structural Logic"
Magic Squares are defined by a contract between a fixed pool of numbers and strict alignment constraints.
1. Key Invariants
• Total Sum: The sum of all numbers available for the board (e.g., for 1-9, the sum is 45). This is the "pool" of points.
• Magic Constant (S): The sum each row, column, and diagonal must reach.
• The Relationship: In an $n \times n$ square, $n \times S = \text{Total Sum}$. For a $3 \times 3$ square: $3 \times 15 = 45$.
2. The Center Value Discovery
The center cell is the most "constrained" because it participates in the most lines (4 lines in a $3 \times 3$).
• The Overlap Proof: Adding the 4 lines passing through the center (Row 2, Col 2, and both diagonals) counts every cell on the board once, plus the center cell 3 extra times.
• The Equation: $4S = \text{Total Sum} + 3 \times (\text{Center Value})$
• Simplification: $4S = 3S + 3(\text{Center}) \implies S = 3(\text{Center})$.
• Result: The center of a $3 \times 3$ square must be $S/3$ (e.g., $15/3 = 5$).
3. "Uncovering" vs. "Solving"
• Prime Factorization: In multiplicative squares, primes act as "DNA." If a prime (like 7) exists on the board, the Magic Product ($P$) must be a multiple of that prime.
• Infeasibility: Use constraints to eliminate positions. For example, in a $3 \times 3$ square, the number 1 cannot be in a corner because there aren't enough available pairs to sum to 14 (the $S-1$ requirement) across three intersecting lines.
4. Narrowing the Search
Rather than brute-forcing all permutations ($9! = 362,880$), we use these structural rules to "firewall" impossible configurations, often reducing the search to just a few logical steps.

Multiplicative Magic Suare
instead of sums with have products, now the set of number just  includes some set of positive integers
2^(x+y)=2^x*2^y
expoinentyiation: addition--> muliplication

so multiply 2 squares to find a mulplicative sqaure?

The "Exponent Trick" (The Bridge)
Since $2^x \cdot 2^y = 2^{x+y}$, the laws of exponents literally translate addition into multiplication.
If you have an Additive Magic Square where the sum of a row is $A + B + C = 15$, and you turn those into exponents of base 2:$$2^A \cdot 2^B \cdot 2^C = 2^{(A+B+C)} = 2^{15}$$
The "Magic Sum" of 15 became the "Magic Product" of $2^{15}$. 
You didn't just solve a new puzzle; you used an old solution to generate a new one.


There is a 6 digit number starting by 100 and divisable by 9127
abcdef
for i = 100,000 up to 100,999
   if i is a multiple of 9127
	print(i)
I wrote code to find it
#include <iostream>

int main (){
    int specialNumber;
    for (int i = 100000 ; i <= 100999; i++){
        if (i % 9127 == 0){
            std::cout << i << std::endl;
            return 0;
        }
    }
    std::cout << "No solution" << std::endl;
    return 0;
}
ANSWER: 100397
His tries:
100000/9127 = 10.9565...
11*9127 = 100397

Next
There exists a 3 digit number N that produces remainder 1 when divided by 2,3,4,5,6,7
N-1?
I see that 2,3,4,5,6,7 includes 2,3,(2*2),5,(2*3),7and that 2,3 are eliminated by (2*3) leaving
2*2*3*5*7 = 420
N-1 = 420
N=421

FInd an integrer n sych that n^2 = 31415...
finite decimal fraction is enough: (10x)^2 = 100x^2
sqrt(31415 = 177.242771...  (used calculator)
177.242771^2 = 31414.9998718 ....
177.243^2 = 31415.081049
177243^2 = 31415435536
177244^2 = 31415435536

Prove there is another n with a different first digit whose square also stars with 31415
sqrt(3141.5) = 56.0490856
5605^2 = 31416025: too big
560491^2 = 314150161081: OK
answer 177243 and 560491

Integer Linear Combination
Imagine a country with 7/13 florins coins. Two people, each has many coins of each type. Can one pay 6 florins to the other?
6=13-7
what about paying 1 florin?
yes 2*7-13=1  or 7-6=1
what about 2 florins?
yes  just 4*7-2*13=2
any integer amount is payable
7x+13y=c has integer solutions

15/21 coins: ho to pay 6?
6=21-15
8? no  8 is not a multiple of 3
can we pay 3?
Euclid's Algoritm
any multiple of 3 is payable
the equation 21x+15y=c
solution <--> c is a multiple of 3

Took the quiz different people have different coins, 100%

Discrete Math Learning Journal: Thursday AM (1/29/26)
Thematic Summary: The Geometry of Numbers
This morning shifted from simple calculations to Constraint-Based Logic. The primary focus was on how global invariants (like the sum of a square or the GCD of two numbers) dictate what is possible within a system.
Key Concepts Mastered
Magic Square Invariants:
Proved that for a $3 \times 3$ square, the Center = Row Sum / 3.Understood "Double-Counting" logic: Adding intersecting lines counts the center multiple times, revealing the underlying balance of the board.
Multiplicative Transformation:
Discovered the mapping between addition and multiplication via exponentiation ($2^x \cdot 2^y = 2^{x+y}$).Realized that a multiplicative square’s center is the cube root of the magic product.
Narrowing the Search (Infeasibility):Applied the "One Example is Enough" vs. "Impossibility Proof" mindset.
Used prime factorization to "firewall" impossible number placements.Integer Linear Combinations (The Coin Problem):Identified that the Greatest Common Divisor (GCD) is the "minimum step" possible in any transaction.
Rule: You can only pay amount $C$ with coins $A$ and $B$ if $C$ is a multiple of $GCD(A, B)$.Mastered Euclid's Algorithm as a process of finding the "DNA" of two numbers.
Areas for Further Study & Review
The Logarithmic Mapping: Spend more time on why squares of numbers starting with "1" and "5" can land in the same leading-digit territory (Scale Invariance).Euclidean Algorithm (Reverse): Practice tracing the algorithm backward to find the specific $x$ and $y$ (the "coin count") for linear combinations.NP-Completeness Intuition: Revisit Alexander Shen’s point on why verifying a solution is easier than finding one, especially as it relates to larger $n \times n$ magic squares.

1. Constraint Satisfaction & The Pigeonhole Principle
- The Hotel Voucher Problem: Learned how to identify the Infeasibility Firewall.
- The Rule: To avoid consecutive stays in Hotel $C$, you need at least $n_c - 1$ "insulators" (other hotels).The Formula: $C_{max} = (A + B) + 1$.
- Insight: If your most frequent resource exceeds your total "gaps," a valid schedule cannot exist.
2. Numerical Target Practice (Scale Invariance)The 5-Digit Square ($N^2$ starts with 27182):
- The Method: Use $\sqrt{27182}$ as a base $(\approx 164.869)$ and shift the decimal to meet the digit constraint ($16486.9$).
- The Trap: Always return the Root ($N$), not the Square ($N^2$).
- Insight: Significant digits are independent of the decimal point’s position.
3. The Chinese Remainder Theorem (Shortcut Mastery)
- The Book Problem (Remainders of 2, 3, 4 for Divisors 3, 4, 5):
- Brute Force: Testing every number (the $O(N)$ approach).
- The Shortcut: Identifying a Common Deficit. If you are 1 short of a full group in every scenario, the answer is $LCM(3,4,5) - 1$.
- The Result: $60 - 1 = \mathbf{59}$.4. 
- Minimal Payable Amounts (GCD & Linear Combinations)
- The 12/20/30-Florin Coin Problem:
- The Logic: The smallest payable amount is the Greatest Common Divisor (GCD) of all available coins.
- The Proof: Since 12, 20, and 30 are all even, any combination must be even. $GCD(12, 20, 30) = 2$.The Transaction: $12 + 20 - 30 = 2$.
- Progress Update: 
Thursday Tasks Completed[x] 
- Discrete: Assignment "Free Accommodation"[x] 
- Discrete: Assignment "Is there..."[x] 
- Discrete: Watch "Paths in a Graph" & Slides

calls are correctly mapped to their machine-code definitions.

4. Reflections for Game Development
Modularity: Foundations like header files and properly structured main() functions allow for modularity and better execution flow in game applications.

Maintainability: Applying these concepts to real-world scenarios ensures that gaming code remains efficient and manageable as projects scale.

Status Update:

[x] Completed Style Identification Lab.

[x] Completed Code and Style Assessment (100%).

[x] Completed Module 1 Comprehensive Evaluation (100%).

[ ] Refactoring Lab (Currently locked by course staff).

Sat 1/31/2026
Discussing Optimality
A factory produces milk chocolate ($10 per box) and dark chocolate ($30 per box). The daily demands are 500 and 200 boxes for milk and dark chocolate, respectively. The factory produces 600 boxes of chocolate per day. What is the optimum production plan?
Consulting claims $10,000 is optimum profit. How do we prove? Prove that we can produce $10 per day, then show that that is the optimum.
Plan: Produce 400 boxes of milk chocolate and 200 boxes of Dark chocolate per day. 
Constraints:
no more that 500 of milk per day
no more than 200 of dark per day
no more than 600 total per day

profit: 400*10 + 200*30 = 10,000

M is milk and D is dark
M <= 500, D <= 200, M+D<=600
we want to show that 10M + 30D = 10,000
sum the inequalities:
    10M+10D<= 6,000
        20D<= 4,000
A proof of the fact that some value a is optimality usually consist of two parts:
1) Existential statement: there exists a solution achieving the value a
2) Universal statement: all solutions achieve the value not greater than a

There are 90 cards with all two-digit numbers on them: 
10,11,12,…,98,99.

A player takes some of these cards simultaneously. For each card taken she gets $1. However, if the player takes two cards that add up to 100 (say, 23 and 77), she loses all the money. How much could she get? 

In mathematical language: What is the maximum number of two-digit integers (10,11,...,99) that one can select satisfying the following condition: no two different selected integers have sum 100?

constraints:
90 cards
card face is between 10 <= C <= 99
if 2 card face values are >= 100 BUST!
each card is worth $1
what is max $ without busting

What pairs are bad? P1(10,90),P2(11,89) - P40(49,51)
50 can't pair with 50, but there is only one 50
91 - 99 can't pair with anything

40 bad pairs, and 10 loners. or 40-10 =50 total upper bounds


The Pigeonhole Principle
If n pigeons are placed into m boxes and m < n, then there is a box containing more than one pigeon.


Discrete Math: 
Extremal Problems & Optimality (Week Summary)
1. The Principle of Optimality
- Framework: Proving a maximum/minimum requires two parts:
--Existential Statement: A specific configuration that achieves value $A$.
--Universal Statement: Proof that no configuration can exceed value $A$.
--Application: Applied to a production optimization problem (Milk vs. Dark Chocolate) using linear inequalities.
2. Subset Selection & Forbidden Pairs
- Problem: Maximize a subset of two-digit integers $\{10, \dots, 99\}$ such that no two sum to 100.
- Logic: Identified 40 "Dangerous Pairs" (e.g., $10+90$) and 10 "Safe Loners" (e.g., $50$ and $91-99$).
- Solution: $40 \text{ (one from each pair)} + 10 \text{ (all loners)} = 50$.
3. Chessboard Extremal Problems
- Rooks ($N=8$): 
-- Constraint is Row/Column exclusion. Optimized via the Main Diagonal.
-Knights ($N=32$): 
-- Constraint is the $L$-jump. Optimized via Color Parity (filling all squares of one color).
- Bishops ($N=14$): 
-- Constraint is Diagonal lanes. Optimized via the Perimeter Strategy (lining the top and bottom edges).

Progress Update: 
Saturday Sprint[x] 
Discrete: Warmup (Optimality)[x] 
Discrete: Assignment (Max # 2-digit integers)[x] 
Discrete: Assignment (Max # rooks, knights, bishops)[x] 
Discrete: Watch all Friday/Saturday videos
