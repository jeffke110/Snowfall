#pragma once
#ifndef RANDOM_H
#define RANDOM_H

#include <random>

class Random {

private:
	static::std::mt19937 s_RandomEngine;
	static::std::uniform_int_distribution<std::mt19937::result_type> s_Distribution;

public:
	static void Init() {
		s_RandomEngine.seed(std::random_device()());
	}

	static float Float() {
		return (float)s_Distribution(s_RandomEngine) / (float)std::numeric_limits<uint32_t>::max();
	}

};

#endif // !RANDOM_H
