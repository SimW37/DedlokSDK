#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelItemVData.hpp"
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
    // Size: 0x1758
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Upgrade_MagicCarpetVData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_SummonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_SummonParticle;
        char m_SummonParticle[0xe0]; // 0x1610        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetModifier;
        char m_FlyingCarpetModifier[0x10]; // 0x16f0        
        // m_SummonFlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetModifier;
        char m_SummonFlyingCarpetModifier[0x10]; // 0x1700        
        // m_SummonFlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetVisualModifier;
        char m_SummonFlyingCarpetVisualModifier[0x10]; // 0x1710        
        // m_FlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetVisualModifier;
        char m_FlyingCarpetVisualModifier[0x10]; // 0x1720        
        // m_ShieldModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ShieldModifier;
        char m_ShieldModifier[0x10]; // 0x1730        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flSummonVisualDuration; // 0x1740        
        float m_flBurstSpeedBonus; // 0x1744        
        float m_flBurstSpeedMin; // 0x1748        
        float m_flBurstSpeedDuration; // 0x174c        
        float m_flMinDistanceAboveGround; // 0x1750        
        [[maybe_unused]] std::uint8_t pad_0x1754[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_MagicCarpetVData) == 0x1758);
};
