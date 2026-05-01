#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"

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
        // Size: 0xaf0
        // Has VTable
        #pragma pack(push, 1)
        class CPhysMagnet : public source2sdk::server::CBaseAnimGraph
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnMagnetAttach; // 0xa80            
            source2sdk::entity2::CEntityIOOutput m_OnMagnetDetach; // 0xa98            
            float m_massScale; // 0xab0            
            float m_forceLimit; // 0xab4            
            float m_torqueLimit; // 0xab8            
            uint8_t _pad0abc[0x4]; // 0xabc
            // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::magnetted_objects_t> m_MagnettedEntities;
            char m_MagnettedEntities[0x18]; // 0xac0            
            bool m_bActive; // 0xad8            
            bool m_bHasHitSomething; // 0xad9            
            uint8_t _pad0ada[0x2]; // 0xada
            float m_flTotalMass; // 0xadc            
            float m_flRadius; // 0xae0            
            source2sdk::entity2::GameTime_t m_flNextSuckTime; // 0xae4            
            std::int32_t m_iMaxObjectsAttached; // 0xae8            
            uint8_t _pad0aec[0x4];
            
            // Datamap fields:
            // void InputToggle; // 0x0
            // void InputTurnOn; // 0x0
            // void InputTurnOff; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPhysMagnet) == 0xaf0);
    };
};
