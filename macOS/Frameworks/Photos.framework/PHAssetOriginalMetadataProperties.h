//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString, NSTimeZone;

@interface PHAssetOriginalMetadataProperties : PHAssetPropertySet
{
    short _originalExifOrientation;
    NSString *_originalAssetsUUID;
    long long _originalHeight;
    long long _originalWidth;
    NSString *_originalFilename;
    unsigned long long _originalFilesize;
    NSTimeZone *_timeZone;
    long long _timeZoneOffset;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long timeZoneOffset; // @synthesize timeZoneOffset=_timeZoneOffset;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) unsigned long long originalFilesize; // @synthesize originalFilesize=_originalFilesize;
@property(readonly, nonatomic) short originalExifOrientation; // @synthesize originalExifOrientation=_originalExifOrientation;
@property(readonly, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, nonatomic) long long originalWidth; // @synthesize originalWidth=_originalWidth;
@property(readonly, nonatomic) long long originalHeight; // @synthesize originalHeight=_originalHeight;
@property(readonly, nonatomic) NSString *originalAssetsUUID; // @synthesize originalAssetsUUID=_originalAssetsUUID;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

