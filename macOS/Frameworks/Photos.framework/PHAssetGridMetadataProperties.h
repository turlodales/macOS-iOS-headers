//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@class NSString;

@interface PHAssetGridMetadataProperties : PHAssetPropertySet
{
    NSString *_title;
    NSString *_originalFilename;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *originalFilename; // @synthesize originalFilename=_originalFilename;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

