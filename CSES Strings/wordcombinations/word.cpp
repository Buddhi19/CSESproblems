#include <iostream>
#include <unordered_map>
#include <vector>

class TrieNode {
public:
    std::unordered_map<char, TrieNode*> children;
    bool isend;

    TrieNode() : isend(false) {}
};

class Trie {
public:
    TrieNode* root;
    std::vector<int> autocomp_ans;

    Trie() {
        root = getNode();
    }

    TrieNode* getNode() {
        return new TrieNode();
    }

    void insert(const std::string& key) {
        TrieNode* parent = root;
        for (char level : key) {
            if (!parent->children[level]) {
                parent->children[level] = getNode();
            }
            parent = parent->children[level];
        }

        parent->isend = true;
    }

    bool search(const std::string& key) {
        TrieNode* parent = root;
        for (char level : key) {
            if (!parent->children[level]) {
                return false;
            }
            parent = parent->children[level];
        }

        return parent->isend;
    }
};

int solve(Trie& t, const std::string& s) {
    const int M = 1000000007;
    int n = s.length();
    if (n == 0) {
        return 0;
    }

    std::vector<int> dp(n + 1, 0);
    dp[n] = 1;

    for (int i = n - 1; i >= 0; --i) {
        TrieNode* parent = t.root;
        for (int j = i; j < n; ++j) {
            if (!parent->children[s[j]]) {
                break;
            }
            parent = parent->children[s[j]];
            if (parent->isend) {
                dp[i] = (dp[i] % M + dp[j + 1] % M) % M;
            }
        }
    }

    return dp[0];
}

int main() {
    std::string s;
    std::cin >> s;

    int n;
    std::cin >> n;

    Trie t;
    for (int i = 0; i < n; ++i) {
        std::string key;
        std::cin >> key;
        t.insert(key);
    }

    std::cout << solve(t, s) << std::endl;

    return 0;
}