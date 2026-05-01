#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

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
        // Size: 0xac0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float m_gravityScale"
        // static metadata: MNetworkVarNames "float m_linearLimit"
        // static metadata: MNetworkVarNames "float m_linearDamping"
        // static metadata: MNetworkVarNames "float m_angularLimit"
        // static metadata: MNetworkVarNames "float m_angularDamping"
        // static metadata: MNetworkVarNames "float m_linearForce"
        // static metadata: MNetworkVarNames "float m_flFrequency"
        // static metadata: MNetworkVarNames "float m_flDampingRatio"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
        // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
        // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
        // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
        #pragma pack(push, 1)
        class C_TriggerPhysics : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            float m_gravityScale; // 0xa70            
            // metadata: MNetworkEnable
            float m_linearLimit; // 0xa74            
            // metadata: MNetworkEnable
            float m_linearDamping; // 0xa78            
            // metadata: MNetworkEnable
            float m_angularLimit; // 0xa7c            
            // metadata: MNetworkEnable
            float m_angularDamping; // 0xa80            
            // metadata: MNetworkEnable
            float m_linearForce; // 0xa84            
            // metadata: MNetworkEnable
            float m_flFrequency; // 0xa88            
            // metadata: MNetworkEnable
            float m_flDampingRatio; // 0xa8c            
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAt; // 0xa90            
            // metadata: MNetworkEnable
            bool m_bCollapseToForcePoint; // 0xa9c            
            uint8_t _pad0a9d[0x3]; // 0xa9d
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAtWorld; // 0xaa0            
            // metadata: MNetworkEnable
            Vector m_vecLinearForceDirection; // 0xaac            
            // metadata: MNetworkEnable
            bool m_bConvertToDebrisWhenPossible; // 0xab8            
            uint8_t _pad0ab9[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerPhysics) == 0xac0);
    };
};
