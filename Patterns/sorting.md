
```text
Sorting
│
├── Sort + Two Pointers
├── Sort + Greedy
├── Sort + Sweep
├── Sort + Binary Search
├── Sort + Heap
├── Sort + Sliding Window
├── Sort + Prefix Sum
├── Sort + Median
├── Sort + Custom Comparator
├── Sort + Counting/Frequency
├── Sort + Coordinate Compression
├── Sort + Divide & Conquer
├── Sort + Contribution
├── Sort + Intervals
├── Sort + K-th / Selection
├── Sort + Pair Counting
├── Sort + Deduplication
├── Sort + Difference Array
├── Sort + Offline Queries
└── Sort + Multiple Criteria
```

That's the level of categorization you're looking for.

---

# Sorting — DSA Sub-Pattern List

I'm going to make this as a **study sheet**, similar to your 31-pattern list.

---

## 1. Sort + Two Pointers

Sort to create an ordering, then use two pointers to efficiently search pairs/triples.

### Problems

* **167. Two Sum II**
* **15. 3Sum**
* **16. 3Sum Closest**
* **18. 4Sum**
* **259. 3Sum Smaller**
* **611. Valid Triangle Number**
* **923. 3Sum With Multiplicity**
* **2824. Count Pairs Whose Sum is Less than Target**
* **1498. Number of Subsequences That Satisfy the Given Sum Condition**
* **948. Bag of Tokens**
* **881. Boats to Save People**
* **1679. Max Number of K-Sum Pairs**

### Recognition

```text
Need pairs/triples
+
order doesn't initially matter
+
condition based on sum / difference
        ↓
sort + two pointers
```

---

# 2. Sort + Greedy

Sorting establishes the order in which greedy choices should be made.

### Problems

* **455. Assign Cookies**
* **1029. Two City Scheduling**
* **435. Non-overlapping Intervals**
* **452. Minimum Number of Arrows to Burst Balloons**
* **646. Maximum Length of Pair Chain**
* **881. Boats to Save People**
* **1005. Maximize Sum Of Array After K Negations**
* **1710. Maximum Units on a Truck**
* **826. Most Profit Assigning Work**
* **1353. Maximum Number of Events That Can Be Attended**
* **630. Course Schedule III**
* **1383. Maximum Performance of a Team**
* **857. Minimum Cost to Hire K Workers**

### Recognition

```text
"Choose the best available..."
+
there is an ordering that makes the greedy decision obvious
        ↓
sort by the correct criterion
        ↓
greedy
```

---

# 3. Sort + Interval Merging

Sort intervals by their starting/ending points and process them sequentially.

### Problems

* **56. Merge Intervals**
* **57. Insert Interval**
* **986. Interval List Intersections**
* **1288. Remove Covered Intervals**
* **435. Non-overlapping Intervals**
* **452. Minimum Number of Arrows to Burst Balloons**
* **646. Maximum Length of Pair Chain**
* **2406. Divide Intervals Into Minimum Number of Groups**

### Core structure

```text
sort by start

[current interval]
       ↓
overlap?
 ┌─────┴─────┐
yes          no
 ↓            ↓
merge       start new
```

---

# 4. Sort + Sweep Line

Sort objects/events and sweep from left → right while maintaining some state.

### Problems

* **56. Merge Intervals**
* **435. Non-overlapping Intervals**
* **452. Minimum Number of Arrows**
* **253. Meeting Rooms II**
* **1094. Car Pooling**
* **218. The Skyline Problem**
* **732. My Calendar III**
* **2406. Divide Intervals Into Minimum Number of Groups**
* **1851. Minimum Interval to Include Each Query**

### Recognition

```text
Events have a natural coordinate/order
+
need to know what is currently active
        ↓
sort events
        ↓
sweep
```

---

# 5. Sort + Event Transformation

Instead of sorting intervals directly, convert them into **events**.

Example:

```text
[start, end]

becomes:

(start, +1)
(end, -1)
```

Then sort events.

### Problems

* **253. Meeting Rooms II**
* **1094. Car Pooling**
* **732. My Calendar III**
* **218. The Skyline Problem**
* **2406. Divide Intervals Into Minimum Number of Groups**
* **1109. Corporate Flight Bookings**

### Recognition

Whenever the question asks:

> How many things are active simultaneously?

think:

```text
start → +1
end   → -1
sort
sweep
```

---

# 6. Sort + Binary Search

Sort once, then use `lower_bound` / `upper_bound` or binary search to locate useful elements.

### Problems

* **34. Find First and Last Position**
* **35. Search Insert Position**
* **436. Find Right Interval**
* **658. Find K Closest Elements**
* **826. Most Profit Assigning Work**
* **981. Time Based Key-Value Store**
* **1235. Maximum Profit in Job Scheduling**
* **1851. Minimum Interval to Include Each Query**
* **2054. Two Best Non-Overlapping Events**
* **1751. Maximum Number of Events That Can Be Attended II**

### Recognition

```text
sort
+
"find first element >= x"
"find last element <= x"
"find next interval"
        ↓
lower_bound / upper_bound
```

---

# 7. Sort + Heap

Sort one dimension, then use a heap to maintain the best/current candidates.

### Problems

* **253. Meeting Rooms II**
* **630. Course Schedule III**
* **857. Minimum Cost to Hire K Workers**
* **1353. Maximum Number of Events That Can Be Attended**
* **1383. Maximum Performance of a Team**
* **1834. Single-Threaded CPU**
* **1851. Minimum Interval to Include Each Query**
* **973. K Closest Points to Origin**
* **215. Kth Largest Element in an Array**

### Recognition

```text
Need ordered processing
+
need dynamically choose min/max candidate
        ↓
sort + heap
```

---

# 8. Sort + Sliding Window

Sorting allows a contiguous range in sorted order to represent the optimal candidate set.

### Problems

* **1838. Frequency of the Most Frequent Element**
* **1498. Number of Subsequences That Satisfy the Given Sum Condition**
* **2779. Maximum Beauty of an Array After Applying Operation**
* **948. Bag of Tokens**
* **1004-style variants involving sorted values**

### Core idea

```text
sort
 ↓
left -------- right
 ↓              ↓
maintain condition
```

---

# 9. Sort + Prefix Sum

After sorting, prefix sums allow fast calculation of the cost of a range.

### Problems

* **1838. Frequency of the Most Frequent Element**
* **462. Minimum Moves to Equal Array Elements II**
* **2448. Minimum Cost to Make Array Equal**
* **1703. Minimum Adjacent Swaps for K Consecutive Ones**
* **296. Best Meeting Point**

### Important idea

If:

```text
a = sorted array
prefix[i] = sum of first i elements
```

then:

```text
sum(l...r)
```

becomes `O(1)`.

This turns many optimization problems into:

```text
sort + prefix sum + mathematical cost
```

---

# 10. Sort + Median

Sorting exposes the median, which minimizes absolute-distance cost.

### Problems

* **462. Minimum Moves to Equal Array Elements II**
* **296. Best Meeting Point**
* **2448. Minimum Cost to Make Array Equal**
* **1703. Minimum Adjacent Swaps for K Consecutive Ones**

### Core mathematical pattern

For:

```text
min Σ |xi - x|
```

the optimal `x` is a **median**.

This is a very important CP pattern.

---

# 11. Sort + Custom Comparator

The problem isn't merely sorting; you have to **define the ordering**.

### Problems

* **179. Largest Number**
* **937. Reorder Data in Log Files**
* **791. Custom Sort String**
* **1122. Relative Sort Array**
* **1356. Sort Integers by The Number of 1 Bits**
* **1366. Rank Teams by Votes**
* **1636. Sort Array by Increasing Frequency**
* **406. Queue Reconstruction by Height**

### Recognition

If the problem says:

> "Sort according to..."

or the desired order isn't normal numerical/lexicographical order:

```text
custom comparator
```

is probably involved.

---

# 12. Sort + Multiple Criteria

Sort by one property; break ties using another.

Typical comparator:

```cpp
if (a.first != b.first)
    return a.first < b.first;

return a.second > b.second;
```

### Problems

* **406. Queue Reconstruction by Height**
* **1366. Rank Teams by Votes**
* **1636. Sort Array by Increasing Frequency**
* **937. Reorder Data in Log Files**
* **1356. Sort Integers by Number of 1 Bits**
* **791. Custom Sort String**

### Recognition

```text
primary key
+
secondary key
+
possibly tertiary key
```

---

# 13. Sort + Frequency / Counting

When values belong to a limited range, sorting can be replaced or combined with frequency counting.

### Problems

* **75. Sort Colors**
* **1051. Height Checker**
* **1122. Relative Sort Array**
* **1636. Sort Array by Increasing Frequency**
* **451. Sort Characters By Frequency**
* **347. Top K Frequent Elements**
* **1331. Rank Transform of an Array**

### Recognition

If:

```text
maxValue - minValue
```

is small, think:

```text
frequency array / counting sort
```

instead of `O(n log n)` sorting.

---

# 14. Sort + Deduplication

Sort equal values next to each other, making duplicate handling easy.

### Problems

* **26. Remove Duplicates from Sorted Array**
* **80. Remove Duplicates from Sorted Array II**
* **15. 3Sum**
* **18. 4Sum**
* **90. Subsets II**
* **47. Permutations II**
* **442. Find All Duplicates in an Array**
* **217. Contains Duplicate**
* **1200. Minimum Absolute Difference**

### Recognition

```text
Need to avoid duplicate combinations
        ↓
sort
        ↓
equal elements become adjacent
        ↓
skip duplicates
```

This is **extremely important for backtracking + sorting**.

---

# 15. Sort + Backtracking

Sorting allows duplicate elimination and/or pruning.

### Problems

* **39. Combination Sum**
* **40. Combination Sum II**
* **47. Permutations II**
* **90. Subsets II**
* **698. Partition to K Equal Sum Subsets**
* **473. Matchsticks to Square**

### Core idea

```text
sort
 ↓
choose
 ↓
skip duplicates / prune
 ↓
backtrack
```

---

# 16. Sort + Pair Counting

Sort the values so that for every element you can count compatible previous/future elements efficiently.

### Problems

* **167. Two Sum II**
* **2824. Count Pairs Whose Sum is Less Than Target**
* **493. Reverse Pairs**
* **315. Count of Smaller Numbers After Self**
* **327. Count of Range Sum**
* **611. Valid Triangle Number**
* **1498. Number of Subsequences...**

This category becomes particularly important when you combine sorting with:

```text
binary search
Fenwick Tree
segment tree
two pointers
```

---

# 17. Sort + Contribution

Sorting establishes relationships that let you calculate each element's contribution.

### Problems

* **1685. Sum of Absolute Differences in a Sorted Array**
* **891. Sum of Subsequence Widths**
* **2611. Mice and Cheese**
* **2448. Minimum Cost to Make Array Equal**
* **296. Best Meeting Point**

### Example concept

For sorted:

```text
a[0] <= a[1] <= ... <= a[n-1]
```

you can derive:

```text
contribution of a[i]
```

using prefix sums instead of iterating over every pair.

---

# 18. Sort + Absolute Difference

Sorting turns absolute differences into directional differences.

Instead of repeatedly dealing with:

```text
abs(a[i] - a[j])
```

you know:

```text
if i < j:

a[j] - a[i]
```

### Problems

* **1685. Sum of Absolute Differences in a Sorted Array**
* **1200. Minimum Absolute Difference**
* **462. Minimum Moves to Equal Array Elements II**
* **719. Find K-th Smallest Pair Distance**
* **1497. Check If Array Pairs Are Divisible by K**

---

# 19. Sort + K-th Element

Sometimes you don't need the whole sorted array; you need the **k-th smallest/largest**.

This leads to:

```text
sort
OR
heap
OR
quickselect
```

### Problems

* **215. Kth Largest Element in an Array**
* **378. Kth Smallest Element in a Sorted Matrix**
* **703. Kth Largest Element in a Stream**
* **973. K Closest Points to Origin**
* **347. Top K Frequent Elements**
* **719. Find K-th Smallest Pair Distance**
* **658. Find K Closest Elements**

---

# 20. Quickselect / Partition

A more specific sub-pattern inside K-th element problems.

```text
partition
    ↓
where does pivot belong?
    ↓
is pivot position == k?
    ↓
only recurse into relevant side
```

### Problems

* **215. Kth Largest Element in an Array**
* **973. K Closest Points to Origin**
* **347. Top K Frequent Elements**

### CP importance

⭐⭐⭐⭐⭐

You should know this even if you normally use `sort()`.

---

# 21. Sort + Coordinate Compression

Transform huge values into their **relative ranks**.

Example:

```text
[1000000000, 5, 100, 5]

↓ sort unique

[5, 100, 1000000000]

↓ ranks

[3, 1, 2, 1]
```

### Problems

* **315. Count of Smaller Numbers After Self**
* **327. Count of Range Sum**
* **493. Reverse Pairs**
* **2179. Count Good Triplets in an Array**

Usually combined with:

```text
coordinate compression
+
Fenwick Tree
```

or:

```text
coordinate compression
+
Segment Tree
```

This is **high-value CP knowledge**.

---

# 22. Sort + Divide & Conquer

Sorting/merging is used to count relationships while recursively dividing the array.

### Problems

* **315. Count of Smaller Numbers After Self**
* **327. Count of Range Sum**
* **493. Reverse Pairs**
* **775. Global and Local Inversions**

### Core idea

```text
divide
 ↓
solve left
solve right
 ↓
count cross relationships
 ↓
merge
```

---

# 23. Merge Sort + Inversion Counting

A very specific and important sub-pattern.

Count pairs:

```text
i < j
and
a[i] > a[j]
```

### Problems

* **775. Global and Local Inversions**
* **315. Count of Smaller Numbers After Self**
* **493. Reverse Pairs**

This is one of the places where knowing **how merge sort works internally** actually pays off.

---

# 24. Sort + Offline Queries

Sort queries and data together so that you can process them incrementally rather than answering each query independently.

### Problems

* **1851. Minimum Interval to Include Each Query**
* **1697. Checking Existence of Edge Length Limited Paths**
* **2071. Maximum Number of Tasks You Can Assign**
* **1847. Closest Room**
* **2503. Maximum Number of Points From Grid Queries**

### Pattern

```text
queries
   ↓
sort queries by threshold

data
   ↓
sort data

process incrementally
```

This is **very important for advanced CP**.

---

# 25. Sort + DSU / Union Find

Sorting establishes the order in which edges/connections should be activated.

### Problems

* **1631. Path With Minimum Effort**
* **1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree**
* **1584. Min Cost to Connect All Points**
* **1101. The Earliest Moment When Everyone Become Friends**

This becomes:

```text
sort edges by weight
        ↓
DSU
        ↓
Kruskal-style processing
```

---

# 26. Sort + Graph / Kruskal

A major CP pattern.

### Problems

* **1584. Min Cost to Connect All Points**
* **1489. Find Critical and Pseudo-Critical Edges in Minimum Spanning Tree**
* **1135. Connecting Cities With Minimum Cost**
* **1101. The Earliest Moment When Everyone Become Friends**

Recognition:

```text
weighted edges
+
minimum spanning tree
        ↓
sort edges by weight
        ↓
DSU
```

---

# 27. Sort + Difference Array

Sort interval/query boundaries and combine them with a difference-array-style update.

### Problems

* **1094. Car Pooling**
* **1109. Corporate Flight Bookings**
* **2406. Divide Intervals Into Minimum Number of Groups**
* **2779. Maximum Beauty of an Array After Applying Operation**

Useful when you have:

```text
range [l, r]
+
add/remove something
```

---

# 28. Sort + Binary Search on Pairs

Sort one side and binary-search the compatible range.

### Problems

* **826. Most Profit Assigning Work**
* **436. Find Right Interval**
* **1235. Maximum Profit in Job Scheduling**
* **1851. Minimum Interval to Include Each Query**
* **2054. Two Best Non-Overlapping Events**

---

# 29. Sort + Prefix/Suffix Information

Sorting makes neighboring elements meaningful; prefix/suffix structures then optimize repeated queries.

### Problems

* **1685. Sum of Absolute Differences in a Sorted Array**
* **1331. Rank Transform of an Array**
* **2448. Minimum Cost to Make Array Equal**
* **891. Sum of Subsequence Widths**

---

# 30. Sort + Math / Formula

Sorting reveals a mathematical property that isn't obvious in the original ordering.

### Problems

* **462. Minimum Moves to Equal Array Elements II**
* **891. Sum of Subsequence Widths**
* **1685. Sum of Absolute Differences in a Sorted Array**
* **1200. Minimum Absolute Difference**
* **1502. Can Make Arithmetic Progression From Sequence**
* **1498. Number of Subsequences That Satisfy the Given Sum Condition**
* **2179. Count Good Triplets in an Array**

---

# 31. Sort + String Canonicalization

Sort characters/elements to create a canonical representation.

### Problems

* **49. Group Anagrams**
* **242. Valid Anagram**
* **438. Find All Anagrams in a String**
* **187. Repeated DNA Sequences**

Although frequency counting is often better, the underlying pattern is:

```text
different arrangements
        ↓
same canonical representation
        ↓
compare/group
```

---

# 32. Sort + Sweep + Heap

This deserves its own category because it appears constantly in harder problems.

```text
sort events
      ↓
sweep
      ↓
heap maintains active candidates
```

### Problems

* **253. Meeting Rooms II**
* **630. Course Schedule III**
* **1353. Maximum Number of Events That Can Be Attended**
* **1834. Single-Threaded CPU**
* **1851. Minimum Interval to Include Each Query**
* **2402. Meeting Rooms III**

This is a **very high-value CP pattern**.

---

# 33. Sort + Greedy + Binary Search

Three techniques combined.

### Problems

* **826. Most Profit Assigning Work**
* **436. Find Right Interval**
* **1235. Maximum Profit in Job Scheduling**
* **2054. Two Best Non-Overlapping Events**
* **1751. Maximum Number of Events That Can Be Attended II**

---

# 34. Sort + Greedy + Heap

Another major combination.

### Problems

* **630. Course Schedule III**
* **857. Minimum Cost to Hire K Workers**
* **1353. Maximum Number of Events That Can Be Attended**
* **1383. Maximum Performance of a Team**
* **1834. Single-Threaded CPU**
* **2402. Meeting Rooms III**

---

# 35. Sort + Two Pointers + Binary Search

Useful when two pointers aren't sufficient for every transition.

### Problems

* **611. Valid Triangle Number**
* **658. Find K Closest Elements**
* **719. Find K-th Smallest Pair Distance**
* **1498. Number of Subsequences That Satisfy the Given Sum Condition**
* **826. Most Profit Assigning Work**

---

# 🔥 The Important Part: Don't Treat These as 35 Separate Topics

There is a hierarchy.

I'd organize your **Sorting mental map** like this:

```text
SORTING
│
├── 1. SORT + TWO POINTERS
│      ├── Pair Sum
│      ├── 3Sum / 4Sum
│      ├── Triangle
│      ├── Pair Counting
│      └── Subsequence Counting
│
├── 2. SORT + GREEDY
│      ├── Assignment
│      ├── Scheduling
│      ├── Intervals
│      └── Optimization
│
├── 3. SORT + INTERVALS
│      ├── Merge
│      ├── Overlap
│      ├── Scheduling
│      └── Coverage
│
├── 4. SORT + SWEEP LINE
│      ├── Events
│      ├── Active Intervals
│      └── Skyline
│
├── 5. SORT + BINARY SEARCH
│      ├── Lower Bound
│      ├── Upper Bound
│      ├── Next Element
│      └── Offline Queries
│
├── 6. SORT + HEAP
│      ├── Scheduling
│      ├── Top K
│      └── Active Candidates
│
├── 7. SORT + PREFIX SUM
│      ├── Range Cost
│      ├── Median
│      └── Contribution
│
├── 8. SORT + CUSTOM COMPARATOR
│      ├── Multiple Criteria
│      ├── Special Ordering
│      └── Greedy Ordering
│
├── 9. SORT + FREQUENCY
│      ├── Counting Sort
│      ├── Frequency
│      └── Ranking
│
├── 10. SORT + DEDUPLICATION
│       ├── 3Sum
│       ├── Subsets
│       └── Permutations
│
├── 11. SORT + KTH
│       ├── Quickselect
│       ├── Heap
│       └── Pair Distance
│
├── 12. SORT + DIVIDE & CONQUER
│       ├── Inversions
│       ├── Reverse Pairs
│       └── Count Smaller
│
├── 13. SORT + COORDINATE COMPRESSION
│       ├── Fenwick
│       ├── Segment Tree
│       └── Offline Counting
│
├── 14. SORT + OFFLINE QUERIES
│       ├── Threshold Queries
│       ├── Interval Queries
│       └── Incremental Processing
│
└── 15. SORT + GRAPH
        ├── Kruskal
        └── DSU
```