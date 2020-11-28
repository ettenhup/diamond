/****
DIAMOND protein aligner
Copyright (C) 2020 Max Planck Society for the Advancement of Science e.V.

Code developed by Benjamin Buchfink <benjamin.buchfink@tue.mpg.de>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
****/

#pragma once

#include <array>
#include <limits.h>
#include <vector>
#include "../basic/value.h"

const double INT2_MAX = std::numeric_limits<double>::max();

struct StandardMatrix {

	struct Parameters {
		double gap_exist;
		double gap_extend;
		double reserved;
		double Lambda;
		double K;
		double H;
		double alpha;
		double beta;
		double C;
		double alpha_v;
		double sigma;
	};

	std::vector<Parameters> parameters;
	double joint_probs[TRUE_AA][TRUE_AA];

};