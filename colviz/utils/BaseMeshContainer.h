/*
 * Copyright (c) 2017 CCS/GMRV/UPM/URJC.
 *
 * Author: Juan P. Brito <juanpedro.brito@upm.es>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 3.0 as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#pragma once

#include "BaseMesh.h"
#include <string>

using namespace std;
using namespace NSBaseMesh;

namespace NSUtils
{
  class BaseMeshContainer
  {
    private:

      std::vector<BaseMesh *> mBaseMeshContainer;

    public:
      BaseMeshContainer ( void );

      ~BaseMeshContainer ( void );

      unsigned int getNumElements ( );

      std::vector<BaseMesh *> & getContainer ( );

      void addElement ( BaseMesh * pElement );

      void addElement ( std::string pElementPath );

      BaseMesh * getElementAt ( unsigned int i );

      void scaleContainer ( float pScale );

      void destroyAllElementsInContainer ( );
  };
}
