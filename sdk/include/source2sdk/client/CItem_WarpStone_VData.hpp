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
    // Size: 0x1818
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CItem_WarpStone_VData : public client::CitadelItemVData
    {
    public:
        // metadata: MPropertyGroupName "Modifiers"
        // m_CasterModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterModifier;
        char m_CasterModifier[0x10]; // 0x1610        
        // m_CasterDebuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_CasterDebuffModifier;
        char m_CasterDebuffModifier[0x10]; // 0x1620        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strExplodeSound; // 0x1630        
        // metadata: MPropertyGroupName "Visuals"
        // m_CastDelayParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastDelayParticle;
        char m_CastDelayParticle[0xe0]; // 0x1640        
        // m_TeleportTrailParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TeleportTrailParticle;
        char m_TeleportTrailParticle[0xe0]; // 0x1720        
        // metadata: MPropertyGroupName "Gameplay"
        float m_flGroundProbeSpeed; // 0x1800        
        float m_flGroundStepDown; // 0x1804        
        float m_flGroundStepUp; // 0x1808        
        int32_t m_iMaxGroundIterations; // 0x180c        
        float m_flVelocityScale; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1814[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem_WarpStone_VData because it is not a standard-layout class
    static_assert(sizeof(CItem_WarpStone_VData) == 0x1818);
};
