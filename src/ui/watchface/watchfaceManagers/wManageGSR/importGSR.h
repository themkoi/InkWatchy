#pragma once

#include "defines.h"

#if GSR_WATCHFACES && GSR_STARFIELD
#include "../../watchfaces/gsr/starfield/GSRWatchFaceStarfield.h"
#endif
#if GSR_WATCHFACES && GSR_CLASSICS
#include "../../watchfaces/gsr/classics/WatchyClassicsAddOn.h"
#endif
#if GSR_WATCHFACES && GSR_STATIONARY
#include "../../watchfaces/gsr/stationary/stationaryGSR.h"
#endif