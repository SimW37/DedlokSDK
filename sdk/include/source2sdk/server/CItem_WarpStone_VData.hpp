#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

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
        // Size: 0x18b0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CItem_WarpStone_VData : public source2sdk::server::CitadelItemVData
        {
        public:
            // metadata: MPropertyGroupName "Modifiers"
            // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_CasterModifier;
            char m_CasterModifier[0x10]; // 0x16a8            
            // m_CasterDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_CasterDebuffModifier;
            char m_CasterDebuffModifier[0x10]; // 0x16b8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x16c8            
            // metadata: MPropertyGroupName "Visuals"
            // m_CastDelayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle;
            char m_CastDelayParticle[0xe0]; // 0x16d8            
            // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
            char m_TeleportTrailParticle[0xe0]; // 0x17b8            
            // metadata: MPropertyGroupName "Gameplay"
            float m_flGroundProbeSpeed; // 0x1898            
            float m_flGroundStepDown; // 0x189c            
            float m_flGroundStepUp; // 0x18a0            
            std::int32_t m_iMaxGroundIterations; // 0x18a4            
            float m_flVelocityScale; // 0x18a8            
            uint8_t _pad18ac[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CItem_WarpStone_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CItem_WarpStone_VData) == 0x18b0);
    };
};
