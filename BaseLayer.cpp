#include "BaseLayer.h"

BaseLayer::BaseLayer() {
  m_values = new float[1];
  m_values[0] = 0;
  m_size = 0;
}
void BaseLayer::Set(float *_values, std::size_t _size) {
  if (m_values != nullptr)
    delete[] m_values;
  m_values = new float[_size];
  for (std::size_t i = 0; i < _size; ++i)
    m_values[i] = _values[i];
  m_size = _size;
}

void BaseLayer::Set(std::vector<float> &_values) {
  if (m_values != nullptr)
    delete[] m_values;
  m_values = new float[_values.size()];
  for (std::size_t i = 0; i < _values.size(); ++i)
    m_values[i] = _values[i];
  m_size = _values.size();
}

void BaseLayer::SetSize(std::size_t _size) {
  if (m_values != nullptr)
    delete[] m_values;
  m_values = new float[_size];
  for (std::size_t i = 0; i < _size; ++i)
    m_values[i] = 0;
  m_size = _size;
}

BaseLayer::~BaseLayer() {
  if (m_values != nullptr)
    delete[] m_values;
  m_values = nullptr;
  m_size = 0;
}
