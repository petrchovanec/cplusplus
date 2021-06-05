int DisjointSets::find(int i) {
  if ( s[i] < 0 ) {
    return i;
  } else {
    s[i] = find(s[i]);
    return find(s[i]);
  };
  
}