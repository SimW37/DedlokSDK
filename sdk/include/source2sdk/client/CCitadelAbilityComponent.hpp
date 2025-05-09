#pragma once
#include "source2sdk/client/AbilityResource_t.hpp"
#include "source2sdk/client/ConsumedComponentState_t.hpp"
#include "source2sdk/entity2/CEntityComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CitadelBaseAbility;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d0
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle<C_CitadelBaseAbility> m_vecAbilities"
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
        [[maybe_unused]] std::uint8_t pad_0x08[0x68]; // 0x8
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_vecAbilities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<CHandle<client::C_CitadelBaseAbility>> m_vecAbilities;
        char m_vecAbilities[0x18]; // 0x70        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationSlots has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationSlots;
        char m_arPendingAsyncAbilityReservationSlots[0x18]; // 0x88        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "Abilities"
        // metadata: MNetworkPriority "32"
        // m_arPendingAsyncAbilityReservationAbilityIDs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_NetworkUtlVectorBase<int32_t> m_arPendingAsyncAbilityReservationAbilityIDs;
        char m_arPendingAsyncAbilityReservationAbilityIDs[0x18]; // 0xa0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompSelectedAbilityChanged"
        // m_hSelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CitadelBaseAbility> m_hSelectedAbility;
        char m_hSelectedAbility[0x4]; // 0xb8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_hPreviouslySelectedAbility has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hPreviouslySelectedAbility;
        char m_hPreviouslySelectedAbility[0x4]; // 0xbc        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bPreviousAbilityQueued; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc1[0x3]; // 0xc1
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompTimeScaleChanged"
        float m_flTimeScale; // 0xc4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "AbiCompParticleTimeScaleChanged"
        float m_flParticleTimeScale; // 0xc8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        bool m_bInInterruptState; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xcd[0x3]; // 0xcd
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::AbilityResource_t m_ResourceStamina; // 0xd0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        client::AbilityResource_t m_ResourceAbility; // 0xf0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerOwnerAndObserversExclusive"
        // m_vecConsumedComponents has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::ConsumedComponentState_t> m_vecConsumedComponents;
        char m_vecConsumedComponents[0x68]; // 0x110        
        [[maybe_unused]] std::uint8_t pad_0x178[0x48]; // 0x178
        uint32_t m_nExecuteAbilityMask; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        bool m_bSelectedEffectsStarted; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadelAbilityComponent because it is not a standard-layout class
    static_assert(sizeof(CCitadelAbilityComponent) == 0x1d0);
};
