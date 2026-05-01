#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/LaneSide_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CAI_CitadelNPC.hpp"
#include "source2sdk/server/CCitadelPlayerClipComponent.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1af0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelPlayerClipComponent::Storage_t m_CCitadelPlayerClipComponent"
        // static metadata: MNetworkVarNames "int m_iLane"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutStart"
        // static metadata: MNetworkVarNames "GameTime_t m_flFadeOutEnd"
        #pragma pack(push, 1)
        class CNPC_BarrackBoss : public source2sdk::server::CAI_CitadelNPC
        {
        public:
            uint8_t _pad1790[0x18]; // 0x1790
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelPlayerClipComponent"
            // metadata: MNetworkAlias "CCitadelPlayerClipComponent"
            // metadata: MNetworkTypeAlias "CCitadelPlayerClipComponent"
            source2sdk::server::CCitadelPlayerClipComponent m_CCitadelPlayerClipComponent; // 0x17a8            
            uint8_t _pad17c8[0x4]; // 0x17c8
            // metadata: MNetworkEnable
            std::int32_t m_iLane; // 0x17cc            
            uint8_t _pad17d0[0x300]; // 0x17d0
            // m_hTrooperSpawnPoint has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTrooperSpawnPoint;
            char m_hTrooperSpawnPoint[0x4]; // 0x1ad0            
            source2sdk::client::LaneSide_t m_LaneSide; // 0x1ad4            
            uint8_t _pad1ad5[0x3]; // 0x1ad5
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutStart; // 0x1ad8            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            source2sdk::entity2::GameTime_t m_flFadeOutEnd; // 0x1adc            
            uint8_t _pad1ae0[0x10];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNPC_BarrackBoss because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNPC_BarrackBoss) == 0x1af0);
    };
};
