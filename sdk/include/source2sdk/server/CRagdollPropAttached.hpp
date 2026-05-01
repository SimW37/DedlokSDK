#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CRagdollProp.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc10
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint32 m_boneIndexAttached"
        // static metadata: MNetworkVarNames "uint32 m_ragdollAttachedObjectIndex"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointBoneSpace"
        // static metadata: MNetworkVarNames "Vector m_attachmentPointRagdollSpace"
        #pragma pack(push, 1)
        class CRagdollPropAttached : public source2sdk::server::CRagdollProp
        {
        public:
            // metadata: MNetworkEnable
            std::uint32_t m_boneIndexAttached; // 0xbd0            
            // metadata: MNetworkEnable
            std::uint32_t m_ragdollAttachedObjectIndex; // 0xbd4            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointBoneSpace; // 0xbd8            
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "coord"
            Vector m_attachmentPointRagdollSpace; // 0xbe4            
            bool m_bShouldDetach; // 0xbf0            
            uint8_t _pad0bf1[0xf]; // 0xbf1
            // metadata: MNotSaved
            bool m_bShouldDeleteAttachedActivationRecord; // 0xc00            
            uint8_t _pad0c01[0xf];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollPropAttached because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollPropAttached) == 0xc10);
    };
};
