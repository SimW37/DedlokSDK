#pragma once
#include "source2sdk/client/CitadelCameraOperationsSequence_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"
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
    // Size: 0x1960
    // Has VTable
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CCitadel_Ability_TurretClone_VData : public server::CitadelAbilityVData
    {
    public:
        // metadata: MPropertyStartGroup "Visuals"
        // m_strTurretParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strTurretParticle;
        char m_strTurretParticle[0xe0]; // 0x15c8        
        // m_strSwapParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwapParticle;
        char m_strSwapParticle[0xe0]; // 0x16a8        
        // m_TurretModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_TurretModel;
        char m_TurretModel[0xe0]; // 0x1788        
        // metadata: MPropertyStartGroup "Sounds"
        CSoundEventName m_strTurretLoopSound; // 0x1868        
        CSoundEventName m_strTurretLoopStartSound; // 0x1878        
        CSoundEventName m_strTurretLoopEndSound; // 0x1888        
        CSoundEventName m_strTurretShootSound; // 0x1898        
        CSoundEventName m_strSwapSound; // 0x18a8        
        CSoundEventName m_strSwapCloneSound; // 0x18b8        
        // metadata: MPropertyStartGroup "Modifiers"
        // m_BuffModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEmbeddedSubclass<server::CCitadelModifier> m_BuffModifier;
        char m_BuffModifier[0x10]; // 0x18c8        
        // metadata: MPropertyStartGroup "Camera"
        client::CitadelCameraOperationsSequence_t m_cameraSequenceTeleport; // 0x18d8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ability_TurretClone_VData because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ability_TurretClone_VData) == 0x1960);
};
