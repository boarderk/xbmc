#pragma once
/*
 *      Copyright (C) 2010-2013 Team XBMC
 *      http://xbmc.org
 *
 *  This Program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This Program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with XBMC; see the file COPYING.  If not, see
 *  <http://www.gnu.org/licenses/>.
 *
 */

#include <stdint.h>
#include <string>
#include <vector>

#include "cores/AudioEngine/Interfaces/AEResample.h"

class IAEResample;

namespace ActiveAE
{

class CAEResampleFactory
{
public:
  static IAEResample *Create();
  static uint64_t GetAVChannelLayout(CAEChannelInfo &info);
  static AVSampleFormat GetAVSampleFormat(AEDataFormat format);
  static uint64_t GetAVChannel(enum AEChannel aechannel);
  static int GetAVChannelIndex(enum AEChannel aechannel, uint64_t layout);
};

}
