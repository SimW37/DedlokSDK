#pragma once
#include "source2sdk/client/Hull_t.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/server/CMovementStatsProperty.hpp"
#include "source2sdk/server/RelationshipOverride_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CEconWearable;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xc10
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
    #pragma pack(push, 1)
    class CBaseCombatCharacter : public server::CBaseFlex
    {
    public:
        bool m_bForceServerRagdoll; // 0xb48        
        [[maybe_unused]] std::uint8_t pad_0xb49[0x7]; // 0xb49
        // metadata: MNetworkEnable
        // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CEconWearable>> m_hMyWearables;
        char m_hMyWearables[0x18]; // 0xb50        
        float m_impactEnergyScale; // 0xb68        
        bool m_bApplyStressDamage; // 0xb6c        
        bool m_bDeathEventsDispatched; // 0xb6d        
        [[maybe_unused]] std::uint8_t pad_0xb6e[0x42]; // 0xb6e
        int32_t m_iDamageCount; // 0xbb0        
        [[maybe_unused]] std::uint8_t pad_0xbb4[0x4]; // 0xbb4
        // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::RelationshipOverride_t>* m_pVecRelationships;
        char m_pVecRelationships[0x8]; // 0xbb8        
        CUtlSymbolLarge m_strRelationships; // 0xbc0        
        client::Hull_t m_eHull; // 0xbc8        
        uint32_t m_nNavHullIdx; // 0xbcc        
        server::CMovementStatsProperty m_movementStats; // 0xbd0        
        
        // Datamap fields:
        // void InputBecomeServerRagdoll; // 0x0
        // CUtlSymbolLarge InputSetRelationship; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(CBaseCombatCharacter) == 0xc10);
};
