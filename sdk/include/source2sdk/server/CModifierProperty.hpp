#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Standard-layout class: true
        // Size: 0x240
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "bool m_bAllowModifiersOnDeadEntities"
        // static metadata: MNetworkVarNames "uint32 m_nDisabledGroups"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvDisabledStateMask"
        // static metadata: MNetworkVarNames "uint32 m_bvEnabledPredictedStateMask"
        #pragma pack(push, 1)
        class CModifierProperty
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x8            
            // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x180]; // 0x34
            bool m_bModifierStatesDirty; // 0x1b4            
            bool m_bPredictedOwner; // 0x1b5            
            // metadata: MNetworkEnable
            bool m_bAllowModifiersOnDeadEntities; // 0x1b6            
            std::int8_t m_iLockRefCount; // 0x1b7            
            source2sdk::client::ModifierPropRuntimeHandle_t m_hHandle; // 0x1b8            
            uint8_t _pad01ba[0x2]; // 0x1ba
            std::uint32_t m_nBroadcastEventListenerMask; // 0x1bc            
            uint8_t _pad01c0[0x8]; // 0x1c0
            // metadata: MNetworkEnable
            std::uint32_t m_nDisabledGroups; // 0x1c8            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledStateMask[8]; // 0x1cc            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvDisabledStateMask[8]; // 0x1ec            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledPredictedStateMask[8]; // 0x20c            
            uint8_t _pad022c[0xc]; // 0x22c
            bool m_bParentWantsModifierStateChangeCallback; // 0x238            
            uint8_t _pad0239[0x7];
            
            // Datamap fields:
            // void m_pNotifyOwnerEvents; // 0x1c0
            // void m_vecModifiers; // 0x38
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CModifierProperty, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bModifierStatesDirty) == 0x1b4);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bPredictedOwner) == 0x1b5);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bAllowModifiersOnDeadEntities) == 0x1b6);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_iLockRefCount) == 0x1b7);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_hHandle) == 0x1b8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_nBroadcastEventListenerMask) == 0x1bc);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_nDisabledGroups) == 0x1c8);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvEnabledStateMask) == 0x1cc);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvDisabledStateMask) == 0x1ec);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bvEnabledPredictedStateMask) == 0x20c);
        static_assert(offsetof(source2sdk::server::CModifierProperty, m_bParentWantsModifierStateChangeCallback) == 0x238);
        
        static_assert(sizeof(source2sdk::server::CModifierProperty) == 0x240);
    };
};
