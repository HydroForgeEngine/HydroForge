#include "Skeleton.hpp"

namespace HydroForge
{
    int Skeleton::AddBone(const std::string& name)
    {
        int index = static_cast<int>(m_Bones.size());

        m_Bones.emplace_back(name, index);

        return index;
    }

    Bone* Skeleton::GetBone(int index)
    {
        if (index < 0 || index >= static_cast<int>(m_Bones.size()))
            return nullptr;

        return &m_Bones[index];
    }

    const Bone* Skeleton::GetBone(int index) const
    {
        if (index < 0 || index >= static_cast<int>(m_Bones.size()))
            return nullptr;

        return &m_Bones[index];
    }

    Bone* Skeleton::FindBone(const std::string& name)
    {
        for (auto& bone : m_Bones)
        {
            if (bone.GetName() == name)
                return &bone;
        }

        return nullptr;
    }

    size_t Skeleton::GetBoneCount() const
    {
        return m_Bones.size();
    }
}
