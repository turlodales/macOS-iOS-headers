//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class RWIApplication, RWIDebuggable, RWIDrivable;

@protocol RWIApplicationDelegate <NSObject>

@optional
- (void)application:(RWIApplication *)arg1 didRemoveDrivable:(RWIDrivable *)arg2;
- (void)application:(RWIApplication *)arg1 didAddDrivable:(RWIDrivable *)arg2;
- (void)application:(RWIApplication *)arg1 didRemoveDebuggable:(RWIDebuggable *)arg2;
- (void)application:(RWIApplication *)arg1 didAddDebuggable:(RWIDebuggable *)arg2;
@end

