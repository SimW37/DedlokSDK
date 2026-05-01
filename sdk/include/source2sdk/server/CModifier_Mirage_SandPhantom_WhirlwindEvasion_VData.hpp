#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xbc8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_AttackerHitFx has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AttackerHitFx;
            char m_AttackerHitFx[0xe0]; // 0x748            
            // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
            char m_ImpactParticle[0xe0]; // 0x828            
            // m_playerBuffSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_playerBuffSelf;
            char m_playerBuffSelf[0xe0]; // 0x908            
            // m_playerBuffEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_playerBuffEnemy;
            char m_playerBuffEnemy[0xe0]; // 0x9e8            
            // m_ReflectedBulletTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ReflectedBulletTracerParticle;
            char m_ReflectedBulletTracerParticle[0xe0]; // 0xac8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strAttackerHitSound; // 0xba8            
            CSoundEventName m_strVictimHitSound; // 0xbb8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Mirage_SandPhantom_WhirlwindEvasion_VData) == 0xbc8);
    };
};
