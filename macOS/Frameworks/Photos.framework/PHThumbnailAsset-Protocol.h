//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSObject-Protocol.h>

@class NSManagedObjectID, PHPhotoLibrary;

@protocol PHThumbnailAsset <NSCopying, NSObject>
@property(readonly, nonatomic) long long cloudPlaceholderKind;
@property(readonly, nonatomic) BOOL complete;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@end

