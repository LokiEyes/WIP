int nwd(long int i, long int j) {
    while ( i != j ) {
        if ( i < j )
            j -= i;
        else
            i -= j;
    }

    return i;
}