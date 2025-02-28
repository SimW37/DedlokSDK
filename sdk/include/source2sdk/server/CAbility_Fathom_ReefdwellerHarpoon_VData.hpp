#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/server/CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1688
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbility_Fathom_ReefdwellerHarpoon_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_DetachBuff has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadel_Modifier_ReefdwellerHarpoon_DetachBuff> m_DetachBuff;
        char m_DetachBuff[0x10]; // 0x15c8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strSwapStarted; // 0x15d8        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceFlying; // 0x15e8        
        // metadata: MPropertyStartGroup "+Harpoon Properties"
        float m_flAirSpeedMax; // 0x1670        
        float m_flFallSpeedMax; // 0x1674        
        float m_flAirDrag; // 0x1678        
        float m_flInitialSlowSpeed; // 0x167c        
        float m_flInitialSpeedBias; // 0x1680        
        float m_flMaxSurfacePitch; // 0x1684        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbility_Fathom_ReefdwellerHarpoon_VData because it is not a standard-layout class
    static_assert(sizeof(CAbility_Fathom_ReefdwellerHarpoon_VData) == 0x1688);
};
