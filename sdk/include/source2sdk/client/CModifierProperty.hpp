#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Standard-layout class: true
        // Size: 0x248
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
            // CHandle<source2sdk::client::C_BaseEntity> m_hOwner;
            char m_hOwner[0x4]; // 0x30            
            uint8_t _pad0034[0x173]; // 0x34
            bool m_bModifierStatesDirty; // 0x1a7            
            bool m_bPredictedOwner; // 0x1a8            
            // metadata: MNetworkEnable
            bool m_bAllowModifiersOnDeadEntities; // 0x1a9            
            std::int8_t m_iLockRefCount; // 0x1aa            
            uint8_t _pad01ab[0x1]; // 0x1ab
            source2sdk::client::ModifierPropRuntimeHandle_t m_hHandle; // 0x1ac            
            uint8_t _pad01ae[0x2]; // 0x1ae
            std::uint32_t m_nBroadcastEventListenerMask; // 0x1b0            
            uint8_t _pad01b4[0xc]; // 0x1b4
            // metadata: MNetworkEnable
            std::uint32_t m_nDisabledGroups; // 0x1c0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledStateMask[7]; // 0x1c4            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvDisabledStateMask[7]; // 0x1e0            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "modifierStatesChanged"
            std::uint32_t m_bvEnabledPredictedStateMask[7]; // 0x1fc            
            uint8_t _pad0218[0x30];
            
            // Datamap fields:
            // void m_pNotifyOwnerEvents; // 0x1b8
            // void m_vecModifiers; // 0x38
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CModifierProperty, __m_pChainEntity) == 0x8);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_hOwner) == 0x30);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bModifierStatesDirty) == 0x1a7);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bPredictedOwner) == 0x1a8);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bAllowModifiersOnDeadEntities) == 0x1a9);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_iLockRefCount) == 0x1aa);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_hHandle) == 0x1ac);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_nBroadcastEventListenerMask) == 0x1b0);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_nDisabledGroups) == 0x1c0);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvEnabledStateMask) == 0x1c4);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvDisabledStateMask) == 0x1e0);
        static_assert(offsetof(source2sdk::client::CModifierProperty, m_bvEnabledPredictedStateMask) == 0x1fc);
        
        static_assert(sizeof(source2sdk::client::CModifierProperty) == 0x248);
    };
};
