// -*- mode: c++; indent-tabs-mode: nil; tab-width: 2 -*-
#pragma once
#include <string>
#include "moses/Parameter.h"
#include "SearchOptions.h"
#include "CubePruningOptions.h"
#include "NBestOptions.h"
#include "ReorderingOptions.h"
#include "ContextParameters.h"
#include "InputOptions.h"
#include "MBR_Options.h"
#include "LMBR_Options.h"

namespace Moses
{
  struct 
  AllOptions 
  {
    SearchOptions         search;
    CubePruningOptions      cube;
    NBestOptions           nbest;
    ReorderingOptions reordering;
    ContextParameters    context;
    InputOptions           input;
    MBR_Options              mbr;
    LMBR_Options            lmbr;

    bool mira;

    // StackOptions      stack;
    // BeamSearchOptions  beam;
    bool init(Parameter const& param);
    bool sanity_check();
    AllOptions() {}
    AllOptions(Parameter const& param);
  };

}
