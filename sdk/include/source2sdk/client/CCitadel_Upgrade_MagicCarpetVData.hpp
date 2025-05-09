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
    // Size: 0x17a0
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
        char m_SummonParticle[0xe0]; // 0x1668        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_FlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetModifier;
        char m_FlyingCarpetModifier[0x10]; // 0x1748        
        // m_SummonFlyingCarpetModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetModifier;
        char m_SummonFlyingCarpetModifier[0x10]; // 0x1758        
        // m_SummonFlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SummonFlyingCarpetVisualModifier;
        char m_SummonFlyingCarpetVisualModifier[0x10]; // 0x1768        
        // m_FlyingCarpetVisualModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_FlyingCarpetVisualModifier;
        char m_FlyingCarpetVisualModifier[0x10]; // 0x1778        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flSummonVisualDuration; // 0x1788        
        float m_flBurstSpeedBonus; // 0x178c        
        float m_flBurstSpeedMin; // 0x1790        
        float m_flBurstSpeedDuration; // 0x1794        
        float m_flMinDistanceAboveGround; // 0x1798        
        [[maybe_unused]] std::uint8_t pad_0x179c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Upgrade_MagicCarpetVData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Upgrade_MagicCarpetVData) == 0x17a0);
};
