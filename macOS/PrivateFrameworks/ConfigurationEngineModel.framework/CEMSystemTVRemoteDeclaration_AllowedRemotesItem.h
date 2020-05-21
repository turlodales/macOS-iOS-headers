//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMSystemTVRemoteDeclaration_AllowedRemotesItem : CEMPayloadBase
{
    NSString *_payloadRemoteDeviceID;
}

+ (id)buildRequiredOnlyWithRemoteDeviceID:(id)arg1;
+ (id)buildWithRemoteDeviceID:(id)arg1;
+ (id)allowedPayloadKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *payloadRemoteDeviceID; // @synthesize payloadRemoteDeviceID=_payloadRemoteDeviceID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

