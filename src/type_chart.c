#include "type_chart.h"

#define IMMUNE EFFECTIVENESS_IMMUNE
#define RESIST EFFECTIVENESS_RESIST
#define NEUTRAL EFFECTIVENESS_NEUTRAL
#define SUPER EFFECTIVENESS_SUPER

const s16 gTypeEffectivenessChart[NUM_TYPES][NUM_TYPES] = {
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, RESIST},
    {NEUTRAL, NEUTRAL, RESIST,  RESIST,  SUPER,   NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   RESIST,  NEUTRAL, RESIST,  NEUTRAL, SUPER},
    {NEUTRAL, NEUTRAL, SUPER,   RESIST,  RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST,  NEUTRAL, NEUTRAL},
    {NEUTRAL, NEUTRAL, RESIST,  SUPER,   RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  SUPER,   RESIST,  NEUTRAL, RESIST,  SUPER,   NEUTRAL, RESIST,  NEUTRAL, RESIST},
    {NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   RESIST,  RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, IMMUNE,  SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, NEUTRAL},
    {NEUTRAL, NEUTRAL, RESIST,  RESIST,  SUPER,   NEUTRAL, RESIST,  NEUTRAL, NEUTRAL, SUPER,   SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST},
    {NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST,  NEUTRAL, RESIST,  RESIST,  RESIST,  SUPER,   NEUTRAL, NEUTRAL, SUPER,   SUPER},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  RESIST,  NEUTRAL, NEUTRAL, IMMUNE},
    {NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST,  SUPER,   NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, IMMUNE,  NEUTRAL, RESIST,  SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, SUPER},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   RESIST,  NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, RESIST},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   SUPER,   NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, IMMUNE,  RESIST},
    {NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, RESIST,  RESIST,  NEUTRAL, RESIST,  SUPER,   NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, SUPER,   RESIST},
    {NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   RESIST,  NEUTRAL, RESIST,  SUPER,   NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, RESIST},
    {NEUTRAL, IMMUNE,  NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST,  RESIST},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST},
    {NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, RESIST,  NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, RESIST,  RESIST},
    {NEUTRAL, NEUTRAL, RESIST,  RESIST,  NEUTRAL, RESIST,  SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, NEUTRAL, SUPER,   NEUTRAL, NEUTRAL, NEUTRAL, RESIST}
};
