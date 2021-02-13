#ifndef NEURONET_H
#define NEURONET_H
#include "FirstLayer.h"
#include "LastLayer.h"
#include "Layer.h"

class NeuroNet {
public:
  NeuroNet(std::size_t hideLayersCount);
  FirstLayer firstLayer;
  LastLayer lastLayer;
  Layer getLayer(std::size_t _pos) { return m_layers[_pos]; };
  void SetStdInput(std::vector<float> _in) {
    firstLayer.Set(_in);
    firstLayer.InitialWeights();
  };
  void SetInput(float *_in, std::size_t _size);
  std::vector<float> GetStdOutput() {
    return std::vector<float>{lastLayer[0], lastLayer[0] + lastLayer.size()};
  };
  float *GetOutput() {
    float *temp = new float[lastLayer.size()];
    for (std::size_t i = 0; i < lastLayer.size(); ++i)
      temp[i] = lastLayer[i];
    return temp;
  };
  ~NeuroNet();

protected:
  Layer *m_layers = nullptr;
};

#endif // NEURONET_H
