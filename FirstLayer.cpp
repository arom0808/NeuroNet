#include "FirstLayer.h"

FirstLayer::FirstLayer() : BaseLayer() { m_weights = nullptr; }

void FirstLayer::SetWeights(float **_weights) {
  if (m_weights != nullptr) {
    for (std::size_t i = 0; i < m_size; ++i)
      if (m_weights[i] != nullptr)
        delete[] m_weights[i];
    delete[] m_weights;
  }
  m_weights = new float *[m_size];
  for (std::size_t i = 0; i < m_size; ++i) {
    m_weights[i] = new float[m_nextLayer->size()];
    for (std::size_t j = 0; j < m_nextLayer->size(); ++j)
      m_weights[i][j] = _weights[i][j];
  }
}

void FirstLayer::SetWeights(std::vector<std::vector<float>> &_weights) {
  if (m_weights != nullptr) {
    for (std::size_t i = 0; i < m_size; ++i)
      if (m_weights[i] != nullptr)
        delete[] m_weights[i];
    delete[] m_weights;
  }
  m_weights = new float *[m_size];
  for (std::size_t i = 0; i < m_size; ++i) {
    m_weights[i] = new float[m_nextLayer->size()];
    for (std::size_t j = 0; j < m_nextLayer->size(); ++j)
      m_weights[i][j] = _weights[i][j];
  }
}

void FirstLayer::InitialWeights() {
  if (m_weights != nullptr) {
    for (std::size_t i = 0; i < m_size; ++i)
      if (m_weights[i] != nullptr)
        delete[] m_weights[i];
    delete[] m_weights;
  }
  m_weights = new float *[m_size];
  for (std::size_t i = 0; i < m_size; ++i) {
    m_weights[i] = new float[m_nextLayer->size()];
    for (std::size_t j = 0; j < m_nextLayer->size(); ++j)
      m_weights[i][j] = 0;
  }
}

FirstLayer::~FirstLayer() {
  if (m_weights != nullptr) {
    for (std::size_t i = 0; i < m_size; ++i)
      if (m_weights[i] != nullptr)
        delete[] m_weights[i];
    delete[] m_weights;
  }
  m_weights = nullptr;
}
