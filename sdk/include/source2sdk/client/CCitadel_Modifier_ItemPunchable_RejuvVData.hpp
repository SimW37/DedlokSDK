#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xbf0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_ItemPunchable_RejuvVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            std::int32_t m_iRejuvBossKill01; // 0x760            
            std::int32_t m_iRejuvBossKill02; // 0x764            
            float m_flPhysicsRadius; // 0x768            
            float m_flMaxDistForHeal; // 0x76c            
            // metadata: MPropertyStartGroup "Visuals"
            // m_IsDroppingParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsDroppingParticle;
            char m_IsDroppingParticle[0xe0]; // 0x770            
            // m_IsPunchableParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsPunchableParticle;
            char m_IsPunchableParticle[0xe0]; // 0x850            
            // m_IsFrozenParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_IsFrozenParticle;
            char m_IsFrozenParticle[0xe0]; // 0x930            
            // m_DamagedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DamagedParticle;
            char m_DamagedParticle[0xe0]; // 0xa10            
            // m_AoEHealParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEHealParticle;
            char m_AoEHealParticle[0xe0]; // 0xaf0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_NearRejuvAuraModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_NearRejuvAuraModifier;
            char m_NearRejuvAuraModifier[0x10]; // 0xbd0            
            // metadata: MPropertyGroupName "Audio"
            CSoundEventName m_sHitSound; // 0xbe0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_ItemPunchable_RejuvVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_ItemPunchable_RejuvVData) == 0xbf0);
    };
};
