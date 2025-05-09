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
    // Size: 0x1850
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_WeaponUpgrade_ExpressShot_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_ReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ReadyParticle;
        char m_ReadyParticle[0xe0]; // 0x1668        
        // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
        char m_TracerAdditionParticle[0xe0]; // 0x1748        
        // metadata: MPropertyGroupName "Gameplay"
        float flShotDelay; // 0x1828        
        [[maybe_unused]] std::uint8_t pad_0x182c[0x4]; // 0x182c
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strOffCooldownSound; // 0x1830        
        // metadata: MPropertyGroupName "Modifiers"
        // m_ProcNotificationModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_ProcNotificationModifier;
        char m_ProcNotificationModifier[0x10]; // 0x1840        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_WeaponUpgrade_ExpressShot_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_WeaponUpgrade_ExpressShot_VData) == 0x1850);
};
