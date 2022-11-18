/// F[mask] = a[mask]
/// For parent to child
for ( int i = 0; i < m; i++ ) {
    for ( int mask = 0; mask < ( 1<< m); mask++ ) {
        if ( mask & ( 1 << i ) ) {
            F[mask^(1<<i)] += F[mask];
        }
    }
}


/// For child to parent
for ( int i = 0; i < m; i++ ) {
    for ( int mask = 0; mask < ( 1<< m); mask++ ) {
        if ( mask & ( 1 << i ) ) {
            F[mask] += F[mask^(1<<i)];
        }
    }
}