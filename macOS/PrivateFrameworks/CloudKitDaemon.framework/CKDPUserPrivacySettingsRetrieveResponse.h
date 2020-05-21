//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class CKDPUserPrivacySettings, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying>
{
    NSMutableArray *_applicationBundles;
    CKDPUserPrivacySettings *_userPrivacySettings;
}

+ (Class)applicationBundleType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)applicationBundleAtIndex:(unsigned long long)arg1;
- (unsigned long long)applicationBundlesCount;
- (void)addApplicationBundle:(id)arg1;
- (void)clearApplicationBundles;
@property(readonly, nonatomic) BOOL hasUserPrivacySettings;

@end

