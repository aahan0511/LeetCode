# Intuition
This was a simple problem. I tried once with Bruteforce and it gave TLE, but the next time I tried with a more optimized approach and using the hint from [@shiva97](https://leetcode.com/u/shiva97/) from [this discussion comment](https://leetcode.com/problems/container-with-most-water/description/comments/1567057/) as well as [this one](https://leetcode.com/problems/container-with-most-water/description/comments/1568582/) by [@alec_cs](https://leetcode.com/u/alec_cs/), I brewed the code.

# Approach 
>The proof of why the solution works is important to understand. Following is its summary:
>
>Consider we start with i = 0 and j = height.size() - 1. That is, i points to the first column and j points to the last column.
Now suppose that h(i)>h(j) (we are not loosing generality by this assumption)
We calculate the water capacity for the i, j. It will be h(j)*(j-i).
Now see that if we fix j at height.size() - 1 and vary i, we cannot get a greater water capacity. Why?
capacity = min of both heights * width between them. Since capacity is the product of these two terms, we will look at each term individually.
First about the width. It is easy to see that for all other i's (i = 1, 2,... ,height.size()-2) we will have a lesser width.
Second, the height will be the minimum of the column at i and at j, i.e. min(h(i),h(j)). But this value will be always less than h(j)
So both factors in the calculation of the capacity will be smaller and hence we can skip considering all the cases where i = 1, 2, 3, ..., height.size()-2 and j = height.size()-1
Which basically means that we can simply move j to j-1.
This is how I understood it and I hope this explanation makes it easy to understand.

>Some of these proofs are not very clear. I want to expand on Steven Pochmann's idea and hopefully make it clearer.
>
>Explanation
>
>To start, we place both pointers at the beginning and end of the array. While this is common with most two pointer approaches, in this specific problem it allows us to consider all potential possibilities. Thus, in a way we are still brute forcing the solution, however we are carefully optimizing the possibilities at each iteration so that the optimal solution is not missed.
At each iteration, no matter what, the width will decrease. This is because we must move either the left and right pointer. Therefore, we must consider the potential outcomes after we either increase the left pointer or decrease the right pointer.
Outcome A: If we decrease a pointer and the height of the pillar is smaller than the previous height (where the pointer was originally before we moved it), the overall area will have to be smaller. This is because we take the minumum of the two heights that the pointers are pointing at, and because the width will be decreased by 1, the new area will have to be the same or smaller.
Outcome B: If we decrease a pointer and the height of the pillar is larger or the same as the previous height, the width may or may not be larger than the previous height, because it depends on whether the height difference between the new pillar and the previous pillar can compensate for the loss of width.
So why do we always move the pointer of the smallest pillar?
>
>The reason for this is simple. There is no reason to hang onto the pillar of the smallest size in the current range because in the next iteration, the overall width will decrease by one. Thus, a potential greater area will never be reached by hanging onto the smaller pillar, because even if another taller pillar is found by moving the pointer at the taller pillar, the area must always be calculated with the minimum of the two pillars. Due to the smaller width by decreasing the pointer range, the overall area will be smaller regardless. Thus, we can safely disregard the smaller pillar at each iteration.

These were the two comments that helped me understand my algorithm. 

So basically as the comment said, we just have to move the pillar with the lower height. When we move that pillar, we get a new size of area, which we can find with `amount`, and using that we just put the maximum of the area we can get in the variable `maximum`.

At the end we return `maximum`, and done!

# Complexity
- Time complexity: `O(N)` | *Beats 100.00%*
- Space complexity: `O(1)` | *Beats 78.76%*

# Code
```cpp
class Solution {
    int amount(int height1, int height2, int width) {
        return min(height1, height2) * width;
    }

public:
    int maxArea(vector<int>& heights) {
        int maximum = 0;
        int i = 0, i_h;
        int j = heights.size() - 1, j_h;

        while (i < j) {
            i_h = heights[i];
            j_h = heights[j];
            maximum = max(amount(i_h, j_h, j - i), maximum);
            if (i_h < j_h)
                i++;
            else
                j--;
        }

        return maximum;
    }
};
```

# Proof

[![0ms | Beats 100.00% ; 62.89MB Beats 78.76%](https://assets.leetcode.com/users/images/91bf10d0-c73b-4355-8c90-af1590c10a0b_1760010497.89832.png)](https://leetcode.com/submissions/detail/1796292093/)

# Support

If you liked this explanation and solution please **`upvote`** on [LeetCode](https://leetcode.com/problems/container-with-most-water/solutions/7261571/solution-for-container-with-most-water-i-rtbf/).

Also refer to the comments on the problem which may help you.

[Comment](https://leetcode.com/problems/container-with-most-water/description/comments/1567057/) by [@shiva97](https://leetcode.com/u/shiva97/)

[Comment](https://leetcode.com/problems/container-with-most-water/description/comments/1568582/) by [@alec_cs](https://leetcode.com/u/alec_cs/)