#include <iostream>

using namespace std;

// DNA -> RNA
// A -> U, T -> A, C -> G, G -> C

int main() {
    string dna = "acggacaaaattattgcacgtcggggggcaacaacctgaaaactcaagaccaacctggcc\
tctcggctatctcccccatcaagcttaagatacgacagtacctctccggataaagaaatt\
aaagaatcctcccaagctagagtacatctaacgggaggagtgggtggagttgtgaggcct\
aactggttcccggacaatagcaagtctctccacggcacaggcgcgtctcgtcggtttaga\
acgtatagacatgttcacgagtcttcccatcccatcatcatcaagactggttcggcaact\
gattctaactccccgttgcattgatgcttgcaacagtgatttccgttgagcggtcttgta";

    string test = "atcg";
    dna = test;
    
    int size = dna.length();    
    cout << "size: " << size << "\n";

    for (int i=0; i < size; i++) {
        char c = dna[i];
        if (c == 'a') cout << 'u';
        else if (c == 't') cout << 'a';
        else if (c == 'c') cout << 'g';
        else if (c == 'g') cout << 'c';
    }
    cout << endl;
}
