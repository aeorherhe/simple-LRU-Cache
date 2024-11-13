//
// Created by AEO on 09/11/2024.
//

#pragma once

#include <list>
#include <unordered_map>

class LRUCache {
private:
    int capacity; // Maximum capacity of the cache
    std::list<std::pair<int, int>> cache; // List of key-value pairs
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> uMap; // Map of key to iterator

public:
    explicit LRUCache(const int capacity) : capacity(capacity) {
        cache.clear();
        uMap.clear();
    }

    [[nodiscard]] int get(int key);

     int set(int key, int value);

};
