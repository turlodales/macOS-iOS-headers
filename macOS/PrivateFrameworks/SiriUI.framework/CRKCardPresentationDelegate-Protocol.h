//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class NSViewController;
@protocol CRKAnimationCoordinating, CRKCardPresenting, CRKCardViewControllerDelegate, CRKCardViewControlling, CRKIdentifiedCardSectionViewProviding, CRKIdentifiedProviding;

@protocol CRKCardPresentationDelegate <NSObject>

@optional
@property(readonly, nonatomic) id <CRKCardViewControllerDelegate> cardViewControllerDelegate;
- (double)boundingWidthForPresentation:(id <CRKCardPresenting>)arg1;
- (void)cardPresentation:(id <CRKCardPresenting>)arg1 willTransitionFromCardViewController:(NSViewController<CRKCardViewControlling> *)arg2 toCardViewController:(NSViewController<CRKCardViewControlling> *)arg3 withAnimationCoordinator:(id <CRKAnimationCoordinating>)arg4;
- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardSectionViewProviderOne:(id <CRKIdentifiedCardSectionViewProviding>)arg2 providerTwo:(id <CRKIdentifiedCardSectionViewProviding>)arg3;
- (long long)cardPresentation:(id <CRKCardPresenting>)arg1 compareCardViewControllerProviderOne:(id <CRKIdentifiedProviding>)arg2 providerTwo:(id <CRKIdentifiedProviding>)arg3;
@end

