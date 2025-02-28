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
    // Size: 0xbe8
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
    // static metadata: MNetworkVarNames "CHandle< CEconWearable > m_hMyWearables"
    #pragma pack(push, 1)
    class CBaseCombatCharacter : public server::CBaseFlex
    {
    public:
        bool m_bForceServerRagdoll; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb21[0x7]; // 0xb21
        // metadata: MNetworkEnable
        // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CEconWearable>> m_hMyWearables;
        char m_hMyWearables[0x18]; // 0xb28        
        float m_impactEnergyScale; // 0xb40        
        bool m_bApplyStressDamage; // 0xb44        
        bool m_bDeathEventsDispatched; // 0xb45        
        [[maybe_unused]] std::uint8_t pad_0xb46[0x42]; // 0xb46
        int32_t m_iDamageCount; // 0xb88        
        [[maybe_unused]] std::uint8_t pad_0xb8c[0x4]; // 0xb8c
        // m_pVecRelationships has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::RelationshipOverride_t>* m_pVecRelationships;
        char m_pVecRelationships[0x8]; // 0xb90        
        CUtlSymbolLarge m_strRelationships; // 0xb98        
        client::Hull_t m_eHull; // 0xba0        
        uint32_t m_nNavHullIdx; // 0xba4        
        server::CMovementStatsProperty m_movementStats; // 0xba8        
        
        // Datamap fields:
        // int32_t m_LastHitGroup; // 0x540
        // void InputBecomeServerRagdoll; // 0x0
        // CUtlSymbolLarge InputSetRelationship; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCombatCharacter because it is not a standard-layout class
    static_assert(sizeof(CBaseCombatCharacter) == 0xbe8);
};
