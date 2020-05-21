//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HMDTLVProtocol.h"
#import "NSCopying.h"

@class HMDWakeConfigurationParamaters, NSData, NSString;

@interface HMDWakeConfiguration : NSObject <NSCopying, HMDTLVProtocol>
{
    NSData *_reserved;
    HMDWakeConfigurationParamaters *_custom1;
    HMDWakeConfigurationParamaters *_custom2;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HMDWakeConfigurationParamaters *custom2; // @synthesize custom2=_custom2;
@property(retain, nonatomic) HMDWakeConfigurationParamaters *custom1; // @synthesize custom1=_custom1;
@property(retain, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property(readonly, copy) NSString *description;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (BOOL)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithReserved:(id)arg1 custom1:(id)arg2 custom2:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

