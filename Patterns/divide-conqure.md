

````markdown
# Merge Sort & Divide and Conquer

> A pattern-based roadmap to master Merge Sort, Divide & Conquer, inversion counting, pair counting, and recursive problem decomposition.

---

## Table of Contents

- [1. Merge Fundamentals](#1-merge-fundamentals)
- [2. Merge Sort Implementation](#2-merge-sort-implementation)
- [3. Basic Divide & Conquer](#3-basic-divide--conquer)
- [4. Inversion Counting](#4-inversion-counting)
- [5. Modified Merge Sort](#5-modified-merge-sort)
- [6. Merge Sort + Prefix Sum](#6-merge-sort--prefix-sum)
- [7. Divide & Conquer + Binary Search](#7-divide--conquer--binary-search)
- [8. Advanced Divide & Conquer](#8-advanced-divide--conquer)
- [9. Divide & Conquer on Other Structures](#9-divide--conquer-on-other-structures)
- [10. Mastery Problems](#10-mastery-problems)

---

# 1. Merge Fundamentals

> Learn the fundamental operation behind Merge Sort: merging two sorted sequences.

### Problems

- [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) — 🟢 Easy

- [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) — 🟢 Easy

- [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) — 🔴 Hard

### Core Pattern

```text
Sorted Left
     +
Sorted Right
     ↓
Two Pointers
     ↓
Sorted Result
````

### Focus

* Two-pointer merging
* Handling remaining elements
* Stable merging
* In-place merging
* Merging multiple sorted sequences

---

# 2. Merge Sort Implementation

> Understand Merge Sort from the ground up.

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡 Medium

* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡 Medium

### Implementation Practice

Implement Merge Sort yourself:

* [ ] Top-Down Merge Sort
* [ ] Bottom-Up Merge Sort
* [ ] Recursive Merge Sort
* [ ] Iterative Merge Sort
* [ ] Array-based Merge Sort
* [ ] Linked-list Merge Sort

### Core Pattern

```text
              Array
                ↓
              Divide
             /      \
         Left        Right
          ↓            ↓
       Sort           Sort
          \            /
           \          /
              Merge
                ↓
             Sorted
```

### Complexity

```text
Time:  O(N log N)
Space: O(N)
```

---

# 3. Basic Divide & Conquer

> Learn the general Divide → Solve → Combine pattern.

### Problems

* [50. Pow(x, n)](https://leetcode.com/problems/powx-n/) — 🟡 Medium

* [53. Maximum Subarray](https://leetcode.com/problems/maximum-subarray/) — 🟡 Medium

* [169. Majority Element](https://leetcode.com/problems/majority-element/) — 🟢 Easy

* [240. Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/) — 🟡 Medium

* [241. Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/) — 🟡 Medium

### Core Pattern

```text
            Problem
               ↓
             Divide
          /         \
      Problem 1    Problem 2
          ↓           ↓
       Solve        Solve
          \           /
           \         /
             Combine
```

### Questions to Ask

```text
1. What is the base case?

2. How can I divide the problem?

3. What should each recursive call return?

4. What information do I get from each half?

5. How do I combine the results?
```

---

# 4. Inversion Counting

> The first major Merge Sort application.

### Core Pattern

Instead of only merging:

```text
Left + Right
     ↓
   Merge
```

we also count relationships:

```text
Left + Right
     ↓
Count inversions
     ↓
Merge
```

### Problems

* Count Inversions in an Array — 🟡 Medium

* [775. Global and Local Inversions](https://leetcode.com/problems/global-and-local-inversions/) — 🟡 Medium

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴 Hard

* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴 Hard

### Classic Inversion

For:

```text
i < j
```

if:

```text
arr[i] > arr[j]
```

then `(i, j)` is an inversion.

Example:

```text
[2, 4, 1, 3, 5]

Inversions:

(2,1)
(4,1)
(4,3)

Answer = 3
```

### Key Insight

During merge:

```text
left[i] > right[j]
```

then all remaining elements in the left half also form inversions with `right[j]`.

```text
count += remaining_left_elements
```

---

# 5. Modified Merge Sort

> Modify the merge process to count relationships between elements.

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴 Hard

* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴 Hard

* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴 Hard

* [775. Global and Local Inversions](https://leetcode.com/problems/global-and-local-inversions/) — 🟡 Medium

### Core Pattern

```text
             Divide
                ↓
       ┌────────┴────────┐
       ↓                 ↓
   Solve Left        Solve Right
       ↓                 ↓
       └────────┬────────┘
                ↓
        Count Cross Pairs
                ↓
              Merge
```

### Sub-patterns

* Inversion counting
* Reverse pair counting
* Smaller element counting
* Cross-half counting
* Index tracking
* Prefix sum counting

### CP Priority

⭐⭐⭐⭐⭐

---

# 6. Merge Sort + Prefix Sum

> Combine Prefix Sum with Merge Sort to count valid ranges efficiently.

### Problems

* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴 Hard

### Core Transformation

```text
Original Array
      ↓
Prefix Sum
      ↓
Transform range condition
      ↓
Count valid prefix-sum pairs
      ↓
Merge Sort
```

### Important Idea

A range sum:

```text
sum(i...j)
```

can be represented using:

```text
prefix[j] - prefix[i]
```

This transforms a subarray problem into a pair-counting problem.

---

# 7. Divide & Conquer + Binary Search

> Binary Search is itself a Divide & Conquer technique.

### Problems

* [33. Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) — 🟡 Medium

* [34. Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) — 🟡 Medium

* [153. Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) — 🟡 Medium

* [154. Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) — 🔴 Hard

* [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) — 🟡 Medium

### Core Pattern

```text
Problem
   ↓
Check Middle
   ↓
Which half can contain answer?
   ↓
Discard other half
   ↓
Repeat
```

### Focus

* Search-space reduction
* Recursive binary search
* Iterative binary search
* Rotated arrays
* Duplicate handling
* Search on sorted structures

---

# 8. Advanced Divide & Conquer

> Problems where the Divide & Conquer idea is more important than the actual sorting.

### Problems

* [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) — 🔴 Hard

* [241. Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/) — 🟡 Medium

* [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) — 🟡 Medium

* [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) — 🟡 Medium

### Focus

```text
Divide
  ↓
Solve only relevant portions
  ↓
Combine
```

### Important Concepts

* Partitioning
* Recursive decomposition
* Quickselect
* Binary search on partitions
* Combining independent results

---

# 9. Divide & Conquer on Other Structures

> Apply the same paradigm beyond normal arrays.

### Problems

* [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) — 🔴 Hard

* [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) — 🔴 Hard

* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡 Medium

* [241. Different Ways to Add Parentheses](https://leetcode.com/problems/different-ways-to-add-parentheses/) — 🟡 Medium

* Closest Pair of Points — 🔴 Hard

### Focus

* Divide geometric regions
* Divide linked lists
* Divide sorted lists
* Divide expressions
* Merge independent results

---

# 10. Mastery Problems

> Solve these after completing the previous sections.

These problems combine the major Merge Sort / Divide & Conquer patterns.

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴 Hard

* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴 Hard

* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴 Hard

* [4. Median of Two Sorted Arrays](https://leetcode.com/problems/median-of-two-sorted-arrays/) — 🔴 Hard

* [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) — 🔴 Hard

---

# Recommended Problem Order

Follow this order instead of randomly solving the problems:

```text
1.  21  - Merge Two Sorted Lists
2.  88  - Merge Sorted Array
3.  912 - Sort an Array
4.  148 - Sort List
5.  50  - Pow(x, n)
6.  53  - Maximum Subarray
7.  775 - Global and Local Inversions
8.  Count Inversions
9.  315 - Count of Smaller Numbers After Self
10. 493 - Reverse Pairs
11. 327 - Count of Range Sum
12. 33  - Search in Rotated Sorted Array
13. 153 - Find Minimum in Rotated Sorted Array
14. 154 - Find Minimum in Rotated Sorted Array II
15. 378 - Kth Smallest Element in a Sorted Matrix
16. 241 - Different Ways to Add Parentheses
17. 215 - Kth Largest Element in an Array
18. 973 - K Closest Points to Origin
19. 23  - Merge k Sorted Lists
20. 4   - Median of Two Sorted Arrays
21. 218 - The Skyline Problem
22. Closest Pair of Points
```

---

# Core Patterns to Master

## 1. Standard Merge

```text
Sorted Left
     +
Sorted Right
     ↓
Two Pointers
     ↓
Sorted Array
```

## 2. Merge Sort

```text
Divide
   ↓
Solve Left
   ↓
Solve Right
   ↓
Merge
```

## 3. Inversion Counting

```text
left[i] > right[j]
       ↓
Count remaining elements in left
```

## 4. Modified Merge

```text
Sort Left
Sort Right
     ↓
Count Cross Relationships
     ↓
Merge
```

## 5. Prefix Sum + Merge Sort

```text
Subarray Problem
       ↓
Prefix Sum
       ↓
Pair Counting
       ↓
Merge Sort
```

## 6. Divide & Conquer

```text
Problem
   ↓
Divide
   ↓
Solve smaller problems
   ↓
Combine answers
```

---

# Mastery Checklist

* [ ] Understand Divide & Conquer
* [ ] Implement Merge Sort from scratch
* [ ] Implement `merge()`
* [ ] Understand recursive call tree
* [ ] Understand `O(N log N)`
* [ ] Understand auxiliary space
* [ ] Implement top-down Merge Sort
* [ ] Implement bottom-up Merge Sort
* [ ] Count inversions
* [ ] Track original indices
* [ ] Count cross-half pairs
* [ ] Solve Reverse Pairs
* [ ] Solve Count Smaller Numbers
* [ ] Solve Count Range Sum
* [ ] Understand Prefix Sum + Merge Sort
* [ ] Understand Binary Search as Divide & Conquer
* [ ] Understand partition-based D&C
* [ ] Apply D&C outside arrays
* [ ] Recognize `Divide → Solve → Combine`
* [ ] Recognize `Sort → Count → Merge`

---

