#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_RagdollProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xd78
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
        // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
        #pragma pack(push, 1)
        class C_RagdollPropAttached : public source2sdk::client::C_RagdollProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_boneIndexAttached; // 0xd40            
            // metadata: MNetworkEnable
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xd44            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointBoneSpace; // 0xd48            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointRagdollSpace; // 0xd54            
            Vector m_vecOffset; // 0xd60            
            float m_parentTime; // 0xd6c            
            bool m_bHasParent; // 0xd70            
            uint8_t _pad0d71[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_RagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_RagdollPropAttached) == 0xd78);
    };
};
