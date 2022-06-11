#include <iostream>
#include <string>
#include <map>

using namespace std;

// rna seq: AUGUUUUUAUUGUAAUGG
// result: ["Methionine", "Phenylalanine", "Leucine", "Leucine"]

// rna seq: UAUUACUGUUGA
// ["Tyrosine", "Tyrosine", "Cysteine"]


/*
Codon                Protein
AUG                   Methionine
UUU, UUC              Phenylalanine
UUA, UUG              Leucine
UCU, UCC, UCA, UCG    Serine
UAU, UAC              Tyrosine
UGU, UGC               Cysteine
UGG                    Tryptophan
UAA, UAG, UGA          STOP
*/
string translateProtein(string condon) {
    if (condon == "AUG")
        return "Methionine";
    if (condon == "UUU" || condon == "UUC")
        return "Phenylalanine";
    if (condon == "UUA" || condon == "UUG")
        return "Leucine";
    if (condon == "UCU" || condon == "UCC" || condon == "UCA" || condon == "UCG")
        return "Serine";
    if (condon == "UAU" || condon == "UAC")
        return "Tyrosine";
    if (condon == "UGU" || condon == "UGC")
        return "Cysteine";
    if (condon == "UGG")
        return "Tryptophan";
    if (condon == "UAA" || condon == "UAG" || condon == "UGA")
        return "STOP";
    return "";
}

int main()
{
    map<string, string> proteins;
    proteins["AUG"] = "Methionine";    
    cout << proteins["AUG"] << endl;

    // Goal1 : condonSlice(seq) => ["AUG", "UUU", "UUA", "UUG", "UAA", "UGG"]
    string rna = "AUGUUUUUAUUGUAAUGG";
    int size = rna.length() / 3;
    string condons[size];

    int counter = 0;
    int condonIdx = 0;
    for (int i = 0; i < rna.length(); i += 3)
    {        
        condons[condonIdx].push_back(rna[i]);
        condons[condonIdx].push_back(rna[i + 1]);
        condons[condonIdx].push_back(rna[i + 2]);
        string protein = translateProtein(condons[condonIdx]);

        cout << condonIdx << ": " << condons[condonIdx];
        cout << ", " << protein << endl;

        if (protein == "STOP") break;

        condonIdx++;
    }
    
    return 0;
};