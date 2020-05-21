//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/NSObject-Protocol.h>

@protocol NACancelable;

@protocol NAScheduler <NSObject>
- (id <NACancelable>)afterDelay:(double)arg1 performBlock:(void (^)(void))arg2;
- (id <NACancelable>)performCancelableBlock:(void (^)(NACancelationToken *))arg1;
- (void)performBlock:(void (^)(void))arg1;
@end

