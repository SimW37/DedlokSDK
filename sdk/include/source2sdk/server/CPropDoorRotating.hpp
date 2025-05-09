#pragma once
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CEntityBlocker;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10b8
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0x1020        
        float m_flDistance; // 0x102c        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0x1030        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0x1034        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0x1038        
        float m_flAjarAngle; // 0x103c        
        QAngle m_angRotationAjarDeprecated; // 0x1040        
        QAngle m_angRotationClosed; // 0x104c        
        QAngle m_angRotationOpenForward; // 0x1058        
        QAngle m_angRotationOpenBack; // 0x1064        
        QAngle m_angGoal; // 0x1070        
        Vector m_vecForwardBoundsMin; // 0x107c        
        Vector m_vecForwardBoundsMax; // 0x1088        
        Vector m_vecBackBoundsMin; // 0x1094        
        Vector m_vecBackBoundsMax; // 0x10a0        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0x10ac        
        [[maybe_unused]] std::uint8_t pad_0x10ad[0x3]; // 0x10ad
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0x10b0        
        [[maybe_unused]] std::uint8_t pad_0x10b4[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0x10b8);
};
