#include <iostream>
#include "headers/STL_Reader.h"
#include "headers/Mesh_Writer.h"


int main()
{
    STL_Reader fileReader;
    Triangulations triangulation = fileReader.stlReader("resources\\cube.stl");

    Mesh_Writer filewriter;
    filewriter.meshWrite( triangulation);
}