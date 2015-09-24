const int PRIMEMAX = 10000;
int FACTOR[PRIMEMAX];
vector<int> Primes;
void sieve(int upb) {
  FACTOR[0] = FACTOR[1] = -1;
  REP(n, upb) {
    if (FACTOR[n] != 0) continue;
    Primes.push_back(n);
    int kn = n * n;
    while (kn < PRIMEMAX) { FACTOR[kn] = n; kn += n; }
  }
}

bool is_prime(int n) {
  return FACTOR[n] == 0;
}