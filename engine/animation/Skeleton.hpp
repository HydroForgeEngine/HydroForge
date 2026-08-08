#pragma once

#include <vector>
#include <string>

#include "Bone.hpp"

namespace HydroForge
{
    class Skeleton
    {
    public:
        int AddBone(const std::string& name);

        Bone* GetBone(int index);
        const Bone* GetBone(int index) const;

        Bone* FindBone(const std::string& name);

        size_t GetBoneCount() const;

    private:
        std::vector<Bone> m_Bones;
    };
}
