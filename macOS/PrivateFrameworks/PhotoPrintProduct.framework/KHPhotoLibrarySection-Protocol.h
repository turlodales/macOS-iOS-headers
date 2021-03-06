//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoPrintProduct/KHPhotoLibraryBase-Protocol.h>

@class KHPhoto, NSArray, NSString, NSURL;
@protocol KHPhotoLibraryCollection;

@protocol KHPhotoLibrarySection <KHPhotoLibraryBase>
@property(readonly, nonatomic) NSArray *allCollections;
@property(readonly, nonatomic) unsigned long long numberOfCollections;
@property(readonly, nonatomic) NSString *title;
- (KHPhoto *)photoWithURL:(NSURL *)arg1;
- (id <KHPhotoLibraryCollection>)collectionForIdentifier:(NSString *)arg1;
- (id <KHPhotoLibraryCollection>)collectionAtIndex:(unsigned long long)arg1;
@end

