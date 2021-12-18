#pragma once
#include <math.h>
#include <vector>

#include "maths.h"


class Network {
public:
	Network(int n_inputs, int* hidden_layers, int n_outputs);

	

private:

	std::vector<int> input_layer;
	std::vector<int> hidden_layer;
	std::vector<int> output_layer;
};