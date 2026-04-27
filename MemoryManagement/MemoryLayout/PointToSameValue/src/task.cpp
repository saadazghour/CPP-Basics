bool pointToSameValue(int* a, int* b) {
    if (a != nullptr && b != nullptr) { // shortcut way --> a && b
        return *a == *b;
    }
    return !a && !b;
}