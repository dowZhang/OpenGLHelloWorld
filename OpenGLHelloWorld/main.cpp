#include <iostream>
#include <GLUT/GlUT.h>
#include "math3d.h"

void draw()
{
    
}

int main(int argc,const char *argv[])
{
    glutInit(&argc, (char **)argv);
    
    glutCreateWindow("dow_window");
    
    glutDisplayFunc(draw);
    
    glutMainLoop();
    
    return 0;
}

