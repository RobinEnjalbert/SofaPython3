/*********************************************************************
Copyright 2019, CNRS, University of Lille, INRIA

This file is part of sofaPython3

sofaPython3 is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

sofaPython3 is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with sofaqtquick. If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/

#include <pybind11/pybind11.h>
#include <SofaPython3/SofaDeformable/Binding_LinearSpring.h>
#include <SofaPython3/SofaDeformable/Binding_SpringForceField.h>


namespace py { using namespace pybind11; }

namespace sofapython3
{

PYBIND11_MODULE(SofaDeformable, m)
{
    moduleAddLinearSpring(m);
    moduleAddSpringForceField(m);
}

} // namespace sofapython3