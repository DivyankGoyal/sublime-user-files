// C++ includes used for precompiling -*- C++ -*-

// Copyright (C) 2003-2022 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

/** @file stdc++.h
 *  This is an implementation file for a precompiled header.
 */

// 17.4.1.2 Headers

// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
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
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus >= 202002L
#include <barrier>
#include <bit>
#include <compare>
#include <concepts>
#if __cpp_impl_coroutine
# include <coroutine>
#endif
#include <latch>
#include <numbers>
#include <ranges>
#include <span>
#include <stop_token>
#include <semaphore>
#include <source_location>
#include <syncstream>
#include <version>
#endif

#if __cplusplus > 202002L
#include <expected>
#include <spanstream>
#if __has_include(<stacktrace>)
# include <stacktrace>
#endif
#include <stdatomic.h>
#endif




using namespace std;

#define printclock() cerr <<"\nTime : "<<1000*(long double)clock()/(long double)CLOCKS_PER_SEC<<"ms\t";printf("\n")
#define watch(xxx)   cerr << (#xxx) << " is " << xxx << "\n";

long long mem = 0, tim = 0;
#define ttt {tim++;if(tim>250000000){cout<<"Line:"<<__LINE__<<" "<<"TLE\n"; exit(0);}}
#define cout if(freeopen() && ++mem&&mem>230000){cout<<"Line:"<<__LINE__<<" "<<"MLE";exit(0);}else cout
#define cin if(freeopen() && ++mem&&mem>230000){cout<<"Line:"<<__LINE__<<" "<<"MLE";exit(0);}else cin

// data type supported :-
// 1. int
// 2. long long
// 3. float
// 4. double
// 5. long double
// 6. char
// 7. bool
// 8. signed and unsigned int
//
// Data structure supported :-
// 1.  string
// 2.  pair
// 3.  vector(array)
// 4.  N-D vector(array)
// 5.  stack
// 6.  queue
// 7.  set
// 8.  multiset
// 9.  map
// 10. unorderd_map
// 11. any compination of above data structure

int freeopen()
{
    static int val = 0;
    val++;
    if(val==1)
    {
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    }
    return 1;
}

class print_class
{
private:
    template<typename type_1>
    void __print_(type_1 a)
    {
        cout << a;
    }
    template<typename type_1, typename type_2>
    void __print_(pair<type_1, type_2> a)
    {
        cout << "{";
        __print_(a.first);
        cout << " ";
        __print_(a.second);
        cout << "}";
    }

    template<typename type_1>
    void __print_(stack<type_1> a)
    {
        vector<type_1> ar;
        while (!a.empty())
        {
            ar.push_back(a.top());
            a.pop();
        }
        cout << "{";
        for (auto it = ar.rbegin(); it < ar.rend(); it++)
        {
            __print_(*it);
            if (it + 1 != ar.rend())
                cout << " ";
        }
        cout << "}";
    }

    template<typename type_1>
    void __print_(queue<type_1> a)
    {
        cout << "{";
        while (!a.empty())
        {
            __print_(a.front());
            a.pop();
            if (!a.empty())
                cout << " ";
        }
        cout << "}";
    }

    template<typename type_1>
    void __print_(vector<type_1> a)
    {
        cout << "{";
        for (auto it = a.begin(); it < a.end(); it++)
        {
            __print_(*it);
            if (it + 1 != a.end())
                cout << " ";
        }
        cout << "}";
    }

    template<typename type_1>
    void __print_(vector<vector<type_1>> a)
    {
        cout << "{";
        for (auto it = a.begin(); it < a.end(); it++)
        {
            cout << "{";
            for (auto it2 = (*it).begin(); it2 < (*it).end(); it2++)
            {
                __print_(*it2);
                if (it2 != (--(*it).end()))
                    cout << " ";
            }
            cout << "}\n";
        }
        cout << "}";
    }

    template<typename type_1>
    void __print_(set<type_1> a)
    {
        cout << "{";
        for (auto it = a.begin(); it != a.end();)
        {
            __print_(*it);
            if (++it != a.end())
                cout << " ";
        }
        cout << "}";
    }
    template<typename type_1>
    void __print_(multiset<type_1> a) {
        cout << "{";
        for (auto it = a.begin(); it != a.end();)
        {
            __print_(*it);
            if (++it != a.end())
                cout << " ";
        }
        cout << "}";
    }
    template<typename type_1, typename type_2>
    void __print_(map<type_1, type_2> a)
    {
        cout << "{\n";
        for (auto it = a.begin(); it != a.end(); ++it)
        {
            cout << "  ";
            __print_(it->first);
            cout << ": ";
            __print_(it->second);
            cout << "\n";
        }
        cout << "}\n";
    }
    template<typename type_1, typename type_2>
    void __print_(unordered_map<type_1, type_2> a)
    {
        cout << "{\n";
        for (auto it = a.begin(); it != a.end(); ++it)
        {
            cout << "  ";
            __print_(it->first);
            cout << ": ";
            __print_(it->second);
            cout << "\n";
        }
        cout << "}\n";
    }
    template<typename type_1, typename ...Arg>
    void __print_(type_1 a1, Arg ...a)
    {
        __print_(a1);
        __print_(a...);
        cout << "\n";
    }

    void Print_Variable(const char *names, int start, int end)
    {
        while (start <= end && names[start] == ' ')
        {
            start++;
        }

        for (int i = start; i <= end; i++)
        {
            cout << names[i];
        }
        cout << " : ";
    }
public:

    template<typename Arg1>
    void __print_manager(const char *name, Arg1 && arg1)
    {
        Print_Variable(name, 0, (int)strlen(name) - 1);
        __print_(arg1);
        cout << " | \n";
    }

    template<typename Arg1, typename ... Args>
    void __print_manager(const char *names, Arg1 && arg1, Args &&... args)
    {
        int bracket = 0, i = 0;
        for (;; i++)
        {
            if (names[i] == ',' && bracket == 0)
                break;
            else if (names[i] == '(')
                bracket++;
            else if (names[i] == ')')
                bracket--;
        }
        Print_Variable(names, 0, i - 1);
        __print_(arg1);
        cout << " | \n";
        const char *comma = names + i;
        __print_manager(comma + 1, args...);
    }
} printvar;
#define trace(...) cout<<"Line:"<<__LINE__<<" ->\n", printvar.__print_manager(#__VA_ARGS__, __VA_ARGS__)
