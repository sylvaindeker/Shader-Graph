#ifndef SHADERGRAPH_DATA_H
#define SHADERGRAPH_DATA_H

#include <nodes/NodeData>
#include <nodes/NodeDataModel>
#include <memory>

namespace ShaderGraph
{
    class BooleanNodeData : public QtNodes::NodeData
    {
    public:

        /// Default constructor.
        BooleanNodeData() : m_value(false) {};

        /// Constructor.
        BooleanNodeData(bool value) : m_value(value) {};

        /// Getter only of the value.
        inline bool value() const
        {
            return m_value;
        }

        /// @return : the id and the name of this data.
        QtNodes::NodeDataType type() const override
        {
            return QtNodes::NodeDataType {"bool", "bool"};
        }

    private:
        bool m_value;
    };

    class FloatNodeData : public QtNodes::NodeData
    {
    public:

        /// Default constructor.
        inline FloatNodeData() : m_value(0.0f) {};

        /// Constructor.
        inline FloatNodeData(float value) : m_value(value) {};

        /// Getter only of the value.
        inline float value() const
        {
            return m_value;
        }

        /// @return : the id and the name of this data.
        QtNodes::NodeDataType type() const override
        {
            return QtNodes::NodeDataType {"float", "float"};
        }

    private:
        float m_value;
    };

    class Vector2NodeData : public QtNodes::NodeData
    {
    public:

        /// Default constructor.
        inline Vector2NodeData() : m_value(glm::vec2(0.0f)) {};

        /// Constructor.
        inline Vector2NodeData(glm::vec2 value) : m_value(value) {};

        /// Getter only of the value.
        inline glm::vec2 value() const
        {
            return m_value;
        }

        /// @return : the id and the name of this data.
        QtNodes::NodeDataType type() const override
        {
            return QtNodes::NodeDataType {"vec2", "vec2"};
        }

    private:
        glm::vec2 m_value;
    };

    class Vector3NodeData : public QtNodes::NodeData
    {
    public:

        /// Default constructor.
        inline Vector3NodeData() : m_value(glm::vec3(0.0f)) {};

        /// Constructor.
        inline Vector3NodeData(glm::vec3 value) : m_value(value) {};

        /// Getter only of the value.
        inline glm::vec3 value() const
        {
            return m_value;
        }

        /// @return : the id and the name of this data.
        QtNodes::NodeDataType type() const override
        {
            return QtNodes::NodeDataType {"vec3", "vec3"};
        }

    private:
        glm::vec3 m_value;
    };

    class Vector4NodeData : public QtNodes::NodeData
    {
    public:

        /// Default constructor.
        inline Vector4NodeData() : m_value(glm::vec4(0.0f)) {};

        /// Constructor.
        inline Vector4NodeData(glm::vec4 value) : m_value(value) {};

        /// Getter only of the value.
        inline glm::vec4 value() const
        {
            return m_value;
        }

        /// @return : the id and the name of this data.
        QtNodes::NodeDataType type() const override
        {
            return QtNodes::NodeDataType {"vec4", "vec4"};
        }

    private:
        glm::vec4 m_value;
    };
}

#endif //SHADERGRAPH_DATA_H
