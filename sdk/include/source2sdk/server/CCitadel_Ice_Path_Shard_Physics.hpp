#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/ice_path_shard_model_desc_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // 
    // static metadata: MNetworkExcludeByName "m_hModel"
    // static metadata: MNetworkVarNames "ice_path_shard_model_desc_t m_ShardDesc"
    // static metadata: MNetworkVarNames "QAngle m_qForward"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "GameTime_t m_flEndTime"
    // static metadata: MNetworkVarNames "float m_flShardWidth"
    #pragma pack(push, 1)
    class CCitadel_Ice_Path_Shard_Physics : public server::CBaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        server::ice_path_shard_model_desc_t m_ShardDesc; // 0x7d0        
        // metadata: MNetworkEnable
        QAngle m_qForward; // 0x808        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnStartTimeChanged"
        entity2::GameTime_t m_flStartTime; // 0x814        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEndTimeChanged"
        entity2::GameTime_t m_flEndTime; // 0x818        
        // metadata: MNetworkEnable
        float m_flShardWidth; // 0x81c        
        [[maybe_unused]] std::uint8_t pad_0x820[0x8];
        
        // Datamap fields:
        // void m_bIsBase; // 0x820
        // void m_hTrooperTrigger; // 0x824
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCitadel_Ice_Path_Shard_Physics because it is not a standard-layout class
    static_assert(sizeof(CCitadel_Ice_Path_Shard_Physics) == 0x828);
};
