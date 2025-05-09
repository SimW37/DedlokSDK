#pragma once
#include "source2sdk/server/CCitadelModifierVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6b8
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_SwingLine_SwingingVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Gameplay"
        CPiecewiseCurve m_PullSpeedScaleCurve; // 0x660        
        float m_flMass; // 0x6a0        
        float m_flBodyForwardForce; // 0x6a4        
        float m_flCameraForwardForce; // 0x6a8        
        float m_flPullForce; // 0x6ac        
        float m_flGravityForce; // 0x6b0        
        float m_flDampingForce; // 0x6b4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_SwingLine_SwingingVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_SwingLine_SwingingVData) == 0x6b8);
};
