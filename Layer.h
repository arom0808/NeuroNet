#ifndef LAYER_H
#define LAYER_H
#include "BaseLayer.h"
#include "FirstLayer.h"
#include "LastLayer.h"

class Layer : public FirstLayer, public LastLayer {
public:
  Layer() : FirstLayer(), LastLayer(){};
};

#endif // LAYER_H
