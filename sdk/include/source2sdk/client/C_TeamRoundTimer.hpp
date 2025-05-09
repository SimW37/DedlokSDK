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
    // Size: 0x628
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
        bool m_bTimerPaused; // 0x5e0        
        [[maybe_unused]] std::uint8_t pad_0x5e1[0x3]; // 0x5e1
        // metadata: MNetworkEnable
        float m_flTimeRemaining; // 0x5e4        
        // metadata: MNetworkEnable
        entity2::GameTime_t m_flTimerEndTime; // 0x5e8        
        // metadata: MNetworkEnable
        bool m_bIsDisabled; // 0x5ec        
        // metadata: MNetworkEnable
        bool m_bShowInHUD; // 0x5ed        
        [[maybe_unused]] std::uint8_t pad_0x5ee[0x2]; // 0x5ee
        // metadata: MNetworkEnable
        int32_t m_nTimerLength; // 0x5f0        
        // metadata: MNetworkEnable
        int32_t m_nTimerInitialLength; // 0x5f4        
        // metadata: MNetworkEnable
        int32_t m_nTimerMaxLength; // 0x5f8        
        // metadata: MNetworkEnable
        bool m_bAutoCountdown; // 0x5fc        
        [[maybe_unused]] std::uint8_t pad_0x5fd[0x3]; // 0x5fd
        // metadata: MNetworkEnable
        int32_t m_nSetupTimeLength; // 0x600        
        // metadata: MNetworkEnable
        int32_t m_nState; // 0x604        
        // metadata: MNetworkEnable
        bool m_bStartPaused; // 0x608        
        // metadata: MNetworkEnable
        bool m_bInCaptureWatchState; // 0x609        
        [[maybe_unused]] std::uint8_t pad_0x60a[0x2]; // 0x60a
        // metadata: MNetworkEnable
        float m_flTotalTime; // 0x60c        
        // metadata: MNetworkEnable
        bool m_bStopWatchTimer; // 0x610        
        bool m_bFireFinished; // 0x611        
        bool m_bFire5MinRemain; // 0x612        
        bool m_bFire4MinRemain; // 0x613        
        bool m_bFire3MinRemain; // 0x614        
        bool m_bFire2MinRemain; // 0x615        
        bool m_bFire1MinRemain; // 0x616        
        bool m_bFire30SecRemain; // 0x617        
        bool m_bFire10SecRemain; // 0x618        
        bool m_bFire5SecRemain; // 0x619        
        bool m_bFire4SecRemain; // 0x61a        
        bool m_bFire3SecRemain; // 0x61b        
        bool m_bFire2SecRemain; // 0x61c        
        bool m_bFire1SecRemain; // 0x61d        
        [[maybe_unused]] std::uint8_t pad_0x61e[0x2]; // 0x61e
        int32_t m_nOldTimerLength; // 0x620        
        int32_t m_nOldTimerState; // 0x624        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TeamRoundTimer because it is not a standard-layout class
    static_assert(sizeof(C_TeamRoundTimer) == 0x628);
};
