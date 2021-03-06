//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMApplicationControlDeclaration_InstallSchedule : CEMPayloadBase
{
    NSString *_payloadMode;
    NSNumber *_payloadDuration;
    NSString *_payloadStartTime;
    NSString *_payloadEndTime;
}

+ (id)buildRequiredOnlyWithMode:(id)arg1;
+ (id)buildWithMode:(id)arg1 withDuration:(id)arg2 withStartTime:(id)arg3 withEndTime:(id)arg4;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadEndTime; // @synthesize payloadEndTime=_payloadEndTime;
@property(copy, nonatomic) NSString *payloadStartTime; // @synthesize payloadStartTime=_payloadStartTime;
@property(copy, nonatomic) NSNumber *payloadDuration; // @synthesize payloadDuration=_payloadDuration;
@property(copy, nonatomic) NSString *payloadMode; // @synthesize payloadMode=_payloadMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

