int jump(int* arr, int numsSize) {
    if (numsSize <= 1) {
        return 0;
    }

    int jumps = 0;
    int current_end = 0;
    int max_reachable = 0;int jump(int* arr, int numsSize) {
    if (numsSize <= 1) {
        return 0;
    }

    int jumps = 0;
    int current_end = 0;
    int max_reachable = 0;
    for (int i = 0; i < numsSize - 1; i++) {
        if (i + arr[i] > max_reachable) {
            max_reachable = i + arr[i];
        }
        if (i == current_end) {
            jumps++;
            current_end = max_reachable;
            if (current_end >= numsSize - 1) {
                break;
            }
        }
    }

    return jumps;
}
    for (int i = 0; i < numsSize - 1; i++) {
        if (i + arr[i] > max_reachable) {
            max_reachable = i + arr[i];
        }
        if (i == current_end) {
            jumps++;
            current_end = max_reachable;
            if (current_end >= numsSize - 1) {
                break;
            }
        }
    }

    return jumps;
}
