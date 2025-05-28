#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x340
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_BreakablePropPickupVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // metadata: MPropertyFriendlyName "Spawn Particle"
            // metadata: MPropertyDescription "Spawn Particle"
            // m_spawnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_spawnParticle;
            char m_spawnParticle[0xe0]; // 0x28            
            // m_gainedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_gainedParticle;
            char m_gainedParticle[0xe0]; // 0x108            
            // metadata: MPropertyFriendlyName "Spawn Particle Color"
            // metadata: MPropertyDescription "Spawn Particle Color"
            Color m_Color; // 0x1e8            
            uint8_t _pad01ec[0x4]; // 0x1ec
            // metadata: MPropertyDescription "Model"
            // metadata: MPropertyProvidesEditContextString
            // m_hModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_hModel;
            char m_hModel[0xe0]; // 0x1f0            
            // metadata: MPropertyFriendlyName "Material group"
            // metadata: MPropertyDescription "Which material group of the model should be used?"
            CModelMaterialGroupName m_sDefaultMaterialGroupName; // 0x2d0            
            // metadata: MPropertyDescription "Pickup Name Loc String"
            CUtlString m_sNameLocString; // 0x2d8            
            std::int32_t m_nNameOffset; // 0x2e0            
            // metadata: MPropertyDescription "Show On Minimap"
            bool m_bShowOnMinimap; // 0x2e4            
            bool m_bIsPermanentPickup; // 0x2e5            
            uint8_t _pad02e6[0x2]; // 0x2e6
            std::int32_t m_iTempParticleSheetIndex; // 0x2e8            
            uint8_t _pad02ec[0x4]; // 0x2ec
            CUtlString m_sMiniMapCssClass; // 0x2f0            
            float m_flParticleRadius; // 0x2f8            
            uint8_t _pad02fc[0x4]; // 0x2fc
            // metadata: MPropertyGroupName "Audio"
            // metadata: MPropertyDescription "Pickup Sound"
            CSoundEventName m_sPickupSound; // 0x300            
            // metadata: MPropertyGroupName "Audio"
            // metadata: MPropertyDescription "Spawn Sound"
            CSoundEventName m_sSpawnSound; // 0x310            
            // metadata: MPropertyDescription "Pickup Radius"
            float m_flPickupRadius; // 0x320            
            uint8_t _pad0324[0x4]; // 0x324
            // metadata: MPropertyDescription "Ambient Sound"
            CSoundEventName m_sAmbientSound; // 0x328            
            // metadata: MPropertyDescription "Pickup Expiration Duration"
            float m_flPickupExpirationDuration; // 0x338            
            uint8_t _pad033c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_BreakablePropPickupVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_BreakablePropPickupVData) == 0x340);
    };
};
