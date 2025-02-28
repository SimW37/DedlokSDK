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
    // Size: 0x1060
    // Has VTable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xfc8        
        float m_flDistance; // 0xfd4        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xfd8        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xfdc        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xfe0        
        float m_flAjarAngle; // 0xfe4        
        QAngle m_angRotationAjarDeprecated; // 0xfe8        
        QAngle m_angRotationClosed; // 0xff4        
        QAngle m_angRotationOpenForward; // 0x1000        
        QAngle m_angRotationOpenBack; // 0x100c        
        QAngle m_angGoal; // 0x1018        
        Vector m_vecForwardBoundsMin; // 0x1024        
        Vector m_vecForwardBoundsMax; // 0x1030        
        Vector m_vecBackBoundsMin; // 0x103c        
        Vector m_vecBackBoundsMax; // 0x1048        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0x1054        
        [[maybe_unused]] std::uint8_t pad_0x1055[0x3]; // 0x1055
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0x1058        
        [[maybe_unused]] std::uint8_t pad_0x105c[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0x1060);
};
