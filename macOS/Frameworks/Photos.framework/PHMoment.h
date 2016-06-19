//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Photos/PHAssetCollection.h>

@class CLLocation, NSDate, NSString;

@interface PHMoment : PHAssetCollection
{
    CLLocation *_approximateLocation;
}

+ (id)identifierCode;
- (id)approximateLocation;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSDate *modificationDate;
@property(readonly, nonatomic) NSString *yearIdentifier;
@property(readonly, nonatomic) NSString *megaMomentIdentifier;
- (unsigned long long)estimatedAssetCount;
- (id)endDate;
- (id)startDate;
- (id)localizedLocationNames;
- (id)localizedTitle;
- (long long)assetCollectionSubtype;
- (long long)assetCollectionType;
- (id)moment;
- (id)initWithModel:(id)arg1 photoLibrary:(id)arg2;

@end

