//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class Banner, BannerContainerView;

@protocol BannerContainerViewDelegate <NSObject>

@optional
- (void)bannerContainerViewDidUninstall:(BannerContainerView *)arg1;
- (void)bannerContainerViewDidUpdateLayoutDuringAnimation:(BannerContainerView *)arg1;
- (void)bannerContainerView:(BannerContainerView *)arg1 didUninstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 willUninstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 installAnimationDidEndForBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 didInstallBanner:(Banner *)arg2;
- (void)bannerContainerView:(BannerContainerView *)arg1 willInstallBanner:(Banner *)arg2;
@end

