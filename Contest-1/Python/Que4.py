def birthday(s, d, m):
    prefixSum = 0
    n = len(s)
    
    for i in range(m):
        prefixSum += s[i]
    
    count = 0
    
    if prefixSum == d:
        count += 1
    
    for i in range(n):
        prefixSum -= s[i]
        if i + m < n:
            prefixSum += s[i + m]
        
        if prefixSum == d:
            count += 1
    
    print(count)
    return count
