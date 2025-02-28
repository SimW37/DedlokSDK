#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x14
    // Has Trivial Destructor
    // 
    // static metadata: MModelGameData
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct CitadelCameraSettings_t
    {
    public:
        float m_flCameraSideOffset; // 0x0        
        float m_flCameraBackOffset; // 0x4        
        float m_flCameraBackOffsetAiming; // 0x8        
        float m_flCameraHeightStanding; // 0xc        
        float m_flCameraHeightCrouching; // 0x10        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CitadelCameraSettings_t, m_flCameraSideOffset) == 0x0);
    static_assert(offsetof(CitadelCameraSettings_t, m_flCameraBackOffset) == 0x4);
    static_assert(offsetof(CitadelCameraSettings_t, m_flCameraBackOffsetAiming) == 0x8);
    static_assert(offsetof(CitadelCameraSettings_t, m_flCameraHeightStanding) == 0xc);
    static_assert(offsetof(CitadelCameraSettings_t, m_flCameraHeightCrouching) == 0x10);
    
    static_assert(sizeof(CitadelCameraSettings_t) == 0x14);
};
