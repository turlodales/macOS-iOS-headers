//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OSUpdate/NSObject-Protocol.h>

@class SUOSULaterObserver;

@protocol SUOSULaterDelegate <NSObject>
- (void)laterDidNotOccurForObserver:(SUOSULaterObserver *)arg1 dueToNotBeingOnACPower:(BOOL)arg2;
- (void)nowIsLaterForObserver:(SUOSULaterObserver *)arg1 didDeferRestartCountdown:(BOOL)arg2 replyBlock:(void (^)(void))arg3;
@end

