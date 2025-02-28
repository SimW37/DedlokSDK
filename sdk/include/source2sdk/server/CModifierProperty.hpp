#pragma once
#include "source2sdk/client/ModifierPropRuntimeHandle_t.hpp"
#include "source2sdk/entity2/CNetworkVarChainer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x220
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
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        entity2::CNetworkVarChainer __m_pChainEntity; // 0x8        
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x34[0x16e]; // 0x34
        bool m_bModifierStatesDirty; // 0x1a2        
        bool m_bPredictedOwner; // 0x1a3        
        // metadata: MNetworkEnable
        bool m_bAllowModifiersOnDeadEntities; // 0x1a4        
        int8_t m_iLockRefCount; // 0x1a5        
        client::ModifierPropRuntimeHandle_t m_hHandle; // 0x1a6        
        uint32_t m_nBroadcastEventListenerMask; // 0x1a8        
        [[maybe_unused]] std::uint8_t pad_0x1ac[0xc]; // 0x1ac
        // metadata: MNetworkEnable
        uint32_t m_nDisabledGroups; // 0x1b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvEnabledStateMask[7]; // 0x1bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvDisabledStateMask[7]; // 0x1d8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "modifierStatesChanged"
        uint32_t m_bvEnabledPredictedStateMask[7]; // 0x1f4        
        [[maybe_unused]] std::uint8_t pad_0x210[0x8]; // 0x210
        bool m_bParentWantsModifierStateChangeCallback; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x219[0x7];
        
        // Datamap fields:
        // void m_pNotifyOwnerEvents; // 0x1b0
        // void m_vecModifiers; // 0x38
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CModifierProperty, __m_pChainEntity) == 0x8);
    static_assert(offsetof(CModifierProperty, m_hOwner) == 0x30);
    static_assert(offsetof(CModifierProperty, m_bModifierStatesDirty) == 0x1a2);
    static_assert(offsetof(CModifierProperty, m_bPredictedOwner) == 0x1a3);
    static_assert(offsetof(CModifierProperty, m_bAllowModifiersOnDeadEntities) == 0x1a4);
    static_assert(offsetof(CModifierProperty, m_iLockRefCount) == 0x1a5);
    static_assert(offsetof(CModifierProperty, m_hHandle) == 0x1a6);
    static_assert(offsetof(CModifierProperty, m_nBroadcastEventListenerMask) == 0x1a8);
    static_assert(offsetof(CModifierProperty, m_nDisabledGroups) == 0x1b8);
    static_assert(offsetof(CModifierProperty, m_bvEnabledStateMask) == 0x1bc);
    static_assert(offsetof(CModifierProperty, m_bvDisabledStateMask) == 0x1d8);
    static_assert(offsetof(CModifierProperty, m_bvEnabledPredictedStateMask) == 0x1f4);
    static_assert(offsetof(CModifierProperty, m_bParentWantsModifierStateChangeCallback) == 0x218);
    
    static_assert(sizeof(CModifierProperty) == 0x220);
};
