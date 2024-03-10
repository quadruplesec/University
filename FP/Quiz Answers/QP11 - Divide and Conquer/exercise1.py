def merge(xs, ys):
    result = []
    i = j = 0
    while i < len(xs) and j < len(ys):
        if xs[i] < ys[j]:
            result.append(xs[i])
            i += 1
        else:
            result.append(ys[j])
            j += 1
    result.extend(xs[i:])
    result.extend(ys[j:])
    return result

def msort(mx):
    if len(mx) <= 1:
        return mx
    else:
        mid = len(mx) // 2
        l1 = msort(mx[:mid])
        l2 = msort(mx[mid:])
        return merge(l1,l2)