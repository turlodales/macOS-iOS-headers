//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UXView;
@protocol PXCloudQuotaControllerDelegate;

@interface PXCloudQuotaController : NSObject
{
    UXView *_informationBanner;
    id <PXCloudQuotaControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PXCloudQuotaControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UXView *informationBanner; // @synthesize informationBanner=_informationBanner;

@end

