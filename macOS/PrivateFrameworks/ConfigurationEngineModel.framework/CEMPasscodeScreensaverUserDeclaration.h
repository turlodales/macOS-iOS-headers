//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class NSNumber, NSString;

@interface CEMPasscodeScreensaverUserDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    NSString *_payloadModulePath;
    NSNumber *_payloadIdleTime;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withModulePath:(id)arg2 withIdleTime:(id)arg3;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *payloadIdleTime; // @synthesize payloadIdleTime=_payloadIdleTime;
@property(copy, nonatomic) NSString *payloadModulePath; // @synthesize payloadModulePath=_payloadModulePath;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

