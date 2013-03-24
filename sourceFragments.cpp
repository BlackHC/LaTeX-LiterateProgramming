//<A file fragment> =
void main() {
	// do something
	§\refFragment<A fragment>§
}
//<end>

//<Another file fragment> =
int fac( int n ) {
	int value = 1;
	for( ; n > 0 ; n-- ) {
		value *= n;
	}
	return value;
}
//<end>

//<Another file fragment;recursive> =
int fac_r( int n ) {
	if( n <= 1 ) {
		return 1;
	}
	return n * fac_r( n - 1 );
}
//<end>