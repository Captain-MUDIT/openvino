// Copyright (C) 2018-2025 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#pragma once

#include "openvino/pass/matcher_pass.hpp"
#include "transformations_visibility.hpp"

namespace ov {
namespace pass {

class TRANSFORMATIONS_API ConvertGatherToGatherCompressed;

}  // namespace pass
}  // namespace ov

class ov::pass::ConvertGatherToGatherCompressed : public ov::pass::MatcherPass {
public:
    OPENVINO_MATCHER_PASS_RTTI("ConvertGatherToGatherCompressed");
    ConvertGatherToGatherCompressed();
};
