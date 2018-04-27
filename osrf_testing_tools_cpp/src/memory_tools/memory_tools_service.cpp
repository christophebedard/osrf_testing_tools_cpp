// Copyright 2018 Open Source Robotics Foundation, Inc.
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

#include "osrf_testing_tools_cpp/memory_tools/memory_tools_service.hpp"

namespace osrf_testing_tools_cpp
{
namespace memory_tools
{

MemoryToolsService::MemoryToolsService()
: ignored_(false), should_print_backtrace_(false)
{}

void
MemoryToolsService::ignore()
{
  ignored_ = true;
}

void
MemoryToolsService::unignore()
{
  ignored_ = false;
}

void
MemoryToolsService::print_backtrace()
{
  should_print_backtrace_ = true;
}

}  // namespace memory_tools
}  // namespace osrf_testing_tools_cpp