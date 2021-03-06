//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/NSObject-Protocol.h>

@class NFFieldDetectSession, NFFieldNotification, NFTechnologyEvent;

@protocol NFFieldDetectSessionDelegate <NSObject>

@optional
- (void)fieldDetectSessionDidEndUnexpectedly:(NFFieldDetectSession *)arg1;
- (void)fieldDetectSessionDidExitField:(NFFieldDetectSession *)arg1;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didEnterFieldWithNotification:(NFFieldNotification *)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectTechnology:(NFTechnologyEvent *)arg2;
- (void)fieldDetectSession:(NFFieldDetectSession *)arg1 didDetectField:(BOOL)arg2;
@end

