#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CServerOnlyEntity.hpp"
#include "source2sdk/server/HintNodeData.hpp"
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
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        #pragma pack(push, 1)
        class CAI_Hint : public source2sdk::server::CServerOnlyEntity
        {
        public:
            source2sdk::server::HintNodeData m_NodeData; // 0x4e0            
            // m_hHintOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hHintOwner;
            char m_hHintOwner[0x4]; // 0x520            
            source2sdk::entity2::GameTime_t m_flNextUseTime; // 0x524            
            // m_OnNPCStartedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStartedUsing;
            char m_OnNPCStartedUsing[0x28]; // 0x528            
            // m_OnNPCStoppedUsing has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<CHandle<source2sdk::server::CBaseEntity>> m_OnNPCStoppedUsing;
            char m_OnNPCStoppedUsing[0x28]; // 0x550            
            float m_nodeFOV; // 0x578            
            bool m_bNodeFOVCheckBehind; // 0x57c            
            uint8_t _pad057d[0x3]; // 0x57d
            Vector m_vecForward; // 0x580            
            uint8_t _pad058c[0x4]; // 0x58c
            CUtlSymbolLarge m_iszAnimgraphEntryAction; // 0x590            
            CUtlSymbolLarge m_iszAnimgraphExitAction; // 0x598            
            CUtlSymbolLarge m_iszAnimgraphEntryCmd; // 0x5a0            
            CUtlSymbolLarge m_iszAnimgraphExitCmd; // 0x5a8            
            CUtlSymbolLarge m_iszNavlinkTargetName; // 0x5b0            
            bool m_bRemoveOnUnreserved; // 0x5b8            
            uint8_t _pad05b9[0x3]; // 0x5b9
            // m_hAssociatedEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hAssociatedEntity;
            char m_hAssociatedEntity[0x4]; // 0x5bc            
            float m_flInteractionDistance; // 0x5c0            
            float m_flCooldown; // 0x5c4            
            CUtlSymbolLarge m_iszNPCFollowsEntity; // 0x5c8            
            
            // Datamap fields:
            // void CAI_HintEnableThink; // 0x0
            // void InputEnableHint; // 0x0
            // void InputDisableHint; // 0x0
            // void InputToggleHint; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_Hint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_Hint) == 0x5d0);
    };
};
