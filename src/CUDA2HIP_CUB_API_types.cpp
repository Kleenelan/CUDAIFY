/*
Copyright (c) 2015 - present Advanced Micro Devices, Inc. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
*/

#include "CUDA2HIP.h"

// Maps the names of CUDA CUB API types to the corresponding HIP types
const std::map<llvm::StringRef, hipCounter> CUDA_CUB_NAMESPACE_MAP {
  {"cub",                               {"hipcub",                             "", CONV_TYPE, API_CUB, 1}},
};

// Maps the names of CUDA CUB API types to the corresponding HIP types
const std::map<llvm::StringRef, hipCounter> CUDA_CUB_TYPE_NAME_MAP {
  // 5. Defines
  {"CUB_STDERR",                        {"HIPCUB_STDERR",                      "", CONV_DEFINE, API_CUB, 1}},
  {"CubDebug",                          {"HipcubDebug",                        "", CONV_DEFINE, API_CUB, 1}},
  {"_CubLog",                           {"_HipcubLog",                         "", CONV_DEFINE, API_CUB, 1}},
};

const std::map<llvm::StringRef, cudaAPIversions> CUDA_CUB_TYPE_NAME_VER_MAP {
};

const std::map<llvm::StringRef, hipAPIversions> HIP_CUB_TYPE_NAME_VER_MAP {
  {"HIPCUB_STDERR",                          {HIP_2050, HIP_0,    HIP_0   }},
  {"HipcubDebug",                            {HIP_2050, HIP_0,    HIP_0   }},
  {"_HipcubLog",                             {HIP_2050, HIP_0,    HIP_0   }},
};

const std::map<unsigned int, llvm::StringRef> CUDA_CUB_API_SECTION_MAP {
  {1, "CUB Data types"},
};
