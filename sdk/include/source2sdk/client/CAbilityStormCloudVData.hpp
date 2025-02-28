#pragma once
#include "source2sdk/client/CBaseModifier.hpp"
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CAbilityStormCloudVData : public client::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_AoEPreviewParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEPreviewParticle;
        char m_AoEPreviewParticle[0xe0]; // 0x15c8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_StormCloudModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CBaseModifier> m_StormCloudModifier;
        char m_StormCloudModifier[0x10]; // 0x16a8        
        // m_LightningStrikeAOEModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_LightningStrikeAOEModifier;
        char m_LightningStrikeAOEModifier[0x10]; // 0x16b8        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strLightningStrikeCast; // 0x16c8        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flOscillateFrequency; // 0x16d8        
        float m_flOscillateSpeed; // 0x16dc        
        float m_flOscillateSpeedStart; // 0x16e0        
        float m_flOscillateStartOffset; // 0x16e4        
        float m_flAirDrag; // 0x16e8        
        float m_flFlightAirDrag; // 0x16ec        
        float m_flFlightLateralMoveSpeed; // 0x16f0        
        float m_flVerticalMoveSpeedPercent; // 0x16f4        
        float m_flAirAcceleration; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CAbilityStormCloudVData because it is not a standard-layout class
    static_assert(sizeof(CAbilityStormCloudVData) == 0x1700);
};
