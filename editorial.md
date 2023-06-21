# Editorial 
There exists an $O(1)$ solution for this problem.
If we count the number of times each element of the set $\{1,2,3\dots,N\}$ appears as the smallest element in the subsets we can simplify the result.

The number of times 1 will apper as the smallest element is $N-1 \choose R-1$. Also 2 will apper $N-2 \choose R-1$ times as the smallest one in the arrrays and similarly 3 will  $N-3 \choose R-1$ times. There are total of $N \choose R$ subsets.
Hence, the required value $(average)$ will be 
$$\frac{{N-1 \choose R-1}+2{N-2 \choose R-1} +3{N-3 \choose R-1} + \dots +(N-R+1){R-1 \choose R-1}}{N \choose R}$$

Further by using pascal's identity which is
$${N \choose R}={N-1 \choose R-1}+{N-1 \choose R}$$ we can reduce this sum to 
$$\frac{{N\choose R}+{N-1 \choose R} +{N-2 \choose R} + \dots +{R \choose R}}{N \choose R}$$which again on similar reduction gives
$$\frac{N+1 \choose R+1}{N \choose R}$$which on simplification (by cancelling out common factors) gives the final expressioin for the mean as $\frac{N+1}{R+1}$.
Thus the required answer can be calculated in $O(1)$.
