#include <iostream>

#include "LRUCache.h"

int main() {
    int n, capacity;
    std::cin >> n >> capacity;

    LRUCache cache(capacity);

    for(int i = 0; i < n; i++) {
        std::string command;
        std::cin >> command;

        if(command == "get") {
            int key;
            std::cin >> key;
            std::cout << cache.get(key) << std::endl;
        }

        else if(command == "set") {
            int key, value; std::cin >> key >> value;
            cache.set(key,value);
        }
    }
    return 0;
}

