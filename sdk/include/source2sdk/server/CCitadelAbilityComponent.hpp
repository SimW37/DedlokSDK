#pragma once
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/server/AbilityResource_t.hpp"
#include "source2sdk/server/ConsumedComponentState_t.hpp"
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
    class CCitadelBaseAbility;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x240
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle<CCitadelBaseAbility> m_vecAbilities"
    // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationSlots"
    // static metadata: MNetworkVarNames "int32 m_arPendingAsyncAbilityReservationAbilityIDs"
    // static metadata: MNetworkVarNames "CHandle< CCitadelBaseAbility> m_hSelectedAbility"
    // static metadata: MNetworkVarNames "EHANDLE m_hPreviouslySelectedAbility"
    // static metadata: MNetworkVarNames "bool m_bPreviousAbilityQueued"
    // static metadata: MNetworkVarNames "float m_flTimeScale"
    // static metadata: MNetworkVarNames "float m_flParticleTimeScale"
    // static metadata: MNetworkVarNames "bool m_bInInterruptState"
    // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceStamina"
    // static metadata: MNetworkVarNames "AbilityResource_t m_ResourceAbility"
    // static metadata: MNetworkVarNames "ConsumedComponentState_t m_vecConsumedComponents"
    #pragma pack(push, 1)
    class CCitadelAbilityComponent : public entity2::CEntityComponent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x80]; // 0x8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CCitadelBaseAbility>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots;
        char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
        char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0xb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
        // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCitadelBaseAbility> m_hSelectedAbility;
        char m_hSelectedAbility[0x4]; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hPreviouslySelectedAbility;
        char m_hPreviouslySelectedAbility[0x4]; // 0xd4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bPreviousAbilityQueued; // 0xd8        
        [[maybe_unused]] std::uint8_t pad_0xd9[0x3]; // 0xd9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
        float m_flTimeScale; // 0xdc        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
        float m_flParticleTimeScale; // 0xe0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInInterruptState; // 0xe4        
        [[maybe_unused]] std::uint8_t pad_0xe5[0x3]; // 0xe5
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        server::AbilityResource_t m_ResourceStamina; // 0xe8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        server::AbilityResource_t m_ResourceAbility; // 0x108        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_vecConsumedComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::ConsumedComponentState_t> m_vecConsumedComponents;
        char m_vecConsumedComponents[0x68]; // 0x128        
        [[maybe_unused]] std::uint8_t pad_0x190[0x48]; // 0x190
        uint32_t m_nExecuteAbilityMask; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4]; // 0x1dc
        bool m_bSelectedEffectsStarted; // 0x1e0        
        [[maybe_unused]] std::uint8_t pad_0x1e1[0x5f];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityComponent) == 0x240);
};
