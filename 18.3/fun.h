#pragma once
#ifndef FUN_H
#define FUN_H
template<typename T, typename TS>
long double sum_values(const T& value, const TS& value1) {
	return value+value1;
}
template<typename T, typename TS, typename... Args>
long double sum_values(const T& value, const TS& value1, const Args&... args) {
	return sum_values(value+value1,args...);
}
#endif FUN_H
