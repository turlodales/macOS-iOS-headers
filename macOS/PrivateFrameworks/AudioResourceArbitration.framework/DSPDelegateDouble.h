//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "dspd_DSPDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DSPDelegateDouble : NSObject <dspd_DSPDelegate>
{
    // Error parsing type: {DSPDelegateDouble_Data="negotiateHandler_"{function<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>="__f_"{__value_func<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>="__buf_"{type="__lx"[32C]}"__f_"^{__base<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}"adaptHandler_"{function<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>="__f_"{__value_func<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>="__buf_"{type="__lx"[32C]}"__f_"^{__base<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}}, name: admData_
}

+     // Error parsing type: @24@0:8r^{DSPDelegateDouble_Data={function<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}{function<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}}16, name: dspDelegateDoubleWithData:
+ (id)dspDelegateDouble;
+ (id)instance;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) vector_a93e9522 muteRecords;
@property(readonly, nonatomic) vector_df89e1f1 scalarVolumeRecords;
-     // Error parsing type: v64@0:8{function<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}16, name: setAdaptHandler:
-     // Error parsing type: v64@0:8{function<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}16, name: setNegotiateHandler:
- (expected_0910f26e)adaptToConfigurationChange:(id)arg1;
- (expected_2b9a0a05)negotiateConfigurationChange:(id)arg1;
- (id)deactivationChangeRequestWithSession:(unsigned int)arg1;
- (id)activationChangeRequestWithSession:(unsigned int)arg1;
-     // Error parsing type: @24@0:8r^{DSPDelegateDouble_Data={function<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::NegotiateResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}{function<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={__value_func<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>={type=[32C]}^{__base<caulk::expected<dspd::AdaptResponse, std::__1::error_code> (id<dspd_ConfigurationChangeRequest>)>}}}}16, name: init:
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

