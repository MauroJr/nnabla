// Copyright (c) 2017 Sony Corporation. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef __NBLA_COMPUTATION_GRAPH_HPP__
#define __NBLA_COMPUTATION_GRAPH_HPP__

#include <nbla/computation_graph/function.hpp>
#include <nbla/computation_graph/variable.hpp>
#include <nbla/nd_array.hpp>

namespace nbla {

/** Create CgVariable outputs.

    Created CGVariables are held as weak_ptr by cg_f. The `need_grad`
    flags are automatically applied to created outputs.

*/
NBLA_API vector<CgVariablePtr> create_function_outputs(CgFunctionPtr cg_f,
                                                       int n_outputs = -1);

/**
 */
NBLA_API vector<CgVariablePtr> connect(CgFunctionPtr cg_f,
                                       const vector<CgVariablePtr> &inputs,
                                       int n_outputs = 1,
                                       vector<NdArrayPtr> inplace_outputs = {},
                                       bool execute = false);
}
#endif
