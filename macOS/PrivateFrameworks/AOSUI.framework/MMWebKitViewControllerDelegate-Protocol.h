//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AOSUI/NSObject-Protocol.h>

@class MMWebKitViewController, NSError, NSURLResponse;

@protocol MMWebKitViewControllerDelegate <NSObject>

@optional
- (void)mmWebKitViewControllerDidReceiveResponse:(MMWebKitViewController *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)mmWebKitViewControllerDidDismiss:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidFinishLoading:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidFailLoading:(MMWebKitViewController *)arg1 error:(NSError *)arg2;
- (void)mmWebKitViewControllerDidSucceed:(MMWebKitViewController *)arg1;
- (void)mmWebKitViewControllerDidCancel:(MMWebKitViewController *)arg1;
@end

