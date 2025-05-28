#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x5f8
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_flCameraDist"
        // static metadata: MNetworkVarNames "float m_flCameraPitch"
        // static metadata: MNetworkVarNames "float m_flCameraHeight"
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        #pragma pack(push, 1)
        class CCitadelSpectateDirectedCamera : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad05e0[0x4]; // 0x5e0
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "32"
            float m_flCameraDist; // 0x5e4            
            // metadata: MNetworkEnable
            float m_flCameraPitch; // 0x5e8            
            // metadata: MNetworkEnable
            float m_flCameraHeight; // 0x5ec            
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5f0            
            uint8_t _pad05f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelSpectateDirectedCamera because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelSpectateDirectedCamera) == 0x5f8);
    };
};
