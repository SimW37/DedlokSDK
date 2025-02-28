#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
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
    // Size: 0x958
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public server::CCitadelModifierVData
    {
    public:
        // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
        bool m_bRollOnceForAllBulletsInAShot; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x659[0x3]; // 0x659
        // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
        float m_flMaxBulletsToProcInShot; // 0x65c        
        // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
        bool m_bCanProcMultipleTimesFromSameShot; // 0x660        
        // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
        bool m_bRequiresTargetFilter; // 0x661        
        [[maybe_unused]] std::uint8_t pad_0x662[0x6]; // 0x662
        // metadata: MPropertyStartGroup "Modifiers"
        // m_ProcReadyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_ProcReadyModifier;
        char m_ProcReadyModifier[0x10]; // 0x668        
        // m_PassiveVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_PassiveVictimModifier;
        char m_PassiveVictimModifier[0x10]; // 0x678        
        // metadata: MPropertyGroupName "Visuals"
        // m_ProcReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcReadyParticle;
        char m_ProcReadyParticle[0xe0]; // 0x688        
        // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
        char m_TracerAdditionParticle[0xe0]; // 0x768        
        // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
        char m_ExplodeParticle[0xe0]; // 0x848        
        // metadata: MPropertyStartGroup "Sounds"
        // metadata: MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
        CSoundEventName m_OnBulletRolledProcSound; // 0x928        
        CSoundEventName m_ProcSound; // 0x938        
        CSoundEventName m_ExplodeSound; // 0x948        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Proc_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Modifier_Mirage_SandPhantom_Proc_VData) == 0x958);
};
