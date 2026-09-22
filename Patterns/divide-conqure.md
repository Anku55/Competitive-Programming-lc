

# Divide and Conquer — Solving Order 🚀

A structured roadmap for mastering **Divide & Conquer** through progressively harder LeetCode problems.

The problems are organized by **concept and dependency**, not by LeetCode problem number.

---

# 📚 Roadmap

```text
Divide & Conquer
│
├── 1. Fundamentals
│   ├── Recursive Decomposition
│   ├── Binary Search
│   └── Basic Divide & Conquer
│
├── 2. Sorting & Selection
│   ├── Merge Sort
│   ├── Quickselect
│   └── Heap / Selection
│
├── 3. Tree Divide & Conquer
│   ├── BST Construction
│   ├── Binary Tree Construction
│   └── Quad Trees
│
├── 4. Array / String Divide & Conquer
│   ├── Maximum Subarray
│   ├── Recursive Strings
│   └── Mathematical Construction
│
├── 5. Merge-Sort Counting
│   ├── Inversions
│   ├── Cross-Pair Counting
│   └── Prefix Sum + Merge Sort
│
├── 6. Fenwick Tree / Segment Tree
│   ├── BIT
│   ├── Coordinate Compression
│   └── Segment Tree
│
└── 7. Advanced / Final Bosses
    ├── Advanced Trees
    ├── Geometry
    ├── Advanced Queries
    └── Specialized Problems
```

---

# 1. Fundamentals — Start Here

These problems build the basic recursive and divide-and-conquer mindset.

## 1.1 Basic Array / Mathematical Decomposition

### 1. [169 — Majority Element](https://leetcode.com/problems/majority-element/)

**Difficulty:** Easy

**Concepts:**

* Divide & Conquer
* Recursion
* Majority counting

---

### 2. [190 — Reverse Bits](https://leetcode.com/problems/reverse-bits/)

**Difficulty:** Easy

**Concepts:**

* Bit manipulation
* Recursive thinking

---

### 3. [191 — Number of 1 Bits](https://leetcode.com/problems/number-of-1-bits/)

**Difficulty:** Easy

**Concepts:**

* Bit manipulation
* Binary representation

---

### 4. [53 — Maximum Subarray](https://leetcode.com/problems/maximum-subarray/)

**Difficulty:** Medium

**Concepts:**

* Divide & Conquer
* Maximum prefix
* Maximum suffix
* Maximum crossing sum
* Kadane's Algorithm

> Important: Solve this once using Kadane's Algorithm and understand the Divide & Conquer formulation separately.

---

# 2. Sorting & Selection

Now learn the algorithms that form the foundation of many advanced Divide & Conquer problems.

---

## 2.1 Merge Sort

### 5. [912 — Sort an Array](https://leetcode.com/problems/sort-an-array/)

**Difficulty:** Medium

**Concepts:**

* Merge Sort
* Divide
* Recursive sorting
* Merge

---

### 6. [148 — Sort List](https://leetcode.com/problems/sort-list/)

**Difficulty:** Medium

**Concepts:**

* Merge Sort
* Linked Lists
* Recursive splitting
* Merging sorted lists

---

## 2.2 Selection / Quickselect

### 7. [215 — Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/)

**Difficulty:** Medium

**Concepts:**

* Quickselect
* Partition
* Selection
* Divide & Conquer

---

### 8. [973 — K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/)

**Difficulty:** Medium

**Concepts:**

* Quickselect
* Heap
* Partition
* Selection

---

### 9. [1985 — Find the Kth Largest Integer in the Array](https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/)

**Difficulty:** Medium

**Concepts:**

* Selection
* Sorting
* Quickselect-style thinking

---

## 2.3 Heap + Divide & Conquer

### 10. [23 — Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/)

**Difficulty:** Hard

**Concepts:**

* Divide & Conquer
* Pairwise merging
* Heap
* Merge Sort structure

### Recommended approach

```text
k Lists
   ↓
Merge pairs
   ↓
k / 2 Lists
   ↓
Merge pairs
   ↓
k / 4 Lists
   ↓
...
   ↓
1 Sorted List
```

---

# 3. Binary Search & Partitioning

These problems develop the ability to divide a search space intelligently.

---

## 3.1 Matrix Search

### 11. [240 — Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)

**Difficulty:** Medium

**Concepts:**

* Binary Search
* Matrix decomposition
* Search-space elimination

---

## 3.2 Advanced Binary Search

### 12. [4 — Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/)

**Difficulty:** Hard

**Concepts:**

* Binary Search
* Partition
* Divide & Conquer
* Sorted arrays

**Target complexity:**

```text
O(log(min(m, n)))
```

> ⭐ One of the most important problems in this entire list.

---

# 4. Binary Tree Divide & Conquer

Now move to recursive decomposition of trees.

---

## 4.1 Sorted Data → BST

### 13. [108 — Convert Sorted Array to Binary Search Tree](https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/)

**Difficulty:** Easy

**Concepts:**

* Recursion
* Middle element
* Balanced BST
* Divide array into two halves

---

### 14. [109 — Convert Sorted List to Binary Search Tree](https://leetcode.com/problems/convert-sorted-list-to-binary-search-tree/)

**Difficulty:** Medium

**Concepts:**

* Linked List
* Slow/Fast Pointer
* Recursive decomposition
* Balanced BST

---

## 4.2 Construct Binary Trees

### 15. [105 — Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/)

**Difficulty:** Medium

**Concepts:**

* Tree recursion
* Divide tree into subtrees
* Preorder root identification
* Inorder partitioning

---

### 16. [106 — Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

**Difficulty:** Medium

**Concepts:**

* Recursive tree construction
* Inorder partitioning
* Postorder root identification

---

### 17. [889 — Construct Binary Tree from Preorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-postorder-traversal/)

**Difficulty:** Medium

**Concepts:**

* Recursive decomposition
* Tree construction
* Traversal relationships

---

## 4.3 Maximum-Based Tree Decomposition

### 18. [654 — Maximum Binary Tree](https://leetcode.com/problems/maximum-binary-tree/)

**Difficulty:** Medium

**Concepts:**

* Divide & Conquer
* Maximum element as root
* Recursive subarrays

---

## 4.4 Tree Rebalancing

### 19. [1382 — Balance a Binary Search Tree](https://leetcode.com/problems/balance-a-binary-search-tree/)

**Difficulty:** Medium

**Concepts:**

* Inorder traversal
* Sorted array/list
* Recursive BST construction
* Divide & Conquer

---

# 5. Quad Tree / Spatial Divide & Conquer

Here the problem is divided into multiple spatial regions.

---

### 20. [427 — Construct Quad Tree](https://leetcode.com/problems/construct-quad-tree/)

**Difficulty:** Medium

**Concepts:**

* 2D Divide & Conquer
* Recursive spatial partitioning
* Quad Tree

```text
        Matrix
     /    |    |    \
   TL    TR    BL    BR
```

---

### 21. [558 — Logical OR of Two Binary Grids Represented as Quad-Trees](https://leetcode.com/problems/logical-or-of-two-binary-grids-represented-as-quad-trees/)

**Difficulty:** Medium

**Concepts:**

* Quad Tree
* Recursive merging
* Spatial decomposition

---

### 22. [1274 — Number of Ships in a Rectangle](https://leetcode.com/problems/number-of-ships-in-a-rectangle/)

**Difficulty:** Hard

**Concepts:**

* Spatial Divide & Conquer
* Rectangle partitioning
* Recursive search

---

### 23. [3537 — Fill a Special Grid](https://leetcode.com/problems/fill-a-special-grid/)

**Difficulty:** Medium

**Concepts:**

* Recursive grid decomposition
* Matrix partitioning
* Mathematical construction

---

# 6. Array Divide & Conquer / Recursive Strings

These problems use recursive decomposition without necessarily being classic Merge Sort.

---

## 6.1 Wiggle / Structural Rearrangement

### 24. [324 — Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/)

**Difficulty:** Medium

**Concepts:**

* Partitioning
* Selection
* Rearrangement
* Quickselect-related techniques

---

## 6.2 Recursive String Decomposition

### 25. [395 — Longest Substring with At Least K Repeating Characters](https://leetcode.com/problems/longest-substring-with-at-least-k-repeating-characters/)

**Difficulty:** Medium

**Concepts:**

* Divide & Conquer
* String splitting
* Frequency counting

---

### 26. [761 — Special Binary String](https://leetcode.com/problems/special-binary-string/)

**Difficulty:** Hard

**Concepts:**

* Recursive decomposition
* Nested structures
* Sorting recursive components

---

### 27. [1763 — Longest Nice Substring](https://leetcode.com/problems/longest-nice-substring/)

**Difficulty:** Easy

**Concepts:**

* Divide & Conquer
* String splitting
* Character presence

---

### 28. [3749 — Evaluate Valid Expressions](https://leetcode.com/problems/evaluate-valid-expressions/)

**Difficulty:** Hard

**Concepts:**

* Recursive decomposition
* Expression parsing
* Divide & Conquer

---

### 29. [3864 — Minimum Cost to Partition a Binary String](https://leetcode.com/problems/minimum-cost-to-partition-a-binary-string/)

**Difficulty:** Hard

**Concepts:**

* Recursive partitioning
* Optimization
* Divide & Conquer

---

# 7. Mathematical Divide & Conquer

These problems require recognizing mathematical structure.

---

### 30. [372 — Super Pow](https://leetcode.com/problems/super-pow/)

**Difficulty:** Medium

**Concepts:**

* Fast exponentiation
* Modular arithmetic
* Recursive decomposition

---

### 31. [932 — Beautiful Array](https://leetcode.com/problems/beautiful-array/)

**Difficulty:** Medium

**Concepts:**

* Divide & Conquer
* Mathematical construction
* Recursive transformation

---

### 32. [3109 — Find the Index of Permutation](https://leetcode.com/problems/find-the-index-of-permutation/)

**Difficulty:** Medium

**Concepts:**

* Combinatorics
* Divide & Conquer
* Permutations

---

# 8. Merge Sort + Counting

🔥 **This is the most important advanced section for Competitive Programming.**

The key idea is:

```text
Divide
  ↓
Sort left
  ↓
Sort right
  ↓
Count cross-half relationships
  ↓
Merge
```

---

## 8.1 Reverse Pairs / Inversions

### 33. [493 — Reverse Pairs](https://leetcode.com/problems/reverse-pairs/)

**Difficulty:** Hard

**Concepts:**

* Merge Sort
* Cross-pair counting
* Inversions
* Two pointers

---

## 8.2 Count Smaller Elements

### 34. [315 — Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/)

**Difficulty:** Hard

**Concepts:**

* Merge Sort
* Fenwick Tree
* Coordinate Compression
* Counting smaller elements

---

## 8.3 Range Sum Counting

### 35. [327 — Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/)

**Difficulty:** Hard

**Concepts:**

* Prefix Sum
* Merge Sort
* Pair counting
* Two pointers

### Core transformation

```text
Subarray Sum
     ↓
Prefix Sum
     ↓
Count Prefix-Sum Pairs
     ↓
Merge Sort
```

---

## 8.4 Inequality Pair Counting

### 36. [2426 — Number of Pairs Satisfying Inequality](https://leetcode.com/problems/number-of-pairs-satisfying-inequality/)

**Difficulty:** Hard

**Concepts:**

* Mathematical transformation
* Merge Sort
* Pair counting
* Fenwick Tree alternative

---

## 8.5 Subarray Counting

### 37. [2031 — Count Subarrays With More Ones Than Zeros](https://leetcode.com/problems/count-subarrays-with-more-ones-than-zeros/)

**Difficulty:** Medium

**Concepts:**

* Prefix Sum
* Pair counting
* Fenwick Tree
* Merge Sort

---

## 8.6 Triplet Counting

### 38. [2179 — Count Good Triplets in an Array](https://leetcode.com/problems/count-good-triplets-in-an-array/)

**Difficulty:** Hard

**Concepts:**

* Coordinate mapping
* Fenwick Tree
* Counting
* Prefix/suffix information

---

# 9. Fenwick Tree / Binary Indexed Tree

These are not purely Divide & Conquer problems, but they naturally follow the Merge-Sort counting section.

Learn them after understanding pair counting.

---

## 9.1 Basic Fenwick Tree

### 39. [307 — Range Sum Query - Mutable](https://leetcode.com/problems/range-sum-query-mutable/)

**Difficulty:** Medium

**Concepts:**

* Fenwick Tree
* Point Update
* Prefix Sum
* Range Sum

---

## 9.2 BIT + Coordinate Compression

### 40. [1649 — Create Sorted Array through Instructions](https://leetcode.com/problems/create-sorted-array-through-instructions/)

**Difficulty:** Hard

**Concepts:**

* Fenwick Tree
* Coordinate Compression
* Order Statistics

---

### 41. [2519 — Count the Number of K-Big Indices](https://leetcode.com/problems/count-the-number-of-k-big-indices/)

**Difficulty:** Hard

**Concepts:**

* Fenwick Tree
* Prefix/Suffix counting
* Order statistics

---

### 42. [2343 — Query Kth Smallest Trimmed Number](https://leetcode.com/problems/query-kth-smallest-trimmed-number/)

**Difficulty:** Medium

**Concepts:**

* Sorting
* Selection
* Query processing

---

### 43. [1738 — Find Kth Largest XOR Coordinate Value](https://leetcode.com/problems/find-kth-largest-xor-coordinate-value/)

**Difficulty:** Medium

**Concepts:**

* Prefix XOR
* Matrix decomposition
* Selection

---

# 10. Advanced Data Structures

Now move from Fenwick Tree to Segment Tree and advanced query techniques.

---

## 10.1 Segment Tree

### 44. [2407 — Longest Increasing Subsequence II](https://leetcode.com/problems/longest-increasing-subsequence-ii/)

**Difficulty:** Hard

**Concepts:**

* DP
* Segment Tree
* Range Maximum Query
* Coordinate handling

---

### 45. [3165 — Maximum Sum of Subsequence With Non-adjacent Elements](https://leetcode.com/problems/maximum-sum-of-subsequence-with-non-adjacent-elements/)

**Difficulty:** Hard

**Concepts:**

* Segment Tree
* DP states
* Matrix/state merging
* Range queries

---

### 46. [3410 — Maximize Subarray Sum After Removing All Occurrences of One Element](https://leetcode.com/problems/maximize-subarray-sum-after-removing-all-occurrences-of-one-element/)

**Difficulty:** Hard

**Concepts:**

* Segment Tree
* Maximum subarray
* State merging
* Advanced DP

---

### 47. [3520 — Minimum Threshold for Inversion Pairs Count](https://leetcode.com/problems/minimum-threshold-for-inversion-pairs-count/)

**Difficulty:** Medium

**Concepts:**

* Binary Search
* Inversion Counting
* Fenwick Tree / Segment Tree

---

### 48. [3636 — Threshold Majority Queries](https://leetcode.com/problems/threshold-majority-queries/)

**Difficulty:** Hard

**Concepts:**

* Range Queries
* Segment Tree
* Majority queries

---

### 49. [4017 — Peaks in Array II](https://leetcode.com/problems/peaks-in-array-ii/)

**Difficulty:** Hard

**Concepts:**

* Segment Tree
* Range Queries
* Dynamic updates

---

# 11. Advanced Tree + Combinatorics

These should be attempted only after basic tree recursion and counting techniques are comfortable.

---

### 50. [1569 — Number of Ways to Reorder Array to Get Same BST](https://leetcode.com/problems/number-of-ways-to-reorder-array-to-get-same-bst/)

**Difficulty:** Hard

**Concepts:**

* BST
* Divide & Conquer
* Combinatorics
* Binomial coefficients
* Recursion

---

### 51. [2792 — Count Nodes That Are Great Enough](https://leetcode.com/problems/count-nodes-that-are-great-enough/)

**Difficulty:** Hard

**Concepts:**

* Tree recursion
* Subtree processing
* Counting

---

### 52. [3841 — Palindromic Path Queries in a Tree](https://leetcode.com/problems/palindromic-path-queries-in-a-tree/)

**Difficulty:** Hard

**Concepts:**

* Trees
* Path queries
* Advanced data structures
* Bitmask / frequency techniques

---

### 53. [3624 — Number of Integers With Popcount-Depth Equal to K II](https://leetcode.com/problems/number-of-integers-with-popcount-depth-equal-to-k-ii/)

**Difficulty:** Hard

**Concepts:**

* Bit manipulation
* Digit / combinatorial techniques
* Advanced counting

---

# 12. Geometry / Sweep Line

These require a different type of decomposition and event processing.

---

### 54. [218 — The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/)

**Difficulty:** Hard

**Concepts:**

* Sweep Line
* Heap
* Divide & Conquer
* Event processing

> ⭐ Important advanced problem.

---

### 55. [1274 — Number of Ships in a Rectangle](https://leetcode.com/problems/number-of-ships-in-a-rectangle/)

**Difficulty:** Hard

**Concepts:**

* Spatial Divide & Conquer
* Rectangle subdivision
* Recursive search

---

# 13. Advanced Selection / Query Problems

---

### 56. [1756 — Design Most Recently Used Queue](https://leetcode.com/problems/design-most-recently-used-queue/)

**Difficulty:** Medium

**Concepts:**

* Order statistics
* Data structures
* Indexed selection

---

### 57. [3759 — Count Elements With at Least K Greater Values](https://leetcode.com/problems/count-elements-with-at-least-k-greater-values/)

**Difficulty:** Medium

**Concepts:**

* Sorting
* Order statistics
* Counting

---

### 58. [2613 — Beautiful Pairs](https://leetcode.com/problems/beautiful-pairs/)

**Difficulty:** Hard

**Concepts:**

* Divide & Conquer
* Closest-pair style reasoning
* Geometry / ordering

---

### 59. [4055 — Count Shadow Pairs II](https://leetcode.com/problems/count-shadow-pairs-ii/)

**Difficulty:** Hard

**Concepts:**

* Advanced counting
* Ordering
* Pair counting

---

# 14. Advanced Array / Query Problems

These are late-stage problems. Don't attempt them before mastering the earlier sections.

---

### 60. [3653 — XOR After Range Multiplication Queries I](https://leetcode.com/problems/xor-after-range-multiplication-queries-i/)

**Difficulty:** Medium

**Concepts:**

* XOR
* Range Queries
* Mathematical transformation

---

### 61. [3655 — XOR After Range Multiplication Queries II](https://leetcode.com/problems/xor-after-range-multiplication-queries-ii/)

**Difficulty:** Hard

**Concepts:**

* XOR
* Range Queries
* Advanced optimization

---

### 62. [3719 — Longest Balanced Subarray I](https://leetcode.com/problems/longest-balanced-subarray-i/)

**Difficulty:** Medium

**Concepts:**

* Prefix techniques
* Subarray counting
* Divide & Conquer-style reasoning

---

### 63. [3721 — Longest Balanced Subarray II](https://leetcode.com/problems/longest-balanced-subarray-ii/)

**Difficulty:** Hard

**Concepts:**

* Advanced range processing
* Segment Tree / ordered structures
* Subarray optimization

---

### 64. [3737 — Count Subarrays With Majority Element I](https://leetcode.com/problems/count-subarrays-with-majority-element-i/)

**Difficulty:** Medium

**Concepts:**

* Prefix transformation
* Subarray counting
* Majority condition

---

### 65. [3739 — Count Subarrays With Majority Element II](https://leetcode.com/problems/count-subarrays-with-majority-element-ii/)

**Difficulty:** Hard

**Concepts:**

* Advanced subarray counting
* Majority conditions
* Range/query techniques

---

### 66. [4011 — Count Subarrays With Even Odd Ratio I](https://leetcode.com/problems/count-subarrays-with-even-odd-ratio-i/)

**Difficulty:** Medium

**Concepts:**

* Prefix transformation
* Frequency counting
* Subarray properties

---

### 67. [4013 — Count Subarrays With Even Odd Ratio II](https://leetcode.com/problems/count-subarrays-with-even-odd-ratio-ii/)

**Difficulty:** Hard

**Concepts:**

* Advanced subarray counting
* Prefix transformation
* Range/query techniques

---

# 15. Final Bosses ☠️

These should be saved for the end.

---

### 68. [3826 — Minimum Partition Score](https://leetcode.com/problems/minimum-partition-score/)

**Difficulty:** Hard

**Concepts:**

* Partitioning
* Optimization
* Advanced Divide & Conquer / DP techniques

---

### 69. [3855 — Sum of K-Digit Numbers in a Range](https://leetcode.com/problems/sum-of-k-digit-numbers-in-a-range/)

**Difficulty:** Hard

**Concepts:**

* Mathematical counting
* Range decomposition
* Advanced combinatorics

---

### 70. [3943 — Number of Pairs After Increment](https://leetcode.com/problems/number-of-pairs-after-increment/)

**Difficulty:** Hard

**Concepts:**

* Pair counting
* Mathematical transformation
* Advanced data structures

---

# ⭐ Recommended Final Solving Order

If you want a **single sequence** instead of categories, follow this:

```text
01. 169 — Majority Element
02. 190 — Reverse Bits
03. 191 — Number of 1 Bits
04. 108 — Convert Sorted Array to BST
05. 53 — Maximum Subarray

06. 912 — Sort an Array
07. 148 — Sort List
08. 215 — Kth Largest Element
09. 973 — K Closest Points
10. 1985 — Kth Largest Integer
11. 324 — Wiggle Sort II

12. 109 — Convert Sorted List to BST
13. 105 — Construct Binary Tree from Preorder + Inorder
14. 106 — Construct Binary Tree from Inorder + Postorder
15. 889 — Construct Binary Tree from Preorder + Postorder
16. 654 — Maximum Binary Tree
17. 1382 — Balance a BST

18. 427 — Construct Quad Tree
19. 558 — Logical OR of Quad-Trees
20. 3537 — Fill a Special Grid

21. 240 — Search a 2D Matrix II
22. 4 — Median of Two Sorted Arrays

23. 23 — Merge k Sorted Lists
24. 372 — Super Pow
25. 932 — Beautiful Array
26. 3109 — Find the Index of Permutation

27. 395 — Longest Substring with At Least K Repeating Characters
28. 1763 — Longest Nice Substring
29. 761 — Special Binary String

30. 493 — Reverse Pairs
31. 315 — Count of Smaller Numbers After Self
32. 327 — Count of Range Sum
33. 2031 — Count Subarrays With More Ones Than Zeros
34. 2426 — Number of Pairs Satisfying Inequality
35. 2179 — Count Good Triplets

36. 307 — Range Sum Query - Mutable
37. 1649 — Create Sorted Array
38. 2519 — Count K-Big Indices
39. 2343 — Kth Smallest Trimmed Number
40. 1738 — Kth Largest XOR Coordinate

41. 2407 — Longest Increasing Subsequence II
42. 3165 — Maximum Sum of Subsequence
43. 3410 — Maximize Subarray Sum
44. 3520 — Minimum Threshold for Inversion Pairs
45. 3636 — Threshold Majority Queries
46. 4017 — Peaks in Array II

47. 1569 — Reorder Array to Get Same BST
48. 2792 — Count Nodes That Are Great Enough
49. 3841 — Palindromic Path Queries
50. 3624 — Popcount-Depth

51. 218 — Skyline Problem
52. 1274 — Number of Ships in a Rectangle

53. 1756 — Design Most Recently Used Queue
54. 3759 — Count Elements With At Least K Greater Values
55. 2613 — Beautiful Pairs
56. 4055 — Count Shadow Pairs II

57. 3653 — XOR After Range Multiplication I
58. 3655 — XOR After Range Multiplication II
59. 3719 — Longest Balanced Subarray I
60. 3721 — Longest Balanced Subarray II
61. 3737 — Count Subarrays With Majority Element I
62. 3739 — Count Subarrays With Majority Element II
63. 4011 — Count Subarrays With Even Odd Ratio I
64. 4013 — Count Subarrays With Even Odd Ratio II

65. 3749 — Evaluate Valid Expressions
66. 3864 — Minimum Cost to Partition Binary String
67. 3826 — Minimum Partition Score
68. 3855 — Sum of K-Digit Numbers in a Range
69. 3943 — Number of Pairs After Increment
70. 218 / remaining advanced problems as revision
```

---

# 🔥 Most Important Chain for CP

If your primary goal is **Competitive Programming**, pay special attention to this chain:

```text
912 — Sort an Array
       ↓
493 — Reverse Pairs
       ↓
315 — Count Smaller Numbers
       ↓
327 — Count Range Sum
       ↓
2426 — Number of Pairs
       ↓
2179 — Good Triplets
       ↓
307 — Fenwick Tree
       ↓
1649 — BIT + Compression
       ↓
2407 — Segment Tree
       ↓
3165 — Advanced Segment Tree
       ↓
3636 / 4017 — Advanced Queries
```

This is one of the most valuable learning paths in the entire list.



