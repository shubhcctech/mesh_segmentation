#pragma once

#include <string>
#include<vector>
#include "Triangles.h"
#include "Triangulations.h"
#include"Points.h"

// Writes .stl and .obj to txt as well as interconvrsion.

class Mesh_Writer
{
    public:
        Mesh_Writer();
        ~Mesh_Writer();
        Triangulations &meshWrite(Triangulations &tringulation);
};

