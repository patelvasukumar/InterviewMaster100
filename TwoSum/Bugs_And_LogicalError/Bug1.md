# Bug: out of bound bug

**Problem:**
When the program started, it didn't generate the expected output. It gave an out of bound error.

**Expected:**
output : 0 1

**Actual:**
The integers are out of bounds

**Investigation:**
The problem was with the condition 2 <= nums.size() <= 10000. C++ does not read this condition like a normal mathematical comparison. It checks the first comparison first and then compares the result with 10000.

**Root Cause:**
The conditions were written using chained comparisons. The same problem was also present when checking the values of the integers and the target.

**Fix:**
I changed the chained comparisons to use && and || operators.

For example:
nums.size() < 2 || nums.size() > 10000
  
**Verification:**
After fixing the conditions, I ran the program again. The program generated the expected output:
0 1
