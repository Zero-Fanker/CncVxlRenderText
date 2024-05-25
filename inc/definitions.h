#pragma once
//basic
#include <algorithm>
#include <filesystem>
#include <ctime>

//streams
#include <fstream>
#include <iostream>

//containers
#include <memory>
#include <string>
#include <vector>
#include <unordered_map>

#include <cassert>
#include <cstring>
#include <cmath>
#include "macro.h"

// Ensure sizeof(float_t) = 4
using float32_t = float;
static_assert(sizeof(float32_t) == 4, "This program can be only compiled under current architecture!");

using byte = uint8_t;

#define CLASSES_START namespace thomas{
#define CLASSES_END };

#include "d3dx9.hpp"