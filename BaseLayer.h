#ifndef BASELAYER_H
#define BASELAYER_H
#include <iostream>
#include <vector>

class BaseLayer {
public:
  BaseLayer();
  void Set(float *_values, std::size_t _size);
  void Set(std::vector<float> &_values);
  void SetSize(std::size_t _size);
  float &operator[](std::size_t _pos) { return m_values[_pos]; };
  std::size_t size() { return m_size; };
  ~BaseLayer();

protected:
  float *m_values = nullptr;
  std::size_t m_size = 0;
};

#endif // BASELAYER_H
