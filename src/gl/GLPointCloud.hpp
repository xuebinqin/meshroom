#pragma once

#include <QOpenGLBuffer>
#include <QOpenGLVertexArrayObject>
#include "GLDrawable.hpp"

namespace meshroom
{

class GLPointCloud : public GLDrawable
{

public:
    GLPointCloud();
    ~GLPointCloud() = default;

public:
    void draw() override;
    void setRawPositions(const void* points, size_t npoints);
    void setRawColors(const void* points, size_t npoints);

private:
    QOpenGLVertexArrayObject _vertexArrayObject;
    QOpenGLBuffer _pointPositions;
    QOpenGLBuffer _pointColors;
    GLint _npoints;
};

} // namespace
