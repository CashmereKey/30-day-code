def count_triples(N, K):
    a = (N // K)
    b = (N // K)
    c = (N // K)
    return (a * (a + 1) * b * (b + 1) * c * (c + 1)) // 8


print(count_triples(35897, 932))  # prints 3
