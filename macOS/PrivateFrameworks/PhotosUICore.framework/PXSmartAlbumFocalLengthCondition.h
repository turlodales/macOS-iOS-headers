//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXSmartAlbumEXIFCondition.h>

@class NSArray, PXLabeledValue;

@interface PXSmartAlbumFocalLengthCondition : PXSmartAlbumEXIFCondition
{
    NSArray *_focalLengthValues;
}

+ (id)formatter;
+ (id)defaultSingleQueryForEditingContext:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) PXLabeledValue *secondFocalLengthValue;
@property(retain, nonatomic) PXLabeledValue *focalLengthValue;
@property(readonly, nonatomic) NSArray *focalLengthValues;

@end

