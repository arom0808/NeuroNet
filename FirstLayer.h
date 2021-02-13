#ifndef FIRSTLAYER_H
#define FIRSTLAYER_H
#include "BaseLayer.h"

class FirstLayer : public BaseLayer {
public:
  FirstLayer();
  void SetWeights(float **_weights);
  void SetWeights(std::vector<std::vector<float>> &_weights);
  void SetNextLayer(BaseLayer *_nextLayer);
  void InitialWeights();
  BaseLayer *NextLayer() { return m_nextLayer; };
  ~FirstLayer();

protected:
  BaseLayer *m_nextLayer = nullptr;
  float **m_weights = nullptr;
};

#endif // FIRSTLAYER_H
