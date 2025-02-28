#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Size: 0x840
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Modifier_ItemWalkBackVData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_IdleParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IdleParticle;
        char m_IdleParticle[0xe0]; // 0x658        
        // m_RunningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_RunningParticle;
        char m_RunningParticle[0xe0]; // 0x738        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flStopDistance; // 0x818        
        float m_flMaxSpeedDistance; // 0x81c        
        float m_flSlowSpeed; // 0x820        
        float m_flFastSpeed; // 0x824        
        float m_flVerticalOffset; // 0x828        
        float m_flTolerance; // 0x82c        
        float m_flRepathTime; // 0x830        
        float m_flAutoRunTime; // 0x834        
        float m_flTimeToStartAutoRun; // 0x838        
        [[maybe_unused]] std::uint8_t pad_0x83c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_ItemWalkBackVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_ItemWalkBackVData) == 0x840);
};
