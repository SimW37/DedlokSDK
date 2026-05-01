#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
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
        // Size: 0x878
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CHandle<CCitadelZipLineNode> m_vecConnections"
        // static metadata: MNetworkVarNames "int m_vecConnectionDir"
        // static metadata: MNetworkVarNames "Vector m_vTangentIn"
        // static metadata: MNetworkVarNames "Vector m_vTangentOut"
        // static metadata: MNetworkVarNames "float m_flCumulativeDistance"
        // static metadata: MNetworkVarNames "int16 m_iNodeIndex"
        // static metadata: MNetworkVarNames "int16 m_eCaptureState"
        // static metadata: MNetworkVarNames "int16 m_iPrimaryLane"
        // static metadata: MNetworkVarNames "bool m_bUseBaseLaneColor"
        // static metadata: MNetworkVarNames "int16 m_nRopesParity"
        // static metadata: MNetworkVarNames "bool m_bCornerNode"
        // static metadata: MNetworkVarNames "bool m_bCapturable"
        // static metadata: MNetworkVarNames "bool m_bDisableZippingToByPlayers"
        // static metadata: MNetworkVarNames "float m_flSpeedMultiplierToBaseBonus"
        // static metadata: MNetworkVarNames "float m_flSpeedMultiplierFromBaseBonus"
        // static metadata: MNetworkVarNames "EHANDLE m_hGuardingBosses"
        // static metadata: MNetworkVarNames "float m_flRopeRadius"
        #pragma pack(push, 1)
        class CCitadelZipLineNode : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad0778[0x38]; // 0x778
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "connectionsChanged"
            // metadata: MNotSaved
            // m_vecConnections has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CCitadelZipLineNode>> m_vecConnections;
            char m_vecConnections[0x18]; // 0x7b0            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_vecConnectionDir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<std::int32_t> m_vecConnectionDir;
            char m_vecConnectionDir[0x18]; // 0x7c8            
            // metadata: MNetworkEnable
            Vector m_vTangentIn; // 0x7e0            
            // metadata: MNetworkEnable
            Vector m_vTangentOut; // 0x7ec            
            // metadata: MNetworkEnable
            float m_flCumulativeDistance; // 0x7f8            
            uint8_t _pad07fc[0x24]; // 0x7fc
            CUtlSymbolLarge m_strGuardBossName; // 0x820            
            CUtlSymbolLarge m_strGuardBossName2; // 0x828            
            CUtlSymbolLarge m_strGuardBossName3; // 0x830            
            uint8_t _pad0838[0x4]; // 0x838
            // metadata: MNetworkEnable
            std::int16_t m_iNodeIndex; // 0x83c            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int16_t m_eCaptureState; // 0x83e            
            // metadata: MNetworkEnable
            std::int16_t m_iPrimaryLane; // 0x840            
            // metadata: MNetworkEnable
            bool m_bUseBaseLaneColor; // 0x842            
            uint8_t _pad0843[0x1]; // 0x843
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            std::int16_t m_nRopesParity; // 0x844            
            // metadata: MNetworkEnable
            bool m_bCornerNode; // 0x846            
            // metadata: MNetworkEnable
            bool m_bCapturable; // 0x847            
            // metadata: MNetworkEnable
            bool m_bDisableZippingToByPlayers; // 0x848            
            uint8_t _pad0849[0x3]; // 0x849
            // metadata: MNetworkEnable
            float m_flSpeedMultiplierToBaseBonus; // 0x84c            
            // metadata: MNetworkEnable
            float m_flSpeedMultiplierFromBaseBonus; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_hGuardingBosses has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CNetworkUtlVectorBase<CHandle<source2sdk::server::CBaseEntity>> m_hGuardingBosses;
            char m_hGuardingBosses[0x18]; // 0x858            
            // metadata: MNetworkEnable
            float m_flRopeRadius; // 0x870            
            uint8_t _pad0874[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelZipLineNode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelZipLineNode) == 0x878);
    };
};
