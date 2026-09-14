Here are some useful DSA sub-patterns I have found while solving problems. These are more specific reusable ideas inside broader topics like Arrays, Strings, Prefix Sum, Stack, DP, and Binary Search.

1. Prefix State Matching
Represent each prefix by a state and use relationships between two prefix states to identify valid subarrays.

Subarray Sum Equals K
Contiguous Array
Subarray Sums Divisible by K
Continuous Subarray Sum
2. Prefix State + Bitmask/XOR
Represent multiple boolean states, such as odd/even frequencies, as bits and compare prefix masks.

Find the Longest Substring Containing Vowels in Even Counts
Number of Wonderful Substrings
Find Longest Awesome Substring
Can Make Palindrome from Substring
3. Transform → Prefix State
Transform elements into simpler values, then solve the resulting problem using prefix states.

Contiguous Array
Longest Well-Performing Interval
Count Subarrays With Median K
Count Number of Nice Subarrays
4. First Occurrence vs Frequency Map
Store the first occurrence when maximizing length, and store frequency when counting valid subarrays.

Find the Longest Substring Containing Vowels in Even Counts
Find Longest Awesome Substring
Contiguous Array
Number of Wonderful Substrings
Subarray Sum Equals K
Subarray Sums Divisible by K
5. Prefix Sum + Remainder State
Store prefix sums modulo K, where equal remainders often indicate a useful divisible relationship.

Subarray Sums Divisible by K
Continuous Subarray Sum
Make Sum Divisible by P
Pairs of Songs With Total Durations Divisible by 60
6. Nearest Boundary + Contribution
Find the nearest valid boundaries of each element and calculate how many subarrays it contributes to.

Largest Rectangle in Histogram
Sum of Subarray Minimums
Sum of Subarray Ranges
Maximum Subarray Min-Product
7. Contribution by Position
Instead of iterating over all subarrays, calculate how much each position contributes to the final answer.

Sum of All Odd Length Subarrays
Count Unique Characters of All Substrings
Total Appeal of A String
8. Previous/Next Occurrence Boundaries
Use the previous and next occurrence of an element to determine the ranges for which it has a unique contribution.

Count Unique Characters of All Substrings
Total Appeal of A String
Partition Labels
9. Fix One Endpoint, Count the Other
Fix one endpoint of a subarray and efficiently count all possible positions of the other endpoint.

Subarray Sum Equals K
Binary Subarrays With Sum
Subarrays with K Different Integers
Subarray Product Less Than K
10. Exactly K = AtMost(K) − AtMost(K−1)
Convert an exactly-K counting problem into the difference between two easier at-most-K problems.

Subarrays with K Different Integers
Count Number of Nice Subarrays
Binary Subarrays With Sum
Number of Substrings Containing All Three Characters
11. Fix a Pivot + Balance Both Sides
Fix an important pivot and transform surrounding elements into values that represent their balance relative to it.

Count Subarrays With Median K
Longest Well-Performing Interval
Contiguous Array
12. Positive/Negative Balance State
Convert elements satisfying a condition into +1 and others into -1, then analyze prefix balances.

Contiguous Array
Longest Well-Performing Interval
Count Subarrays With Median K
13. Prefix State + Ordered Relationship
Use ordered prefix states when the required relationship is inequality rather than equality.

Count of Range Sum
Reverse Pairs
Count of Smaller Numbers After Self
Longest Well-Performing Interval
14. Expand → Violate → Shrink
Expand the window and shrink it only when a condition becomes invalid.

Longest Substring Without Repeating Characters
Minimum Size Subarray Sum
Longest Repeating Character Replacement
Max Consecutive Ones III
15. Count Valid Windows by Endpoint
For each right endpoint, count all left endpoints that form valid windows.

Subarray Product Less Than K
Number of Substrings Containing All Three Characters
Count Subarrays With Score Less Than K
16. Next Greater / Next Smaller
Maintain a monotonic structure to quickly find the nearest greater or smaller element.

Next Greater Element I
Daily Temperatures
Next Greater Element II
Next Greater Node In Linked List
17. Remove Dominated Candidates
Remove elements that can never become useful answers because a better candidate has appeared.

Daily Temperatures
Number of Visible People in a Queue
Remove K Digits
Remove Duplicate Letters
18. Monotonic Deque for Range Optimization
Maintain only useful candidates for efficiently finding the minimum or maximum in a moving window.

Sliding Window Maximum
Longest Continuous Subarray With Absolute Diff Less Than or Equal to Limit
Shortest Subarray with Sum at Least K
19. Complement Counting
Count the easier complement of the answer and subtract it from the total.

Number of Substrings Containing All Three Characters
Number of Substrings With Only 1s
20. Count Pairs Through Frequency
For each element, use the frequency of previously seen compatible values to count valid pairs.

Two Sum
Subarray Sum Equals K
Pairs of Songs With Total Durations Divisible by 60
Max Number of K-Sum Pairs
21. Canonical Representation
Convert equivalent objects into a common representation so they can be compared or grouped easily.

Group Anagrams
Find All Anagrams in a String
Valid Anagram
Repeated DNA Sequences
22. Binary Search on the Answer
Binary search a possible answer using a monotonic feasibility condition.

Koko Eating Bananas
Capacity To Ship Packages Within D Days
Split Array Largest Sum
Minimum Number of Days to Make m Bouquets
23. Greedy + Exchange Argument
Make a locally optimal choice and prove that an optimal solution can be transformed to include it.

Non-overlapping Intervals
Jump Game
Jump Game II
Two City Scheduling
24. Sort + Sweep
Sort the input and process it in order while maintaining information about previously processed elements.

Merge Intervals
Non-overlapping Intervals
Minimum Number of Arrows to Burst Balloons
Insert Interval
25. Sweep Line + Events
Convert intervals into start and end events and process them in sorted order.

Meeting Rooms II
Car Pooling
The Skyline Problem
My Calendar III
26. Fix One Dimension → Reduce to 1D
Fix one or more dimensions of a multidimensional problem and reduce the remaining problem to a known one-dimensional pattern.

Number of Submatrices That Sum to Target
Max Sum of Rectangle No Larger Than K
Maximal Rectangle
27. Enumerate the Smaller Dimension
When one dimension or state space is small, enumerate it directly while optimizing the larger dimension.

Smallest Sufficient Team
Parallel Courses II
Distribute Repeating Integers
28. Bitmask State Compression
Represent multiple boolean decisions or states inside a single integer using its bits.

Smallest Sufficient Team
Partition to K Equal Sum Subsets
Shortest Path Visiting All Nodes
Stickers to Spell Word
29. State + Submask Enumeration
For each bitmask state, efficiently enumerate all possible subsets of that state.

Parallel Courses II
Distribute Repeating Integers
Minimum Number of Work Sessions
30. Meet in the Middle
Split the problem into two smaller halves, compute states independently, and combine compatible results.

Closest Subsequence Sum
Partition Array Into Two Arrays to Minimize Sum Difference
Split Array With Same Average
31. Offline Queries + Sorting
Sort queries and input data so that updates can be processed incrementally in an efficient order.

Minimum Interval to Include Each Query
Checking Existence of Edge Length Limited Paths
Maximum Number of Tasks You Can Assign
These patterns are reusable ideas rather than separate DSA topics. Learning to recognize the transformation or structure behind a problem is often more useful than memorizing individual solutions.

