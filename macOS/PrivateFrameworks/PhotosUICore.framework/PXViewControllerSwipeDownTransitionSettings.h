//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

@class PXSwipeDownSettings;

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings
{
    BOOL _allowSwipeDown;
    double _minimumDimmingOpacity;
    PXSwipeDownSettings *_swipeDownSettings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) PXSwipeDownSettings *swipeDownSettings; // @synthesize swipeDownSettings=_swipeDownSettings;
@property(nonatomic) double minimumDimmingOpacity; // @synthesize minimumDimmingOpacity=_minimumDimmingOpacity;
@property(nonatomic) BOOL allowSwipeDown; // @synthesize allowSwipeDown=_allowSwipeDown;
- (void)setDefaultValues;
- (id)parentSettings;

@end

