/*
 * Copyright (C) HYUANDAI, ARDRC. - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 */

#pragma once
#include <Eigen/Dense>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using namespace Eigen;

double baseFunction(int i, int k, double u, vector<double>& node_vector);

vector<double> u_quasi_uniform(int n, int k);

vector<double> u_piecewise_B_Spline(int n, int k);
