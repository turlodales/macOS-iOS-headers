//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSURL, NSUUID;

@interface PKPlugInCore : NSObject
{
    NSString *_identifier;
    NSString *_originalIdentifier;
    NSURL *_url;
    NSURL *_containingUrl;
    NSString *_containingBundleIdentifier;
    BOOL _onSystemVolume;
    NSDictionary *_bundleInfoDictionary;
    NSDictionary *_plugInDictionary;
    NSDictionary *_entitlements;
    unsigned long long _hubProtocolVersion;
    NSString *_localizedName;
    NSString *_localizedShortName;
    NSString *_localizedContainingName;
    NSDictionary *_localizedFileProviderActionNames;
    NSDictionary *_annotations;
    long long _lastModified;
    NSUUID *_uuid;
    NSData *_cdhash;
    NSString *_requirement;
    NSURL *_dataContainerURL;
    NSUUID *_discoveryInstanceUUID;
}

+ (id)readSDKDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSURL *dataContainerURL; // @synthesize dataContainerURL=_dataContainerURL;
@property(retain) NSString *requirement; // @synthesize requirement=_requirement;
@property(retain) NSData *cdhash; // @synthesize cdhash=_cdhash;
@property(retain) NSUUID *uuid; // @synthesize uuid=_uuid;
@property long long lastModified; // @synthesize lastModified=_lastModified;
@property(retain) NSDictionary *annotations; // @synthesize annotations=_annotations;
@property(retain) NSString *localizedContainingName; // @synthesize localizedContainingName=_localizedContainingName;
@property unsigned long long hubProtocolVersion; // @synthesize hubProtocolVersion=_hubProtocolVersion;
@property(readonly) NSUUID *discoveryInstanceUUID; // @synthesize discoveryInstanceUUID=_discoveryInstanceUUID;
@property(retain) NSDictionary *entitlements; // @synthesize entitlements=_entitlements;
@property(retain) NSDictionary *plugInDictionary; // @synthesize plugInDictionary=_plugInDictionary;
@property(retain) NSDictionary *bundleInfoDictionary; // @synthesize bundleInfoDictionary=_bundleInfoDictionary;
@property BOOL onSystemVolume; // @synthesize onSystemVolume=_onSystemVolume;
@property(copy) NSString *containingBundleIdentifier; // @synthesize containingBundleIdentifier=_containingBundleIdentifier;
@property(copy) NSURL *containingUrl; // @synthesize containingUrl=_containingUrl;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)_localizedFileProviderActionNamesForPKDict:(id)arg1 fromBundle:(id)arg2;
- (void)_loadLocalizedNames;
- (BOOL)useBundle:(id)arg1 error:(id *)arg2;
@property(readonly) NSDictionary *localizedFileProviderActionNames; // @synthesize localizedFileProviderActionNames=_localizedFileProviderActionNames;
@property(readonly) NSString *localizedShortName; // @synthesize localizedShortName=_localizedShortName;
@property(readonly) NSString *localizedName; // @synthesize localizedName=_localizedName;
- (void)localizedInfoDictionaryForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)augmentInterface:(id)arg1;
- (id)attribute:(id)arg1;
- (id)pluginKey:(id)arg1;
- (id)infoKey:(id)arg1;
@property(readonly) NSDate *timestamp;
@property(readonly) _Bool isData;
@property(readonly) _Bool isDedicated;
@property(readonly) _Bool isHybrid;
@property(readonly) _Bool isMultiplexed;
@property(readonly) _Bool isAppExtension;
@property(readonly) id embeddedProtocolSpec;
@property(readonly) NSString *embeddedCodePath;
@property(readonly) NSString *sdkSpec;
@property(readonly) NSString *principalSpec;
@property(readonly) id protocolSpec;
@property(readonly) NSString *version;
@property(readonly) NSDictionary *attributes;
@property(readonly) NSString *containingPath;
@property(readonly) NSString *path;
@property(readonly) BOOL oldStyle;
- (void)setAnnotation:(id)arg1 value:(id)arg2;
- (void)updateFromForm:(id)arg1;
- (id)diagnose;
- (id)export:(id *)arg1;
- (id)mergeSharedResources:(id)arg1 into:(id)arg2;
- (id)mergeProxyPass:(id)arg1 into:(id)arg2;
- (id)sdkOnlyKeyPaths;
- (id)mergeSDKDictionary:(id)arg1 intoExtensionDictionary:(id)arg2;
- (id)resolveSDKWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;
- (id)sdkDictionaryWithInfoPlist:(id)arg1 extensionPointCache:(id)arg2;
- (void)canonicalize;
- (_Bool)setupWithForm:(id)arg1;
- (id)newAttributesFrom:(id)arg1;
- (id)newMultiplesFrom:(id)arg1;
- (id)newPlugInKitDictionaryFrom:(id)arg1;
- (id)normalizeInfoDictionary:(id)arg1;
- (BOOL)setDictionaries:(id)arg1;
- (_Bool)setupWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithForm:(id)arg1;
- (id)initWithName:(id)arg1 url:(id)arg2 bundleInfo:(id)arg3 uuid:(id)arg4 discoveryInstanceUUID:(id)arg5 extensionPointCache:(id)arg6;
- (id)init;

@end

