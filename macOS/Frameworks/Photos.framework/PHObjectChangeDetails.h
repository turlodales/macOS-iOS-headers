//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHObject;

@interface PHObjectChangeDetails : NSObject
{
    PHObject *_objectBeforeChanges;
    PHObject *_objectAfterChanges;
    BOOL _assetContentChanged;
    BOOL _assetCollectionTitlePropertiesChanged;
}

- (void).cxx_destruct;
- (id)description;
@property(readonly) BOOL objectWasDeleted;
@property(readonly, nonatomic) BOOL assetCollectionTitlePropertiesChanged;
@property(readonly) BOOL assetContentChanged;
- (void)_calculateDiffs;
@property(readonly) PHObject *objectAfterChanges;
@property(readonly) PHObject *objectBeforeChanges;
- (id)initWithPHObject:(id)arg1;

@end

