def partition(A, start, end):

    pIndex = start
    pivot = A[end]
    for i in range(start, end):
        if A[i] <= pivot:
            A[pIndex], A[i] = A[i], A[pIndex]
            pIndex += 1
    A[pIndex], A[end] = A[end], A[pIndex]
    return pIndex


def quicksort(A, start, end):
    if (start < end):
        pIndex = partition(A, start, end)
        quicksort(A, start, pIndex - 1)
        quicksort(A, pIndex + 1, end)
    return A

test = [21, 4, 1, 3, 9, 20, 25, 6, 21, 14]
quicksort(test, 0, 9)
print(test)