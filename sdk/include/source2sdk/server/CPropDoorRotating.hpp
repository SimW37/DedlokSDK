#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
#include "source2sdk/server/doorCheck_e.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CEntityBlocker;
    };
};

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
        // Size: 0xf60
        // Has VTable
        #pragma pack(push, 1)
        class CPropDoorRotating : public source2sdk::server::CBasePropDoor
        {
        public:
            Vector m_vecAxis; // 0xec0            
            float m_flDistance; // 0xecc            
            source2sdk::server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xed0            
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xed4            
            // metadata: MNotSaved
            source2sdk::server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xed8            
            // metadata: MNotSaved
            source2sdk::server::doorCheck_e m_eDefaultCheckDirection; // 0xedc            
            float m_flAjarAngle; // 0xee0            
            QAngle m_angRotationAjarDeprecated; // 0xee4            
            QAngle m_angRotationClosed; // 0xef0            
            QAngle m_angRotationOpenForward; // 0xefc            
            QAngle m_angRotationOpenBack; // 0xf08            
            QAngle m_angGoal; // 0xf14            
            // metadata: MNotSaved
            Vector m_vecForwardBoundsMin; // 0xf20            
            // metadata: MNotSaved
            Vector m_vecForwardBoundsMax; // 0xf2c            
            // metadata: MNotSaved
            Vector m_vecBackBoundsMin; // 0xf38            
            // metadata: MNotSaved
            Vector m_vecBackBoundsMax; // 0xf44            
            bool m_bAjarDoorShouldntAlwaysOpen; // 0xf50            
            uint8_t _pad0f51[0x3]; // 0xf51
            // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEntityBlocker> m_hEntityBlocker;
            char m_hEntityBlocker[0x4]; // 0xf54            
            uint8_t _pad0f58[0x8];
            
            // Datamap fields:
            // float InputSetRotationDistance; // 0x0
            // float InputSetSpeed; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPropDoorRotating) == 0xf60);
    };
};
