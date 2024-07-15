#ifndef _STAT_MEM_
#define _STAT_MEM_

class StatMem {
public:
  int getHeight() { return m_h; }
  void setHeight(int i) { m_h = i; }
  int getWeight() { return m_w; }
  void setWeight(int i) { m_w = i; }

  static int m_h;
  int m_w;
};

#endif
