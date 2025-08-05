#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <set>

long long calculate_min_sum_for_root(long long n_nodes, long long root_k) {
    return root_k + (n_nodes - 1);
}

long long calculate_max_sum_for_root(long long n_nodes, long long root_k) {
    long long sum = root_k;
    for (long long i = 1; i <= n_nodes; ++i) {
        if (i == root_k) continue;
        sum += std::min(i, root_k);
    }
    return sum;
}

void solve() {
    long long n, m;
    std::cin >> n >> m;

    if (n == 1) {
        if (m == 1) {
            std::cout << 1 << std::endl;
        } else {
            std::cout << -1 << std::endl;
        }
        return;
    }

    if (m < n) {
        std::cout << -1 << std::endl;
        return;
    }

    if (m > n * (n + 1) / 2) {
        std::cout << -1 << std::endl;
        return;
    }

    long long chosen_root_k = -1;
    long long low = 1, high = n;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long current_k = mid;

        long long min_possible_m_for_k = calculate_min_sum_for_root(n, current_k);
        long long max_possible_m_for_k = calculate_max_sum_for_root(n, current_k);

        if (m >= min_possible_m_for_k && m <= max_possible_m_for_k) {
            chosen_root_k = current_k;
            break;
        } else if (m < min_possible_m_for_k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    if (chosen_root_k == -1) {
        std::cout << -1 << std::endl;
        return;
    }

    std::cout << chosen_root_k << std::endl;
    std::vector<std::pair<int, int>> edges;
    std::set<int> connected_nodes;

    connected_nodes.insert((int)chosen_root_k);

    long long m_excess = m - (chosen_root_k + (n - 1));

    if (chosen_root_k != 1) {
        edges.push_back({(int)chosen_root_k, 1});
        connected_nodes.insert(1);
    }

    for (int curr_node = n; curr_node >= 1; --curr_node) {
        if (curr_node == chosen_root_k) continue;
        if (connected_nodes.count(curr_node)) continue;

        long long gain_if_to_k = std::min((long long)curr_node, chosen_root_k) - 1;

        if (m_excess >= gain_if_to_k) {
            edges.push_back({(int)chosen_root_k, curr_node});
            connected_nodes.insert(curr_node);
            m_excess -= gain_if_to_k;
        } else if (m_excess > 0) {
            long long pivot_parent_label = 1 + m_excess;
            
            if (pivot_parent_label != chosen_root_k && !connected_nodes.count((int)pivot_parent_label)) {
                edges.push_back({(int)chosen_root_k, (int)pivot_parent_label});
                connected_nodes.insert((int)pivot_parent_label);
            }
            
            edges.push_back({(int)pivot_parent_label, curr_node});
            connected_nodes.insert(curr_node);
            m_excess = 0;
            break;
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (!connected_nodes.count(i)) {
            if (chosen_root_k == 1) {
                edges.push_back({1, i});
            } else {
                edges.push_back({1, i});
            }
        }
    }

    for (const auto& edge : edges) {
        std::cout << edge.first << " " << edge.second << std::endl;
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}