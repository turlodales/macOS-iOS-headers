//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableDictionary, NSNumber, NSString;

@interface PHImportDuplicateInfo : NSObject
{
    NSMutableDictionary *_info;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) double timezoneOffset;
- (id)originatingAssetIdentifier;
@property(readonly, nonatomic) NSString *avchdFingerprint;
@property(readonly, nonatomic) NSString *fingerprint;
@property(readonly, nonatomic) BOOL isInTrash;
@property(readonly, nonatomic) BOOL hasVideoComplement;
@property(readonly, nonatomic) NSNumber *fileSize;
@property(retain, nonatomic) NSDate *alternateImportImageDate;
@property(readonly, nonatomic) NSDate *imageDate;
@property(readonly, nonatomic) NSString *fileName;
- (id)objectID;
- (id)description;
- (BOOL)isLegacy;
- (id)initWithAssetInfo:(id)arg1;

@end

