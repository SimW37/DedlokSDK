#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/modellib/SharedMovementGait_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x40
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct PathAccompanyNode_t
        {
        public:
            Vector m_vInitialPosition; // 0x0            
            float m_flRadius; // 0xc            
            float m_flRoll; // 0x10            
            source2sdk::modellib::SharedMovementGait_t m_eMinMovementGaitOverride; // 0x14            
            source2sdk::modellib::SharedMovementGait_t m_eMaxMovementGaitOverride; // 0x15            
            uint8_t _pad0016[0x2]; // 0x16
            Vector m_vWorldPosition; // 0x18            
            Vector m_vForward; // 0x24            
            Vector m_vLeft; // 0x30            
            float m_flDistToNext; // 0x3c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vInitialPosition) == 0x0);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRadius) == 0xc);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flRoll) == 0x10);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_eMinMovementGaitOverride) == 0x14);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_eMaxMovementGaitOverride) == 0x15);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vWorldPosition) == 0x18);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vForward) == 0x24);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_vLeft) == 0x30);
        static_assert(offsetof(source2sdk::server::PathAccompanyNode_t, m_flDistToNext) == 0x3c);
        
        static_assert(sizeof(source2sdk::server::PathAccompanyNode_t) == 0x40);
    };
};
