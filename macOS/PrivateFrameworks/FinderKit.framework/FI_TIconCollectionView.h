//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FinderKit/FI_TIconOrGalleryCollectionView.h>

@class NSObject<TIconOrGalleryCollectionViewDelegateProtocol>;

__attribute__((visibility("hidden")))
@interface FI_TIconCollectionView : FI_TIconOrGalleryCollectionView
{
}

- (id)popoverAnchorViewForNode:(const struct TFENode *)arg1;
- (id)iconViewForNode:(const struct TFENode *)arg1;
- (id)iconViewForIndexPath:(id)arg1;
@property(nonatomic) __weak NSObject<TIconOrGalleryCollectionViewDelegateProtocol> *collectionViewDelegate; // @dynamic collectionViewDelegate;

@end

