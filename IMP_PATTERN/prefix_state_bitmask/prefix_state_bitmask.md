# Prefix State + Bitmask Pattern

## Pattern Name

**Prefix State + Bitmask / Parity State**

This pattern is useful when we need to track whether the frequency of multiple characters/elements is:

- Even or Odd
- Equal to a previous state
- Different by only a few bits

Instead of storing the complete frequency array, we store only the **parity** of each character.

---

# Core Idea

Suppose we are tracking `k` characters.

Each character has two possible states:

- `0` → Even frequency
- `1` → Odd frequency

We can represent all states using a bitmask.

Example for vowels:

```text
a e i o u
0 1 2 3 4