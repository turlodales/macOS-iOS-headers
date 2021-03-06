//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSObject-Protocol.h>

@class NSArray;
@protocol NSCollectionLayoutContainer, _NSCollectionLayoutSupplementaryEnrolling, _NSCollectionPreferredSizes;

@protocol _NSCollectionLayoutAuxiliaryHosting <NSObject>
- (id <_NSCollectionPreferredSizes>)auxiliaryHostPreferredSizes;
- (id <_NSCollectionLayoutSupplementaryEnrolling>)auxiliaryHostSupplementaryEnroller;
- (long long)auxiliaryHostAuxiliaryKind;
- (int)auxiliaryHostLayoutAxis;
- (BOOL)auxiliaryHostShouldLayoutRTL;
- (NSArray *)auxiliaryHostAuxiliaryItems;
- (id <NSCollectionLayoutContainer>)auxiliaryHostContainer;
- (struct CGSize)auxiliaryHostPinningContentSize;
- (struct CGSize)auxiliaryHostContentSize;

@optional
- (struct CGPoint)auxiliaryHostAdditionalFrameOffset;
@end

