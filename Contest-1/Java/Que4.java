    public static int birthday(int[] s, int d, int m) {
        int prefixSum = 0;
        int n = s.length;

        for (int i = 0; i < m; i++) {
            prefixSum += s[i];
        }
        int count = 0;

        if (prefixSum == d) {
            count++;
        }

        for (int i = 0; i < n; i++) {
            prefixSum -= s[i];
            if (i + m < n) {
                prefixSum += s[i + m];
            }
            if (prefixSum == d) {
                count++;
            }
        }

        System.out.println(count);
        return count;
    }