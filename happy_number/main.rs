use std::collections::HashSet;

// Beats 100%
// Runtime 0ms

impl Solution {
    fn calculate_sum(mut n: i32) -> i32 {
        let mut sum = 0;
        while n != 0 {
            let digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    fn is_happy(n: i32) -> bool {
        let mut sums: HashSet<i32> = HashSet::new();
        let mut sum = n;

        while sum != 1 {
            if sums.contains(&sum) { return false; }
            sums.insert(sum);
            sum = Self::calculate_sum(sum);
        }

        return true;
    }
}
