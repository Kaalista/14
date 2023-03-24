#include"Trie.h"
#include <string>
using namespace std;

int main()
{TRIE trie;
trie.dictionary();cout << endl << endl;
cout << "òåñò êîíñîëüíûé" << endl << endl << endl;
    trie.prefix("te");
cout << "òåñò ïîëüçîâàòåëüñêèé" << endl << endl;
    string pref = trie.entPref(); trie.prefix(pref);
 cout << "òåñò ïîëüçîâàé" << endl << endl;
return 0;}


