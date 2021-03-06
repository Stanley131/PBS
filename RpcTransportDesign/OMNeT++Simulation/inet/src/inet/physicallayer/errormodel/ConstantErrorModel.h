//
// Copyright (C) 2013 OpenSim Ltd.
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INET_CONSTANTERRORMODEL_H
#define __INET_CONSTANTERRORMODEL_H

#include "inet/physicallayer/base/ErrorModelBase.h"

namespace inet {

namespace physicallayer {

class INET_API ConstantErrorModel : public ErrorModelBase
{
  protected:
    double packetErrorRate;
    double bitErrorRate;
    double symbolErrorRate;

  protected:
    virtual void initialize(int stage);

  public:
    ConstantErrorModel();

    virtual void printToStream(std::ostream& stream) const;

    virtual double computePacketErrorRate(const ISNIR *snir) const;
    virtual double computeBitErrorRate(const ISNIR *snir) const;
    virtual double computeSymbolErrorRate(const ISNIR *snir) const;
};

} // namespace physicallayer

} // namespace inet

#endif // ifndef __INET_CONSTANTERRORMODEL_H

