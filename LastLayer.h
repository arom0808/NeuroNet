#ifndef LASTLAYER_H
#define LASTLAYER_H
#include "BaseLayer.h"

class LastLayer : public BaseLayer {
public:
  LastLayer() : BaseLayer(){};
  void SetPrevLayer(BaseLayer *_prevLayer);
  BaseLayer *PrevLayer() { return m_prevLayer; };

protected:
  BaseLayer *m_prevLayer = nullptr;
};

#endif // LASTLAYER_H
