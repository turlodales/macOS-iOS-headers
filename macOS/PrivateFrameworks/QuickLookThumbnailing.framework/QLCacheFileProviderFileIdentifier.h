//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLookThumbnailing/QLCacheFileIdentifier.h>

#import <QuickLookThumbnailing/NSSecureCoding-Protocol.h>

@class NSString;

@interface QLCacheFileProviderFileIdentifier : QLCacheFileIdentifier <NSSecureCoding>
{
    NSString *_fileProviderIdentifier;
    NSString *_itemIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (Class)versionedFileIdentifierClass;
+ (id)knownFileProviderIdentifiersSoFar;
- (void).cxx_destruct;
@property(readonly, copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(readonly, copy) NSString *fileProviderIdentifier; // @synthesize fileProviderIdentifier=_fileProviderIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFileProviderIdentifier:(id)arg1 itemIdentifier:(id)arg2;

@end

