class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int totalNumberOfTuples = 0;
        int n = nums.size();

        int result = 0;
        sort(begin(nums), end(nums));

        for (int i = 0; i < n; i++) {           
            for (int j = n - 1; j > i; j--) {  
                int product = nums[i] * nums[j];
                unordered_set<int> st;

                for (int k = i+1; k < j; k++) {   
                    if(product % nums[k] == 0) {
                        int lValue = product/nums[k];

                        if(st.count(lValue)) {
                            totalNumberOfTuples++;
                        }

                        st.insert(nums[k]);
                    }
                }
            }
        }
        return totalNumberOfTuples * 8;
    }
};

# Tuple With Same Product

## Problem

Given an array `nums` of **distinct positive integers**, count the number of tuples:

```text
(a, b, c, d)
```

such that:

```text
nums[a] * nums[b] == nums[c] * nums[d]
```

and all four indices are distinct.

For every valid set of four numbers, there are **8 ordered tuples**.

---

# 1. Brute Force — Four Loops

The most direct approach is to choose four different indices:

```cpp
for (int a = 0; a < n; a++) {
    for (int b = a + 1; b < n; b++) {
        for (int c = b + 1; c < n; c++) {
            for (int d = c + 1; d < n; d++) {

                if (nums[a] * nums[b] == nums[c] * nums[d]) {
                    ans += 8;
                }
            }
        }
    }
}
```

### Idea

Choose every possible group of four numbers.

For each group:

```text
a < b < c < d
```

check whether some pairing has the same product.

Example:

```text
[2, 3, 4, 6]
```

We have:

```text
2 × 6 = 3 × 4
12    = 12
```

Therefore this group contributes:

```text
8
```

### Complexity

There are:

$$
\binom{n}{4}
$$

groups.

Therefore:

```text
Time:  O(n^4)
Space: O(1)
```

### Problem

This becomes too slow when `n` is large.

---

# 2. Three-Loop Approach

We can fix two numbers:

```text
nums[i] × nums[j]
```

and search for another pair producing the same product.

One possible implementation:

```cpp
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        int n = nums.size();
        int ans = 0;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                int product = nums[i] * nums[j];

                unordered_set<int> st;

                for (int k = i + 1; k < j; k++) {

                    if (product % nums[k] == 0) {

                        int required = product / nums[k];

                        if (st.count(required)) {
                            ans++;
                        }

                        st.insert(nums[k]);
                    }
                }
            }
        }

        return ans * 8;
    }
};
```

---

## How This Approach Works

Suppose:

```text
nums = [2, 3, 4, 6]
```

Take:

```text
i = 0
j = 3
```

Therefore:

```text
nums[i] = 2
nums[j] = 6
```

Product:

```text
2 × 6 = 12
```

Now we need another pair whose product is `12`.

For `nums[k] = 3`:

```text
12 / 3 = 4
```

So we need:

```text
3 × 4
```

When `4` is encountered, we find it in the set.

Therefore:

```text
2 × 6 = 3 × 4
```

and we found one valid combination.

Finally:

```cpp
return ans * 8;
```

because each combination generates 8 ordered tuples.

### Complexity

Three nested loops:

```text
Time:  O(n^3)
Space: O(n)
```

This is substantially better than `O(n^4)`.

---

# 3. Optimized Approach — HashMap of Products ⭐

The key observation is:

> We don't need to explicitly search for the second pair.

Instead, calculate the product of **every pair** and store how many times that product has appeared.

```cpp
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        unordered_map<int, int> mp;

        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                int product = nums[i] * nums[j];

                ans += mp[product] * 8;

                mp[product]++;
            }
        }

        return ans;
    }
};
```

---

# 4. Why Does the HashMap Work?

Suppose we process these pairs:

```text
2 × 6 = 12
3 × 4 = 12
```

When we process:

```text
2 × 6
```

we have:

```text
mp[12] = 0
```

So:

```cpp
ans += 0 * 8;
```

Then:

```cpp
mp[12]++;
```

Now:

```text
mp[12] = 1
```

Next we process:

```text
3 × 4
```

Again:

```text
product = 12
```

But now:

```text
mp[12] = 1
```

Therefore:

```cpp
ans += 1 * 8;
```

So:

```text
ans += 8
```

We don't need to explicitly find `(2,6)`.

The hashmap already remembers that one pair produced product `12`.

---

# 5. Example

Consider:

```text
nums = [2, 3, 4, 6]
```

All pairs:

```text
2 × 3 = 6
2 × 4 = 8
2 × 6 = 12
3 × 4 = 12
3 × 6 = 18
4 × 6 = 24
```

Product frequencies:

```text
6  → 1
8  → 1
12 → 2
18 → 1
24 → 1
```

For product `12`, there are two pairs:

```text
(2,6)
(3,4)
```

These two pairs form one valid combination of four numbers.

Therefore:

```text
1 × 8 = 8
```

Answer:

```text
8
```

---

# 6. Why Multiply by 8?

Suppose:

```text
a × b = c × d
```

The four numbers can form 8 ordered tuples.

For example:

```text
(a,b,c,d)
(b,a,c,d)

(a,b,d,c)
(b,a,d,c)

(c,d,a,b)
(d,c,a,b)

(c,d,b,a)
(d,c,b,a)
```

Therefore:

```cpp
ans += frequency * 8;
```

---

# 7. Another Mathematical View

Suppose a product `P` has `k` different pairs.

For example:

```text
P = 12

Pairs:
(2,6)
(3,4)
(1,12)
```

Then:

```text
k = 3
```

Every two different pairs create a valid combination.

Number of pair combinations:

$$
\binom{k}{2}
$$

Therefore:

$$
\binom{k}{2} \times 8
$$

or:

$$
\frac{k(k-1)}{2} \times 8
$$

which simplifies to:

$$
4k(k-1)
$$

---

# 8. Alternative HashMap Implementation

Instead of adding the answer while processing pairs, we can first calculate frequencies.

```cpp
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        unordered_map<int, int> mp;

        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {

                int product = nums[i] * nums[j];

                mp[product]++;
            }
        }

        int ans = 0;

        for (auto &[product, freq] : mp) {

            if (freq >= 2) {
                ans += (freq * (freq - 1) / 2) * 8;
            }
        }

        return ans;
    }
};
```

This version makes the mathematics more explicit.

---

# 9. Comparison of Approaches

## Approach 1 — Four Loops

```text
Choose four numbers
Check possible products
```

```text
Time:  O(n^4)
Space: O(1)
```

Good for understanding brute force.

---

## Approach 2 — Three Loops + Set

```text
Fix two numbers
Calculate their product
Search for complementary pair
```

```text
Time:  O(n^3)
Space: O(n)
```

Better, but still unnecessary work.

---

## Approach 3 — HashMap ⭐

```text
Generate every pair
Calculate product
Store product frequency
```

```text
Time:  O(n^2)
Space: O(n^2)
```

This is the preferred approach.

---

# 10. Pattern to Remember

This problem belongs to the pattern:

## "Count Equal Pair Values"

Whenever you see:

```text
a + b = c + d
```

or:

```text
a × b = c × d
```

or:

```text
f(a,b) = f(c,d)
```

think:

```text
Generate all pairs
        ↓
Calculate some value
        ↓
Store frequency in hashmap
        ↓
Use previous frequency
```

General template:

```cpp
unordered_map<int, int> mp;

for (int i = 0; i < n; i++) {

    for (int j = i + 1; j < n; j++) {

        int value = /* function of nums[i], nums[j] */;

        // Previous pairs with same value
        ans += mp[value];

        mp[value]++;
    }
}
```

For this problem:

```cpp
value = nums[i] * nums[j];
```

and because every matching pair combination produces 8 tuples:

```cpp
ans += mp[value] * 8;
```

---

# 11. Important Observation

The critical optimization is:

### Don't search for the second pair.

Instead of:

```text
Current pair
    ↓
Search for another pair
```

do:

```text
Current pair
    ↓
Ask hashmap:
"How many previous pairs had the same product?"
```

This changes:

```text
O(n^3)
```

into:

```text
O(n^2)
```

---

# 12. Final Recommended Code

```cpp
class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {

        unordered_map<int, int> mp;

        int ans = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {

            for (int j = i + 1; j < n; j++) {

                int product = nums[i] * nums[j];

                ans += mp[product] * 8;

                mp[product]++;
            }
        }

        return ans;
    }
};
```

### Complexity

```text
Time:  O(n²)
Space: O(n²) worst case
```

### Core idea

> **Generate every pair → calculate product → count previous pairs with the same product → multiply by 8.**

---

# 13. DSA Takeaway

The most important thing to learn from this problem is **not the tuple problem itself**.

Learn this transformation:

```text
Brute Force
    ↓
Enumerate combinations
    ↓
Notice that pairs are the real unit
    ↓
Assign a value to every pair
    ↓
Group equal values using HashMap
    ↓
Count combinations of matching pairs
```

This same idea appears in many problems involving:

* Equal pair sums
* Equal pair products
* 2-Sum variants
* 4-Sum optimization
* Counting quadruples
* Difference matching
* XOR pair matching
* Frequency-based pair counting
* Meet-in-the-middle

**Pattern:** `Pair Generation + HashMap Frequency`
