//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface DeviceTypeDeviceIdentity : NSObject
{
    BOOL _is_dev_board;
    BOOL _is_fpga;
    BOOL _is_ipod;
    BOOL _is_ipad;
    BOOL _is_audio_accessory;
    BOOL _has_telephony;
    BOOL _should_hactivate;
    BOOL _is_internal_build;
    BOOL _has_internal_diagnostics;
    NSString *_product_type;
    NSString *_device_class;
    NSString *_hardware_model;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL has_internal_diagnostics; // @synthesize has_internal_diagnostics=_has_internal_diagnostics;
@property(readonly, nonatomic) BOOL is_internal_build; // @synthesize is_internal_build=_is_internal_build;
@property(readonly, nonatomic) BOOL should_hactivate; // @synthesize should_hactivate=_should_hactivate;
@property(readonly, nonatomic) BOOL has_telephony; // @synthesize has_telephony=_has_telephony;
@property(readonly, nonatomic) BOOL is_audio_accessory; // @synthesize is_audio_accessory=_is_audio_accessory;
@property(readonly, nonatomic) BOOL is_ipad; // @synthesize is_ipad=_is_ipad;
@property(readonly, nonatomic) BOOL is_ipod; // @synthesize is_ipod=_is_ipod;
@property(readonly, nonatomic) BOOL is_fpga; // @synthesize is_fpga=_is_fpga;
@property(readonly, nonatomic) BOOL is_dev_board; // @synthesize is_dev_board=_is_dev_board;
@property(readonly, copy, nonatomic) NSString *hardware_model; // @synthesize hardware_model=_hardware_model;
@property(readonly, copy, nonatomic) NSString *device_class; // @synthesize device_class=_device_class;
@property(readonly, copy, nonatomic) NSString *product_type; // @synthesize product_type=_product_type;
- (id)copyDeviceTreeInt:(id)arg1 key:(id)arg2 defaultValue:(int)arg3;
- (id)copyBootArgs;
- (id)copyDeviceTreeProperty:(id)arg1 key:(id)arg2;
- (id)init;

@end

