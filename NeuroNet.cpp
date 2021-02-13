#include "NeuroNet.h"

NeuroNet::NeuroNet(std::size_t hideLayersCount)
    : m_layers(new Layer[hideLayersCount]) {}

void NeuroNet::SetInput(float *_in, std::size_t _size) {
  firstLayer.Set(_in, _size);
  firstLayer.InitialWeights();
}

NeuroNet::~NeuroNet() {
  if (m_layers != nullptr)
    delete[] m_layers;
  m_layers = nullptr;
}
