//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class FBSOrientationObserverClient, FBSOrientationUpdate;

@protocol FBSOrientationObserverClientDelegate <NSObject>
- (void)handleOrientationResetForClient:(FBSOrientationObserverClient *)arg1;
- (void)client:(FBSOrientationObserverClient *)arg1 handleOrientationUpdate:(FBSOrientationUpdate *)arg2;
@end

