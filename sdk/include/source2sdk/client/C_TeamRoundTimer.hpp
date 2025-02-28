#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x558
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bTimerPaused"
    // static metadata: MNetworkVarNames "float m_flTimeRemaining"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimerEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsDisabled"
    // static metadata: MNetworkVarNames "bool m_bShowInHUD"
    // static metadata: MNetworkVarNames "int m_nTimerLength"
    // static metadata: MNetworkVarNames "int m_nTimerInitialLength"
    // static metadata: MNetworkVarNames "int m_nTimerMaxLength"
    // static metadata: MNetworkVarNames "bool m_bAutoCountdown"
    // static metadata: MNetworkVarNames "int m_nSetupTimeLength"
    // static metadata: MNetworkVarNames "int m_nState"
    // static metadata: MNetworkVarNames "bool m_bStartPaused"
    // static metadata: MNetworkVarNames "bool m_bInCaptureWatchState"
    // static metadata: MNetworkVarNames "float m_flTotalTime"
    // static metadata: MNetworkVarNames "bool m_bStopWatchTimer"
    #pragma pack(push, 1)
    class C_TeamRoundTimer : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTimerPaused"
        bool m_bTimerPaused; // 0x510        
        [[maybe_unused]] std::uint8_t pad_0x511[0x3]; // 0x511
        // metadata: MNetworkEnable
        float m_flTimeRemaining; // 0x514        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimerEndTime; // 0x518        
        // metadata: MNetworkEnable
        bool m_bIsDisabled; // 0x51c        
        // metadata: MNetworkEnable
        bool m_bShowInHUD; // 0x51d        
        [[maybe_unused]] std::uint8_t pad_0x51e[0x2]; // 0x51e
        // metadata: MNetworkEnable
        int32_t m_nTimerLength; // 0x520        
        // metadata: MNetworkEnable
        int32_t m_nTimerInitialLength; // 0x524        
        // metadata: MNetworkEnable
        int32_t m_nTimerMaxLength; // 0x528        
        // metadata: MNetworkEnable
        bool m_bAutoCountdown; // 0x52c        
        [[maybe_unused]] std::uint8_t pad_0x52d[0x3]; // 0x52d
        // metadata: MNetworkEnable
        int32_t m_nSetupTimeLength; // 0x530        
        // metadata: MNetworkEnable
        int32_t m_nState; // 0x534        
        // metadata: MNetworkEnable
        bool m_bStartPaused; // 0x538        
        // metadata: MNetworkEnable
        bool m_bInCaptureWatchState; // 0x539        
        [[maybe_unused]] std::uint8_t pad_0x53a[0x2]; // 0x53a
        // metadata: MNetworkEnable
        float m_flTotalTime; // 0x53c        
        // metadata: MNetworkEnable
        bool m_bStopWatchTimer; // 0x540        
        bool m_bFireFinished; // 0x541        
        bool m_bFire5MinRemain; // 0x542        
        bool m_bFire4MinRemain; // 0x543        
        bool m_bFire3MinRemain; // 0x544        
        bool m_bFire2MinRemain; // 0x545        
        bool m_bFire1MinRemain; // 0x546        
        bool m_bFire30SecRemain; // 0x547        
        bool m_bFire10SecRemain; // 0x548        
        bool m_bFire5SecRemain; // 0x549        
        bool m_bFire4SecRemain; // 0x54a        
        bool m_bFire3SecRemain; // 0x54b        
        bool m_bFire2SecRemain; // 0x54c        
        bool m_bFire1SecRemain; // 0x54d        
        [[maybe_unused]] std::uint8_t pad_0x54e[0x2]; // 0x54e
        int32_t m_nOldTimerLength; // 0x550        
        int32_t m_nOldTimerState; // 0x554        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TeamRoundTimer because it is not a standard-layout class
    static_assert(sizeof(C_TeamRoundTimer) == 0x558);
};
