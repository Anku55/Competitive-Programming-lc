# Sorting — Algorithms, Patterns & LeetCode Problems

> A pattern-based roadmap for Competitive Programming and LeetCode.
> The goal is not just to know `sort()`, but to recognize **when sorting, partitioning, merging, counting, or ordering becomes the key transformation**.

---

## Table of Contents

* [1. Sorting Algorithm Implementation](#1-sorting-algorithm-implementation)
* [2. Insertion Sort](#2-insertion-sort)
* [3. Selection Sort](#3-selection-sort)
* [4. Bubble Sort](#4-bubble-sort)
* [5. Merge Sort](#5-merge-sort)
* [6. Modified Merge Sort](#6-modified-merge-sort)
* [7. Quick Sort & Partition](#7-quick-sort--partition)
* [8. Quickselect / K-th Element](#8-quickselect--k-th-element)
* [9. Heap Sort / Heap-Based Selection](#9-heap-sort--heap-based-selection)
* [10. Counting Sort](#10-counting-sort)
* [11. Radix Sort](#11-radix-sort)
* [12. Bucket Sort](#12-bucket-sort)
* [13. IntroSort](#13-introsort)
* [14. TimSort](#14-timsort)
* [15. Dual-Pivot QuickSort](#15-dual-pivot-quicksort)
* [16. Custom Comparator / Multiple Criteria](#16-custom-comparator--multiple-criteria)
* [17. Sort + Two Pointers](#17-sort--two-pointers)
* [18. Sort + Pair / Triplet Counting](#18-sort--pair--triplet-counting)
* [19. Sort + Greedy](#19-sort--greedy)
* [20. Sort + Intervals](#20-sort--intervals)
* [21. Sort + Sweep Line](#21-sort--sweep-line)
* [22. Sweep Line + Events](#22-sweep-line--events)
* [23. Sort + Binary Search](#23-sort--binary-search)
* [24. Sort + Offline Queries](#24-sort--offline-queries)
* [25. Sort + Heap](#25-sort--heap)
* [26. Sort + Sliding Window](#26-sort--sliding-window)
* [27. Sort + Prefix Sum](#27-sort--prefix-sum)
* [28. Sort + Median](#28-sort--median)
* [29. Sort + Contribution](#29-sort--contribution)
* [30. Sort + Absolute Difference](#30-sort--absolute-difference)
* [31. Sort + Frequency / Counting](#31-sort--frequency--counting)
* [32. Sort + Deduplication](#32-sort--deduplication)
* [33. Sort + Backtracking](#33-sort--backtracking)
* [34. Sort + String Manipulation](#34-sort--string-manipulation)
* [35. Sort + Canonical Representation](#35-sort--canonical-representation)
* [36. Sort + In-Place Rearrangement](#36-sort--in-place-rearrangement)
* [37. Sort + Nearly Sorted Data](#37-sort--nearly-sorted-data)
* [38. Sort + Coordinate Compression](#38-sort--coordinate-compression)
* [39. Sort + Fenwick Tree / Segment Tree](#39-sort--fenwick-tree--segment-tree)
* [40. Sort + Graph / DSU / Kruskal](#40-sort--graph--dsu--kruskal)
* [41. Sort + Difference Array](#41-sort--difference-array)
* [42. Sort + Divide & Conquer](#42-sort--divide--conquer)
* [43. Sort + Math](#43-sort--math)
* [44. Sort + Stable Ordering](#44-sort--stable-ordering)
* [45. Sort + Multiple Techniques](#45-sort--multiple-techniques)

---

# 1. Sorting Algorithm Implementation

Problems where the main objective is to implement or understand a sorting algorithm.

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡 Medium
* [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) — 🟡 Medium
* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡 Medium
* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡 Medium

### Practice

For **912**, implement manually:

* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Heap Sort
* Counting Sort

---

# 2. Insertion Sort

### Core Pattern

```text
Sorted Prefix | Unsorted
              ↓
        Insert current
        into sorted part
```

### Problems

* [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) — 🟡
* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡

### Related Pattern

* Nearly sorted data
* Incremental insertion
* Sorted-prefix maintenance

---

# 3. Selection Sort

### Core Pattern

```text
Find minimum/maximum
        ↓
Place it at correct position
        ↓
Repeat
```

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) — 🟡
* [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) — 🟡

### Important

The **selection concept** is more important than Selection Sort itself.

---

# 4. Bubble Sort

### Core Pattern

Repeatedly compare adjacent elements and swap inversions.

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [775. Global and Local Inversions](https://leetcode.com/problems/global-and-local-inversions/) — 🟡
* [283. Move Zeroes](https://leetcode.com/problems/move-zeroes/) — 🟢
* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡

### Related Concept

```text
Bubble Sort
    ↓
Adjacent swaps
    ↓
Inversions
```

---

# 5. Merge Sort

### Core Pattern

```text
Divide
  ↓
Sort left
  ↓
Sort right
  ↓
Merge sorted halves
```

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡
* [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) — 🟢
* [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) — 🟢
* [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) — 🔴

---

# 6. Modified Merge Sort

> Modify the merge step to **count relationships while merging**.

### Core Pattern

```text
Divide
  ↓
Solve left
  ↓
Solve right
  ↓
Count cross relationships
  ↓
Merge
```

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴
* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴
* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴
* [775. Global and Local Inversions](https://leetcode.com/problems/global-and-local-inversions/) — 🟡

### Sub-patterns

* Inversion counting
* Reverse pairs
* Count smaller elements
* Range counting

**CP Priority: ⭐⭐⭐⭐⭐**

---

# 7. Quick Sort & Partition

### Core Pattern

```text
Choose pivot
    ↓
Partition
    ↓
< pivot | pivot | > pivot
    ↓
Recurse
```

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡
* [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) — 🟢
* [922. Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/) — 🟢
* [2161. Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/) — 🟡
* [280. Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) — 🟡
* [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) — 🟡

---

# 8. Quickselect / K-th Element

Quickselect uses the **partition operation of QuickSort** but recursively processes only the relevant side.

### Problems

* [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) — 🟡
* [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) — 🟡
* [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) — 🟡
* [719. Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/) — 🔴

### Key Concept

```text
QuickSort partition
        ↓
Quickselect
        ↓
Average O(n)
```

---

# 9. Heap Sort / Heap-Based Selection

### Core Pattern

```text
Build Heap
    ↓
Repeatedly extract min/max
    ↓
Maintain heap
```

### Problems

* [215. Kth Largest Element in an Array](https://leetcode.com/problems/kth-largest-element-in-an-array/) — 🟡
* [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) — 🟡
* [692. Top K Frequent Words](https://leetcode.com/problems/top-k-frequent-words/) — 🟡
* [973. K Closest Points to Origin](https://leetcode.com/problems/k-closest-points-to-origin/) — 🟡
* [378. Kth Smallest Element in a Sorted Matrix](https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/) — 🟡
* [703. Kth Largest Element in a Stream](https://leetcode.com/problems/kth-largest-element-in-a-stream/) — 🟢

---

# 10. Counting Sort

### Core Pattern

```text
value
  ↓
frequency[value]++
  ↓
reconstruct sorted order
```

Best when the value range is small.

### Problems

* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡
* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [1051. Height Checker](https://leetcode.com/problems/height-checker/) — 🟢
* [1122. Relative Sort Array](https://leetcode.com/problems/relative-sort-array/) — 🟢
* [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/) — 🟢
* [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) — 🟡
* [1331. Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/) — 🟢

---

# 11. Radix Sort

### Core Pattern

```text
ones digit
    ↓
tens digit
    ↓
hundreds digit
    ↓
...
```

Usually uses stable Counting Sort for each digit.

### Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/) — 🟡
* [1051. Height Checker](https://leetcode.com/problems/height-checker/) — 🟢

### Focus

Understand:

* LSD radix sort
* MSD radix sort
* Stable digit sorting
* Counting sort as a subroutine

---

# 12. Bucket Sort

### Core Pattern

```text
Values
  ↓
Distribute into buckets
  ↓
Process each bucket
  ↓
Combine
```

### Problems

* [164. Maximum Gap](https://leetcode.com/problems/maximum-gap/) — 🟡
* [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) — 🟡
* [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) — 🟡
* [220. Contains Duplicate III](https://leetcode.com/problems/contains-duplicate-iii/) — 🔴

---

# 13. IntroSort

> Hybrid: **QuickSort + HeapSort + Insertion Sort**

There is no major LeetCode pattern specifically requiring IntroSort.

### Study Through Its Components

**QuickSort**

* 912 — Sort an Array
* 215 — Kth Largest Element
* 75 — Sort Colors

**HeapSort / Heap**

* 215 — Kth Largest Element
* 347 — Top K Frequent Elements
* 973 — K Closest Points

**Insertion Sort**

* 147 — Insertion Sort List
* 148 — Sort List

### Goal

Understand why production sorting implementations combine algorithms:

```text
QuickSort
   ↓
bad recursion depth
   ↓
HeapSort fallback

small partition
   ↓
Insertion Sort
```

---

# 14. TimSort

> Hybrid: **Insertion Sort + Merge Sort**, optimized around naturally ordered runs.

### Problems

* [88. Merge Sorted Array](https://leetcode.com/problems/merge-sorted-array/) — 🟢
* [21. Merge Two Sorted Lists](https://leetcode.com/problems/merge-two-sorted-lists/) — 🟢
* [23. Merge k Sorted Lists](https://leetcode.com/problems/merge-k-sorted-lists/) — 🔴
* [148. Sort List](https://leetcode.com/problems/sort-list/) — 🟡
* [581. Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) — 🟡
* [896. Monotonic Array](https://leetcode.com/problems/monotonic-array/) — 🟢

### Focus

Understand:

```text
Find naturally sorted runs
        ↓
Insertion-sort small runs
        ↓
Merge runs
```

---

# 15. Dual-Pivot QuickSort

> QuickSort using two pivots to create three partitions.

```text
< p1 | p1 ... p2 | > p2
```

### Related Problems

* [912. Sort an Array](https://leetcode.com/problems/sort-an-array/) — 🟡
* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡
* [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) — 🟡
* [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) — 🟢
* [922. Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/) — 🟢
* [2161. Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/) — 🟡

### Most Important Concept

**3-way partitioning**, especially problem 75.

---

# 16. Custom Comparator / Multiple Criteria

### Core Pattern

Define the ordering yourself.

### Problems

* [179. Largest Number](https://leetcode.com/problems/largest-number/) — 🟡
* [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) — 🟡
* [791. Custom Sort String](https://leetcode.com/problems/custom-sort-string/) — 🟡
* [937. Reorder Data in Log Files](https://leetcode.com/problems/reorder-data-in-log-files/) — 🟢
* [1122. Relative Sort Array](https://leetcode.com/problems/relative-sort-array/) — 🟢
* [1356. Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/) — 🟢
* [1366. Rank Teams by Votes](https://leetcode.com/problems/rank-teams-by-votes/) — 🟡
* [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/) — 🟢

---

# 17. Sort + Two Pointers

### Core Pattern

```text
sort
 ↓
left ---------------- right
```

### Problems

* [167. Two Sum II](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/) — 🟡
* [15. 3Sum](https://leetcode.com/problems/3sum/) — 🟡
* [16. 3Sum Closest](https://leetcode.com/problems/3sum-closest/) — 🟡
* [18. 4Sum](https://leetcode.com/problems/4sum/) — 🟡
* [259. 3Sum Smaller](https://leetcode.com/problems/3sum-smaller/) — 🟡
* [611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/) — 🟡
* [923. 3Sum With Multiplicity](https://leetcode.com/problems/3sum-with-multiplicity/) — 🟡
* [2824. Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/) — 🟢
* [1679. Max Number of K-Sum Pairs](https://leetcode.com/problems/max-number-of-k-sum-pairs/) — 🟡
* [881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) — 🟡

---

# 18. Sort + Pair / Triplet Counting

### Problems

* [15. 3Sum](https://leetcode.com/problems/3sum/) — 🟡
* [18. 4Sum](https://leetcode.com/problems/4sum/) — 🟡
* [259. 3Sum Smaller](https://leetcode.com/problems/3sum-smaller/) — 🟡
* [611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/) — 🟡
* [2824. Count Pairs Whose Sum is Less than Target](https://leetcode.com/problems/count-pairs-whose-sum-is-less-than-target/) — 🟢
* [1498. Number of Subsequences That Satisfy the Given Sum Condition](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/) — 🟡
* [719. Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/) — 🔴

---

# 19. Sort + Greedy

### Problems

* [455. Assign Cookies](https://leetcode.com/problems/assign-cookies/) — 🟢
* [881. Boats to Save People](https://leetcode.com/problems/boats-to-save-people/) — 🟡
* [1029. Two City Scheduling](https://leetcode.com/problems/two-city-scheduling/) — 🟡
* [435. Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) — 🟡
* [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) — 🟡
* [646. Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/) — 🟡
* [1005. Maximize Sum Of Array After K Negations](https://leetcode.com/problems/maximize-sum-of-array-after-k-negations/) — 🟢
* [1710. Maximum Units on a Truck](https://leetcode.com/problems/maximum-units-on-a-truck/) — 🟢
* [826. Most Profit Assigning Work](https://leetcode.com/problems/most-profit-assigning-work/) — 🟡
* [630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/) — 🔴
* [857. Minimum Cost to Hire K Workers](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/) — 🔴
* [1353. Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/) — 🟡
* [1383. Maximum Performance of a Team](https://leetcode.com/problems/maximum-performance-of-a-team/) — 🔴

---

# 20. Sort + Intervals

### A. Merge Intervals

* [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/) — 🟡
* [57. Insert Interval](https://leetcode.com/problems/insert-interval/) — 🟡
* [986. Interval List Intersections](https://leetcode.com/problems/interval-list-intersections/) — 🟡

### B. Interval Scheduling

* [435. Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) — 🟡
* [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) — 🟡
* [646. Maximum Length of Pair Chain](https://leetcode.com/problems/maximum-length-of-pair-chain/) — 🟡

### C. Interval Coverage

* [1288. Remove Covered Intervals](https://leetcode.com/problems/remove-covered-intervals/) — 🟡
* [2406. Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) — 🟡

---

# 21. Sort + Sweep Line

### Core Pattern

```text
sort by coordinate
        ↓
sweep left → right
        ↓
maintain active state
```

### Problems

* [56. Merge Intervals](https://leetcode.com/problems/merge-intervals/) — 🟡
* [435. Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/) — 🟡
* [452. Minimum Number of Arrows to Burst Balloons](https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/) — 🟡
* [253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) — 🟡
* [1094. Car Pooling](https://leetcode.com/problems/car-pooling/) — 🟡
* [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) — 🔴
* [732. My Calendar III](https://leetcode.com/problems/my-calendar-iii/) — 🔴
* [2406. Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) — 🟡

---

# 22. Sweep Line + Events

Transform intervals into events.

```text
start → +1
end   → -1
```

### Problems

* [253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) — 🟡
* [1094. Car Pooling](https://leetcode.com/problems/car-pooling/) — 🟡
* [218. The Skyline Problem](https://leetcode.com/problems/the-skyline-problem/) — 🔴
* [732. My Calendar III](https://leetcode.com/problems/my-calendar-iii/) — 🔴
* [2406. Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) — 🟡

---

# 23. Sort + Binary Search

### Core Pattern

```text
sort
 ↓
lower_bound / upper_bound
```

### Problems

* [34. Find First and Last Position](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) — 🟡
* [35. Search Insert Position](https://leetcode.com/problems/search-insert-position/) — 🟢
* [436. Find Right Interval](https://leetcode.com/problems/find-right-interval/) — 🟡
* [658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/) — 🟡
* [826. Most Profit Assigning Work](https://leetcode.com/problems/most-profit-assigning-work/) — 🟡
* [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) — 🔴
* [1851. Minimum Interval to Include Each Query](https://leetcode.com/problems/minimum-interval-to-include-each-query/) — 🔴
* [2054. Two Best Non-Overlapping Events](https://leetcode.com/problems/two-best-non-overlapping-events/) — 🟡
* [1751. Maximum Number of Events That Can Be Attended II](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/) — 🔴

---

# 24. Sort + Offline Queries

### Core Pattern

```text
Sort input
+
Sort queries
        ↓
Process incrementally
```

### Problems

* [1851. Minimum Interval to Include Each Query](https://leetcode.com/problems/minimum-interval-to-include-each-query/) — 🔴
* [1697. Checking Existence of Edge Length Limited Paths](https://leetcode.com/problems/checking-existence-of-edge-length-limited-paths/) — 🔴
* [2071. Maximum Number of Tasks You Can Assign](https://leetcode.com/problems/maximum-number-of-tasks-you-can-assign/) — 🔴
* [1847. Closest Room](https://leetcode.com/problems/closest-room/) — 🔴
* [2503. Maximum Number of Points From Grid Queries](https://leetcode.com/problems/maximum-number-of-points-from-grid-queries/) — 🔴

---

# 25. Sort + Heap

### Core Pattern

```text
Sort one dimension
        ↓
Process sequentially
        ↓
Heap maintains useful candidates
```

### Problems

* [253. Meeting Rooms II](https://leetcode.com/problems/meeting-rooms-ii/) — 🟡
* [630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/) — 🔴
* [857. Minimum Cost to Hire K Workers](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/) — 🔴
* [1353. Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/) — 🟡
* [1383. Maximum Performance of a Team](https://leetcode.com/problems/maximum-performance-of-a-team/) — 🔴
* [1834. Single-Threaded CPU](https://leetcode.com/problems/single-threaded-cpu/) — 🟡
* [1851. Minimum Interval to Include Each Query](https://leetcode.com/problems/minimum-interval-to-include-each-query/) — 🔴
* [2402. Meeting Rooms III](https://leetcode.com/problems/meeting-rooms-iii/) — 🔴

---

# 26. Sort + Sliding Window

### Problems

* [1838. Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/) — 🟡
* [1498. Number of Subsequences That Satisfy the Given Sum Condition](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/) — 🟡
* [2779. Maximum Beauty of an Array After Applying Operation](https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/) — 🟡
* [948. Bag of Tokens](https://leetcode.com/problems/bag-of-tokens/) — 🟡

---

# 27. Sort + Prefix Sum

### Core Pattern

```text
sort
 ↓
prefix sum
 ↓
calculate range cost in O(1)
```

### Problems

* [1838. Frequency of the Most Frequent Element](https://leetcode.com/problems/frequency-of-the-most-frequent-element/) — 🟡
* [462. Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) — 🟡
* [2448. Minimum Cost to Make Array Equal](https://leetcode.com/problems/minimum-cost-to-make-array-equal/) — 🔴
* [1703. Minimum Adjacent Swaps for K Consecutive Ones](https://leetcode.com/problems/minimum-adjacent-swaps-for-k-consecutive-ones/) — 🔴
* [1685. Sum of Absolute Differences in a Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/) — 🟢

---

# 28. Sort + Median

### Core Pattern

Sorting exposes the median.

For minimizing:

```text
Σ |xi - x|
```

the optimal `x` is a median.

### Problems

* [462. Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) — 🟡
* [296. Best Meeting Point](https://leetcode.com/problems/best-meeting-point/) — 🔴
* [2448. Minimum Cost to Make Array Equal](https://leetcode.com/problems/minimum-cost-to-make-array-equal/) — 🔴
* [1703. Minimum Adjacent Swaps for K Consecutive Ones](https://leetcode.com/problems/minimum-adjacent-swaps-for-k-consecutive-ones/) — 🔴

---

# 29. Sort + Contribution

Calculate each element's contribution instead of enumerating all pairs/subarrays.

### Problems

* [1685. Sum of Absolute Differences in a Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/) — 🟢
* [891. Sum of Subsequence Widths](https://leetcode.com/problems/sum-of-subsequence-widths/) — 🟡
* [2448. Minimum Cost to Make Array Equal](https://leetcode.com/problems/minimum-cost-to-make-array-equal/) — 🔴
* [296. Best Meeting Point](https://leetcode.com/problems/best-meeting-point/) — 🔴

---

# 30. Sort + Absolute Difference

Sorting turns absolute differences into directional differences.

### Problems

* [1200. Minimum Absolute Difference](https://leetcode.com/problems/minimum-absolute-difference/) — 🟢
* [1685. Sum of Absolute Differences in a Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/) — 🟢
* [462. Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) — 🟡
* [719. Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/) — 🔴

---

# 31. Sort + Frequency / Counting

### Problems

* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡
* [1051. Height Checker](https://leetcode.com/problems/height-checker/) — 🟢
* [1122. Relative Sort Array](https://leetcode.com/problems/relative-sort-array/) — 🟢
* [1636. Sort Array by Increasing Frequency](https://leetcode.com/problems/sort-array-by-increasing-frequency/) — 🟢
* [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) — 🟡
* [347. Top K Frequent Elements](https://leetcode.com/problems/top-k-frequent-elements/) — 🟡
* [1331. Rank Transform of an Array](https://leetcode.com/problems/rank-transform-of-an-array/) — 🟢
* [1356. Sort Integers by The Number of 1 Bits](https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/) — 🟢

---

# 32. Sort + Deduplication

### Core Pattern

```text
sort
 ↓
equal values become adjacent
 ↓
skip duplicates
```

### Problems

* [15. 3Sum](https://leetcode.com/problems/3sum/) — 🟡
* [18. 4Sum](https://leetcode.com/problems/4sum/) — 🟡
* [26. Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) — 🟢
* [80. Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/) — 🟡
* [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) — 🟡
* [47. Permutations II](https://leetcode.com/problems/permutations-ii/) — 🟡
* [90. Subsets II](https://leetcode.com/problems/subsets-ii/) — 🟡
* [1200. Minimum Absolute Difference](https://leetcode.com/problems/minimum-absolute-difference/) — 🟢

---

# 33. Sort + Backtracking

### Core Pattern

Sorting helps with duplicate skipping and pruning.

### Problems

* [39. Combination Sum](https://leetcode.com/problems/combination-sum/) — 🟡
* [40. Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) — 🟡
* [47. Permutations II](https://leetcode.com/problems/permutations-ii/) — 🟡
* [90. Subsets II](https://leetcode.com/problems/subsets-ii/) — 🟡
* [698. Partition to K Equal Sum Subsets](https://leetcode.com/problems/partition-to-k-equal-sum-subsets/) — 🟡
* [473. Matchsticks to Square](https://leetcode.com/problems/matchsticks-to-square/) — 🟡

---

# 34. Sort + String Manipulation

### A. Character Sorting

* [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) — 🟢
* [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/) — 🟡
* [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) — 🟡
* [451. Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) — 🟡

### B. Custom String Ordering

* [179. Largest Number](https://leetcode.com/problems/largest-number/) — 🟡
* [791. Custom Sort String](https://leetcode.com/problems/custom-sort-string/) — 🟡
* [937. Reorder Data in Log Files](https://leetcode.com/problems/reorder-data-in-log-files/) — 🟢
* [1366. Rank Teams by Votes](https://leetcode.com/problems/rank-teams-by-votes/) — 🟡

---

# 35. Sort + Canonical Representation

Convert equivalent objects into a common representation.

### Problems

* [49. Group Anagrams](https://leetcode.com/problems/group-anagrams/) — 🟡
* [242. Valid Anagram](https://leetcode.com/problems/valid-anagram/) — 🟢
* [438. Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/) — 🟡
* [187. Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/) — 🟡

### Core Idea

```text
different arrangement
        ↓
canonical form
        ↓
compare / group
```

---

# 36. Sort + In-Place Rearrangement

### Core Pattern

Sort/rearrange while minimizing extra memory.

### Problems

* [75. Sort Colors](https://leetcode.com/problems/sort-colors/) — 🟡
* [905. Sort Array By Parity](https://leetcode.com/problems/sort-array-by-parity/) — 🟢
* [922. Sort Array By Parity II](https://leetcode.com/problems/sort-array-by-parity-ii/) — 🟢
* [280. Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) — 🟡
* [324. Wiggle Sort II](https://leetcode.com/problems/wiggle-sort-ii/) — 🟡
* [2161. Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/) — 🟡

---

# 37. Sort + Nearly Sorted Data

### Core Idea

When the input is almost sorted, a specialized method can outperform/generalize normal sorting.

### Problems

* [147. Insertion Sort List](https://leetcode.com/problems/insertion-sort-list/) — 🟡
* [581. Shortest Unsorted Continuous Subarray](https://leetcode.com/problems/shortest-unsorted-continuous-subarray/) — 🟡
* [658. Find K Closest Elements](https://leetcode.com/problems/find-k-closest-elements/) — 🟡
* [280. Wiggle Sort](https://leetcode.com/problems/wiggle-sort/) — 🟡

### Related Techniques

* Insertion Sort
* Min Heap
* Two pointers

---

# 38. Sort + Coordinate Compression

### Core Pattern

```text
Huge values
    ↓
Sort unique values
    ↓
Map values → ranks
```

Example:

```text
[1000000, 5, 100]

→ [5, 100, 1000000]

→ [2, 0, 1]
```

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴
* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴
* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴
* [2179. Count Good Triplets in an Array](https://leetcode.com/problems/count-good-triplets-in-an-array/) — 🔴

---

# 39. Sort + Fenwick Tree / Segment Tree

Sorting compresses or orders values; a tree structure handles dynamic counting/range queries.

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴
* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴
* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴
* [2179. Count Good Triplets in an Array](https://leetcode.com/problems/count-good-triplets-in-an-array/) — 🔴

### Combination

```text
Sort
 ↓
Coordinate Compression
 ↓
Fenwick Tree / Segment Tree
 ↓
Count
```

---

# 40. Sort + Graph / DSU / Kruskal

### Core Pattern

```text
Sort edges by weight
        ↓
Process smallest edge
        ↓
DSU
        ↓
Kruskal
```

### Problems

* [1584. Min Cost to Connect All Points](https://leetcode.com/problems/min-cost-to-connect-all-points/) — 🟡
* [1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree](https://leetcode.com/problems/find-critical-and-pseudo-critical-edges-in-minimum-spanning-tree/) — 🔴
* [1135. Connecting Cities With Minimum Cost](https://leetcode.com/problems/connecting-cities-with-minimum-cost/) — 🟡
* [1101. The Earliest Moment When Everyone Become Friends](https://leetcode.com/problems/the-earliest-moment-when-everyone-become-friends/) — 🟡
* [1631. Path With Minimum Effort](https://leetcode.com/problems/path-with-minimum-effort/) — 🟡

---

# 41. Sort + Difference Array

### Core Pattern

Represent range operations as boundary changes.

```text
[l, r]

l     → +x
r + 1 → -x
```

### Problems

* [1094. Car Pooling](https://leetcode.com/problems/car-pooling/) — 🟡
* [1109. Corporate Flight Bookings](https://leetcode.com/problems/corporate-flight-bookings/) — 🟡
* [2406. Divide Intervals Into Minimum Number of Groups](https://leetcode.com/problems/divide-intervals-into-minimum-number-of-groups/) — 🟡
* [2779. Maximum Beauty of an Array After Applying Operation](https://leetcode.com/problems/maximum-beauty-of-an-array-after-applying-operation/) — 🟡

---

# 42. Sort + Divide & Conquer

### Core Pattern

```text
Divide
 ↓
Solve
 ↓
Combine
 ↓
Count relationships during combine
```

### Problems

* [315. Count of Smaller Numbers After Self](https://leetcode.com/problems/count-of-smaller-numbers-after-self/) — 🔴
* [327. Count of Range Sum](https://leetcode.com/problems/count-of-range-sum/) — 🔴
* [493. Reverse Pairs](https://leetcode.com/problems/reverse-pairs/) — 🔴
* [775. Global and Local Inversions](https://leetcode.com/problems/global-and-local-inversions/) — 🟡

---

# 43. Sort + Math

### Problems

* [1200. Minimum Absolute Difference](https://leetcode.com/problems/minimum-absolute-difference/) — 🟢
* [1502. Can Make Arithmetic Progression From Sequence](https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/) — 🟢
* [462. Minimum Moves to Equal Array Elements II](https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/) — 🟡
* [1685. Sum of Absolute Differences in a Sorted Array](https://leetcode.com/problems/sum-of-absolute-differences-in-a-sorted-array/) — 🟢
* [891. Sum of Subsequence Widths](https://leetcode.com/problems/sum-of-subsequence-widths/) — 🟡
* [1498. Number of Subsequences That Satisfy the Given Sum Condition](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/) — 🟡
* [2448. Minimum Cost to Make Array Equal](https://leetcode.com/problems/minimum-cost-to-make-array-equal/) — 🔴

---

# 44. Sort + Stable Ordering

### Core Idea

Preserve the relative order of equivalent elements.

Important when using:

```cpp
stable_sort(...)
```

or when designing a sorting algorithm such as Merge Sort / TimSort.

### Problems

* [937. Reorder Data in Log Files](https://leetcode.com/problems/reorder-data-in-log-files/) — 🟢
* [1122. Relative Sort Array](https://leetcode.com/problems/relative-sort-array/) — 🟢
* [406. Queue Reconstruction by Height](https://leetcode.com/problems/queue-reconstruction-by-height/) — 🟡
* [791. Custom Sort String](https://leetcode.com/problems/custom-sort-string/) — 🟡

---

# 45. Sort + Multiple Techniques

These are the problems where several sorting patterns combine.

### Sort + Greedy + Heap

* [630. Course Schedule III](https://leetcode.com/problems/course-schedule-iii/) — 🔴
* [857. Minimum Cost to Hire K Workers](https://leetcode.com/problems/minimum-cost-to-hire-k-workers/) — 🔴
* [1353. Maximum Number of Events That Can Be Attended](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended/) — 🟡
* [1834. Single-Threaded CPU](https://leetcode.com/problems/single-threaded-cpu/) — 🟡
* [2402. Meeting Rooms III](https://leetcode.com/problems/meeting-rooms-iii/) — 🔴

### Sort + Binary Search + DP

* [1235. Maximum Profit in Job Scheduling](https://leetcode.com/problems/maximum-profit-in-job-scheduling/) — 🔴
* [1751. Maximum Number of Events That Can Be Attended II](https://leetcode.com/problems/maximum-number-of-events-that-can-be-attended-ii/) — 🔴
* [2054. Two Best Non-Overlapping Events](https://leetcode.com/problems/two-best-non-overlapping-events/) — 🟡

### Sort + Binary Search + Heap

* [1851. Minimum Interval to Include Each Query](https://leetcode.com/problems/minimum-interval-to-include-each-query/) — 🔴
* [826. Most Profit Assigning Work](https://leetcode.com/problems/most-profit-assigning-work/) — 🟡

### Sort + Two Pointers + Binary Search

* [611. Valid Triangle Number](https://leetcode.com/problems/valid-triangle-number/) — 🟡
* [719. Find K-th Smallest Pair Distance](https://leetcode.com/problems/find-k-th-smallest-pair-distance/) — 🔴
* [1498. Number of Subsequences That Satisfy the Given Sum Condition](https://leetcode.com/problems/number-of-subsequences-that-satisfy-the-given-sum-condition/) — 🟡

---

#  Recommended Learning Order

Don't solve the README top-to-bottom blindly. For **CP + LeetCode**, I'd actually study it in this order:

```text
1. Basic Sorting
      ↓
2. Insertion / Selection / Bubble
      ↓
3. Merge Sort
      ↓
4. QuickSort + Partition
      ↓
5. Counting Sort
      ↓
6. Heap / HeapSort
      ↓
7. Quickselect
      ↓
8. Custom Comparator
      ↓
9. Sort + Two Pointers
      ↓
10. Sort + Deduplication
      ↓
11. Sort + Greedy
      ↓
12. Sort + Intervals
      ↓
13. Sort + Sweep Line
      ↓
14. Sort + Binary Search
      ↓
15. Sort + Heap
      ↓
16. Sort + Prefix Sum
      ↓
17. Sort + Median
      ↓
18. Sort + Sliding Window
      ↓
19. Sort + Offline Queries
      ↓
20. Modified Merge Sort
      ↓
21. Coordinate Compression
      ↓
22. Fenwick / Segment Tree
      ↓
23. Radix / Bucket
      ↓
24. Sort + DSU / Kruskal
```

##  Highest-Value Sorting Patterns for CP

If you eventually want to reduce this huge list to the **core patterns you absolutely need to recognize**, prioritize:

1. **Merge Sort + Inversion Counting**
2. **QuickSort Partition**
3. **Quickselect**
4. **Counting Sort**
5. **Sort + Two Pointers**
6. **Sort + Greedy**
7. **Sort + Intervals**
8. **Sort + Sweep Line**
9. **Sort + Binary Search**
10. **Sort + Heap**
11. **Sort + Prefix Sum**
12. **Sort + Custom Comparator**
13. **Sort + Deduplication**
14. **Sort + Coordinate Compression**
15. **Sort + Offline Queries**
16. **Sort + DSU/Kruskal**

