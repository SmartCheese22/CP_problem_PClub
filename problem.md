#  The Magical Quest
You have embarked on an magical quest to collect mystical artifacts scattered across a other worldy realm. In this realm, there are $N$ ancient artifacts numbered from $1$ to $N$.
 However, due to the nature of their powers, you can only collect subsets of size $R$ from the artifacts $\left(1 <= R <= N\right)$. Each subset represents a unique combination of artifacts you can gather.

To make your quest even more challenging, you need to calculate the mean value of the smallest artifact in each subset you can collect. This will help you estimate the average power level of the artifacts you come across during your journey.

# Input
The first line contains one integer $t \left(1<=t<=1000\right)-$the number of testcases.

The first line of each test case contains a single integer $n \left(1<=n<=10^{6}\right)-$the number of artifacts.

The second line contains a single integer  $R\left(1<=R<=10^{6}\right)-$ the maximum size of the subset that you can carry at a time.
# Output
For each test case output the average value of the smallest elements of all the subsets truncating upto two decimal places

**Example**

**input**

$5$
$5$  $4$
$10$ $2$
$7$ $6$
$4$ $2$
$6$ $3$

**output**

$1.20$
$3.67$
$1.14$
$1.67$
$1.75$

# Note
In the first example, the subset that formed are
$[1,2,3,4],[1,2,3,5],[2,3,4,5],[1,3,4,5],[1,2,4,5]$
The minimum element in each case is $1,1,2,1,1$ whose average is $(6/5) = 1.20$
