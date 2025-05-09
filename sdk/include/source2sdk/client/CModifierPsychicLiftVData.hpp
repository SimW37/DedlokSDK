#pragma once
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CCitadel_Modifier_StunnedVData.hpp"
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
    // Size: 0x950
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CModifierPsychicLiftVData : public client::CCitadel_Modifier_StunnedVData
    {
    public:
        // metadata: MPropertyStartGroup "Modifiers"
        // m_SilenceModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_SilenceModifier;
        char m_SilenceModifier[0x10]; // 0x740        
        // m_DisarmModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<client::CCitadelModifier> m_DisarmModifier;
        char m_DisarmModifier[0x10]; // 0x750        
        // metadata: MPropertyStartGroup "Visuals"
        // m_LiftParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LiftParticle;
        char m_LiftParticle[0xe0]; // 0x760        
        // m_ImpactParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ImpactParticle;
        char m_ImpactParticle[0xe0]; // 0x840        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strImpactSound; // 0x920        
        // metadata: MPropertyStartGroup "Gameplay"
        float m_flRiseTime; // 0x930        
        float m_flRiseAcc; // 0x934        
        float m_flRiseMaxSpeed; // 0x938        
        float m_flRiseDecayFracStart; // 0x93c        
        float m_flRiseDecayFracEnd; // 0x940        
        float m_flSlamAcc; // 0x944        
        float m_flSlamMaxSpeed; // 0x948        
        float m_flSlamImpactRadius; // 0x94c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CModifierPsychicLiftVData because it is not a standard-layout class
    static_assert(sizeof(CModifierPsychicLiftVData) == 0x950);
};
