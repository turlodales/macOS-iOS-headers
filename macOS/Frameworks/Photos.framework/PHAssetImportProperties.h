//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetImportProperties : PHAssetPropertySet
{
    long long _importedBy;
}

+ (id)propertiesToFetch;
+ (id)propertySetName;
@property(readonly, nonatomic) long long importedBy; // @synthesize importedBy=_importedBy;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3;

@end

