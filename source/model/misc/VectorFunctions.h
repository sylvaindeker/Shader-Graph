#ifndef SHADERGRAPH_VECTORFUNCTIONS_H
#define SHADERGRAPH_VECTORFUNCTIONS_H

#include "../Node.h"
#include "pin/Pin.h"

namespace ShaderGraph
{
    class MakeVec2Node : public Node
    {
    public:
        MakeVec2Node() : Node("MakeVec2")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector2>("Vector2", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "MakeVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };

    class MakeVec3Node : public Node
    {
    public:
        MakeVec3Node() : Node("MakeVec3")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector3>("Vector3", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "MakeVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };

    class MakeVec4Node : public Node
    {
    public:
        MakeVec4Node() : Node("MakeVec4")
        {
            outputs() = std::vector<PIN> {
                    std::make_shared<Vector4>("Vector4", this)
            };

            inputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this),
                    std::make_shared<Float>("A", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "MakeVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };

    class BreakVec2Node : public Node
    {
    public:
        BreakVec2Node() : Node("BreakVec2")
        {
            inputs() = std::vector<PIN> {
                std::make_shared<Vector2>("Vector2", this)
            };

            outputs() = std::vector<PIN> {
                std::make_shared<Float>("X", this),
                std::make_shared<Float>("Y", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "BreakVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };

    class BreakVec3Node : public Node
    {
    public:
        BreakVec3Node() : Node("BreakVec3")
        {
            inputs() = std::vector<PIN> {
                    std::make_shared<Vector3>("Vector3", this)
            };

            outputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "BreakVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };

    class BreakVec4Node : public Node
    {
    public:
        BreakVec4Node() : Node("BreakVec4")
        {
            inputs() = std::vector<PIN> {
                    std::make_shared<Vector4>("Vector4", this)
            };

            outputs() = std::vector<PIN> {
                    std::make_shared<Float>("X", this),
                    std::make_shared<Float>("Y", this),
                    std::make_shared<Float>("Z", this),
                    std::make_shared<Float>("A", this)
            };
        }

        std::string nodeToGLSL() override
        {
            std::string buffer;
            GLSL_CODE(buffer,
                      "BreakVector({0}, ...",
                      autoName(inputs()[0]));
            return buffer;
        }
    };
}

#endif //SHADERGRAPH_VECTORFUNCTIONS_H