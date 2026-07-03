#pragma once

#if defined(__GNUC__)

#include <bits/stdc++.h>

#else

#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <cinttypes>
#include <climits>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <tgmath.h>
#include <uchar.h>

#if __cplusplus >= 201103L
#include <algorithm>
#include <array>
#include <atomic>
#include <bitset>
#include <chrono>
#include <complex>
#include <condition_variable>
#include <deque>
#include <exception>
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <mutex>
#include <new>
#include <numeric>
#include <ostream>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <thread> // Contains this_thread namespace functions
#include <type_traits>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <valarray>
#include <vector>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#include <utility>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <execution>
#include <filesystem>
#include <memory_resource>
#include <optional>
#include <scoped_allocator>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#include <coroutine>
#include <format>
#include <latch>
#include <ranges>
#include <semaphore>
#include <source_location>
#include <span>
#include <stop_token>
#include <syncstream>
#endif

#if __cplusplus >= 202302L
#include <expected>
#endif

#endif
