//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPIdentifier, CKDPLocale, CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions, NSData, NSMutableArray, NSString;

@interface CKDPRequestOperationHeader : PBCodable <NSCopying>
{
    unsigned long long _applicationConfigVersion;
    unsigned long long _deviceFlowControlBudget;
    unsigned long long _deviceFlowControlBudgetCap;
    unsigned long long _deviceProtocolVersion;
    unsigned long long _globalConfigVersion;
    unsigned long long _operationGroupQuantity;
    NSString *_applicationBundle;
    NSString *_applicationContainer;
    int _applicationContainerEnvironment;
    NSString *_applicationVersion;
    CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *_assetAuthorizeGetRequestOptions;
    NSData *_clientChangeToken;
    NSString *_deviceAssignedName;
    NSString *_deviceFlowControlKey;
    float _deviceFlowControlRegeneration;
    NSString *_deviceHardwareID;
    NSString *_deviceHardwareVersion;
    CKDPIdentifier *_deviceIdentifier;
    NSString *_deviceLibraryName;
    NSString *_deviceLibraryVersion;
    NSString *_deviceSoftwareVersion;
    int _isolationLevel;
    CKDPLocale *_locale;
    NSString *_mmcsProtocolVersion;
    NSString *_operationGroupName;
    NSMutableArray *_serviceIdentityKeyIDs;
    int _targetDatabase;
    NSString *_userIDContainerID;
    NSString *_userToken;
    BOOL _deviceSoftwareIsAppleInternal;
    struct {
        unsigned int applicationConfigVersion:1;
        unsigned int deviceFlowControlBudget:1;
        unsigned int deviceFlowControlBudgetCap:1;
        unsigned int deviceProtocolVersion:1;
        unsigned int globalConfigVersion:1;
        unsigned int operationGroupQuantity:1;
        unsigned int applicationContainerEnvironment:1;
        unsigned int deviceFlowControlRegeneration:1;
        unsigned int isolationLevel:1;
        unsigned int targetDatabase:1;
        unsigned int deviceSoftwareIsAppleInternal:1;
    } _has;
}

+ (Class)serviceIdentityKeyIDsType;
- (void).cxx_destruct;
@property(retain, nonatomic) CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions *assetAuthorizeGetRequestOptions; // @synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions;
@property(nonatomic) BOOL deviceSoftwareIsAppleInternal; // @synthesize deviceSoftwareIsAppleInternal=_deviceSoftwareIsAppleInternal;
@property(retain, nonatomic) NSMutableArray *serviceIdentityKeyIDs; // @synthesize serviceIdentityKeyIDs=_serviceIdentityKeyIDs;
@property(nonatomic) unsigned long long operationGroupQuantity; // @synthesize operationGroupQuantity=_operationGroupQuantity;
@property(retain, nonatomic) NSString *operationGroupName; // @synthesize operationGroupName=_operationGroupName;
@property(retain, nonatomic) NSString *userIDContainerID; // @synthesize userIDContainerID=_userIDContainerID;
@property(retain, nonatomic) NSString *deviceHardwareID; // @synthesize deviceHardwareID=_deviceHardwareID;
@property(retain, nonatomic) NSString *deviceAssignedName; // @synthesize deviceAssignedName=_deviceAssignedName;
@property(retain, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property(retain, nonatomic) NSString *mmcsProtocolVersion; // @synthesize mmcsProtocolVersion=_mmcsProtocolVersion;
@property(retain, nonatomic) CKDPLocale *locale; // @synthesize locale=_locale;
@property(nonatomic) unsigned long long deviceProtocolVersion; // @synthesize deviceProtocolVersion=_deviceProtocolVersion;
@property(nonatomic) float deviceFlowControlRegeneration; // @synthesize deviceFlowControlRegeneration=_deviceFlowControlRegeneration;
@property(nonatomic) unsigned long long deviceFlowControlBudgetCap; // @synthesize deviceFlowControlBudgetCap=_deviceFlowControlBudgetCap;
@property(nonatomic) unsigned long long deviceFlowControlBudget; // @synthesize deviceFlowControlBudget=_deviceFlowControlBudget;
@property(retain, nonatomic) NSString *deviceFlowControlKey; // @synthesize deviceFlowControlKey=_deviceFlowControlKey;
@property(retain, nonatomic) NSString *deviceLibraryVersion; // @synthesize deviceLibraryVersion=_deviceLibraryVersion;
@property(retain, nonatomic) NSString *deviceLibraryName; // @synthesize deviceLibraryName=_deviceLibraryName;
@property(retain, nonatomic) NSString *deviceHardwareVersion; // @synthesize deviceHardwareVersion=_deviceHardwareVersion;
@property(retain, nonatomic) NSString *deviceSoftwareVersion; // @synthesize deviceSoftwareVersion=_deviceSoftwareVersion;
@property(retain, nonatomic) CKDPIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(nonatomic) unsigned long long globalConfigVersion; // @synthesize globalConfigVersion=_globalConfigVersion;
@property(nonatomic) unsigned long long applicationConfigVersion; // @synthesize applicationConfigVersion=_applicationConfigVersion;
@property(retain, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
@property(retain, nonatomic) NSString *applicationBundle; // @synthesize applicationBundle=_applicationBundle;
@property(retain, nonatomic) NSString *applicationContainer; // @synthesize applicationContainer=_applicationContainer;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) BOOL hasAssetAuthorizeGetRequestOptions;
@property(nonatomic) BOOL hasDeviceSoftwareIsAppleInternal;
- (id)serviceIdentityKeyIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)serviceIdentityKeyIDsCount;
- (void)addServiceIdentityKeyIDs:(id)arg1;
- (void)clearServiceIdentityKeyIDs;
@property(nonatomic) BOOL hasOperationGroupQuantity;
@property(readonly, nonatomic) BOOL hasOperationGroupName;
- (int)StringAsIsolationLevel:(id)arg1;
- (id)isolationLevelAsString:(int)arg1;
@property(nonatomic) BOOL hasIsolationLevel;
@property(nonatomic) int isolationLevel; // @synthesize isolationLevel=_isolationLevel;
@property(readonly, nonatomic) BOOL hasUserIDContainerID;
- (int)StringAsTargetDatabase:(id)arg1;
- (id)targetDatabaseAsString:(int)arg1;
@property(nonatomic) BOOL hasTargetDatabase;
@property(nonatomic) int targetDatabase; // @synthesize targetDatabase=_targetDatabase;
@property(readonly, nonatomic) BOOL hasDeviceHardwareID;
@property(readonly, nonatomic) BOOL hasDeviceAssignedName;
@property(readonly, nonatomic) BOOL hasClientChangeToken;
- (int)StringAsApplicationContainerEnvironment:(id)arg1;
- (id)applicationContainerEnvironmentAsString:(int)arg1;
@property(nonatomic) BOOL hasApplicationContainerEnvironment;
@property(nonatomic) int applicationContainerEnvironment; // @synthesize applicationContainerEnvironment=_applicationContainerEnvironment;
@property(readonly, nonatomic) BOOL hasMmcsProtocolVersion;
@property(readonly, nonatomic) BOOL hasLocale;
@property(nonatomic) BOOL hasDeviceProtocolVersion;
@property(nonatomic) BOOL hasDeviceFlowControlRegeneration;
@property(nonatomic) BOOL hasDeviceFlowControlBudgetCap;
@property(nonatomic) BOOL hasDeviceFlowControlBudget;
@property(readonly, nonatomic) BOOL hasDeviceFlowControlKey;
@property(readonly, nonatomic) BOOL hasDeviceLibraryVersion;
@property(readonly, nonatomic) BOOL hasDeviceLibraryName;
@property(readonly, nonatomic) BOOL hasDeviceHardwareVersion;
@property(readonly, nonatomic) BOOL hasDeviceSoftwareVersion;
@property(readonly, nonatomic) BOOL hasDeviceIdentifier;
@property(nonatomic) BOOL hasGlobalConfigVersion;
@property(nonatomic) BOOL hasApplicationConfigVersion;
@property(readonly, nonatomic) BOOL hasApplicationVersion;
@property(readonly, nonatomic) BOOL hasApplicationBundle;
@property(readonly, nonatomic) BOOL hasApplicationContainer;
@property(readonly, nonatomic) BOOL hasUserToken;
- (id)_targetDatabaseCKLogValue;
- (id)_isolationLevelCKLogValue;
- (id)_applicationContainerEnvironmentCKLogValue;

@end

