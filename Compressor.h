#ifndef __COMPRESSOR__
#define __COMPRESSOR__

#include "IPlug_include_in_plug_hdr.h"

class Compressor : public IPlug
{
public:
  Compressor(IPlugInstanceInfo instanceInfo);
  ~Compressor();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
