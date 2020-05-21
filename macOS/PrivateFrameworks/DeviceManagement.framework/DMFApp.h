//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class DMFAppManagementInformation, NSArray, NSDictionary, NSNumber, NSString;

@interface DMFApp : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isPlaceholder;
    BOOL _isRestricted;
    BOOL _isBlocked;
    BOOL _isUserBasedVPP;
    BOOL _isDeviceBasedVPP;
    BOOL _isLicenseExpired;
    BOOL _isLicenseRevoked;
    BOOL _isUPP;
    BOOL _isValidated;
    BOOL _isAppStoreVendable;
    BOOL _isBetaApp;
    BOOL _isAdHocCodeSigned;
    BOOL _hasUpdateAvailable;
    unsigned long long _type;
    NSString *_displayName;
    NSString *_bundleIdentifier;
    NSNumber *_storeItemIdentifier;
    NSNumber *_externalVersionIdentifier;
    NSString *_version;
    NSString *_shortVersion;
    NSNumber *_staticUsage;
    NSNumber *_dynamicUsage;
    NSNumber *_onDemandResourcesUsage;
    NSNumber *_sharedUsage;
    unsigned long long _installationState;
    NSString *_VPNUUIDString;
    NSArray *_associatedDomains;
    NSDictionary *_configuration;
    NSDictionary *_feedback;
    DMFAppManagementInformation *_managementInformation;
}

+ (BOOL)supportsSecureCoding;
+ (id)stringForInstallationState:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) DMFAppManagementInformation *managementInformation; // @synthesize managementInformation=_managementInformation;
@property(copy, nonatomic) NSDictionary *feedback; // @synthesize feedback=_feedback;
@property(copy, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) NSArray *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(copy, nonatomic) NSString *VPNUUIDString; // @synthesize VPNUUIDString=_VPNUUIDString;
@property(nonatomic) BOOL hasUpdateAvailable; // @synthesize hasUpdateAvailable=_hasUpdateAvailable;
@property(nonatomic) BOOL isAdHocCodeSigned; // @synthesize isAdHocCodeSigned=_isAdHocCodeSigned;
@property(nonatomic) BOOL isBetaApp; // @synthesize isBetaApp=_isBetaApp;
@property(nonatomic) BOOL isAppStoreVendable; // @synthesize isAppStoreVendable=_isAppStoreVendable;
@property(nonatomic) BOOL isValidated; // @synthesize isValidated=_isValidated;
@property(nonatomic) BOOL isUPP; // @synthesize isUPP=_isUPP;
@property(nonatomic) BOOL isLicenseRevoked; // @synthesize isLicenseRevoked=_isLicenseRevoked;
@property(nonatomic) BOOL isLicenseExpired; // @synthesize isLicenseExpired=_isLicenseExpired;
@property(nonatomic) BOOL isDeviceBasedVPP; // @synthesize isDeviceBasedVPP=_isDeviceBasedVPP;
@property(nonatomic) BOOL isUserBasedVPP; // @synthesize isUserBasedVPP=_isUserBasedVPP;
@property(nonatomic) BOOL isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) BOOL isRestricted; // @synthesize isRestricted=_isRestricted;
@property(nonatomic) BOOL isPlaceholder; // @synthesize isPlaceholder=_isPlaceholder;
@property(nonatomic) unsigned long long installationState; // @synthesize installationState=_installationState;
@property(copy, nonatomic) NSNumber *sharedUsage; // @synthesize sharedUsage=_sharedUsage;
@property(copy, nonatomic) NSNumber *onDemandResourcesUsage; // @synthesize onDemandResourcesUsage=_onDemandResourcesUsage;
@property(copy, nonatomic) NSNumber *dynamicUsage; // @synthesize dynamicUsage=_dynamicUsage;
@property(copy, nonatomic) NSNumber *staticUsage; // @synthesize staticUsage=_staticUsage;
@property(copy, nonatomic) NSString *shortVersion; // @synthesize shortVersion=_shortVersion;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;
@property(copy, nonatomic) NSNumber *externalVersionIdentifier; // @synthesize externalVersionIdentifier=_externalVersionIdentifier;
@property(copy, nonatomic) NSNumber *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)_stringForType:(unsigned long long)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;

@end

