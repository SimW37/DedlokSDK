#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCitadelAbilityComponent.hpp"
#include "source2sdk/server/CCitadelAnimatingModelEntity.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"
#include "source2sdk/server/WeakPoint_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1040
        // Has VTable
        // 
        // static metadata: MNetworkIncludeByName "m_bTakesDamage"
        // static metadata: MNetworkIncludeByName "m_nTakeDamageFlags"
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "CCitadelAbilityComponent::Storage_t m_CCitadelAbilityComponent"
        // static metadata: MNetworkVarNames "WeakPoint_t m_vecWeakPoints"
        // static metadata: MNetworkVarNames "bool m_bDestroyed"
        // static metadata: MNetworkVarNames "bool m_bActive"
        // static metadata: MNetworkVarNames "bool m_bFinal"
        #pragma pack(push, 1)
        class CCitadel_Destroyable_Building : public source2sdk::server::CCitadelAnimatingModelEntity
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0xbe0            
            source2sdk::entity2::CEntityIOOutput m_OnDestroyed; // 0xc00            
            source2sdk::entity2::CEntityIOOutput m_OnRevitilized; // 0xc18            
            // m_OnDamageTaken has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnDamageTaken;
            char m_OnDamageTaken[0x20]; // 0xc30            
            // m_OnLifeChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnLifeChanged;
            char m_OnLifeChanged[0x20]; // 0xc50            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeActive; // 0xc70            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeInvulnerable; // 0xc88            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeVulnerable; // 0xca0            
            source2sdk::entity2::CEntityIOOutput m_OnUnderAttack; // 0xcb8            
            source2sdk::entity2::CEntityIOOutput m_OnAttackSubsided; // 0xcd0            
            std::int32_t m_nBuildingHealth; // 0xce8            
            uint8_t _pad0cec[0x4]; // 0xcec
            std::int32_t m_iLane; // 0xcf0            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flDestroyedTime; // 0xcf4            
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flLastDamagedTime; // 0xcf8            
            // metadata: MNotSaved
            QAngle m_angOriginal; // 0xcfc            
            uint8_t _pad0d08[0x20]; // 0xd08
            CUtlSymbolLarge m_backdoorProtectionTrigger; // 0xd28            
            uint8_t _pad0d30[0x8]; // 0xd30
            CUtlSymbolLarge m_strTrooperApproach; // 0xd38            
            uint8_t _pad0d40[0x20]; // 0xd40
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelAbilityComponent"
            // metadata: MNetworkAlias "CCitadelAbilityComponent"
            // metadata: MNetworkTypeAlias "CCitadelAbilityComponent"
            source2sdk::server::CCitadelAbilityComponent m_CCitadelAbilityComponent; // 0xd60            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecWeakPoints has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::WeakPoint_t> m_vecWeakPoints;
            char m_vecWeakPoints[0x68]; // 0xfc8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "DestroyedChanged"
            // metadata: MNotSaved
            bool m_bDestroyed; // 0x1030            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            bool m_bActive; // 0x1031            
            // metadata: MNetworkEnable
            bool m_bFinal; // 0x1032            
            uint8_t _pad1033[0xd];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Destroyable_Building because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Destroyable_Building) == 0x1040);
    };
};
