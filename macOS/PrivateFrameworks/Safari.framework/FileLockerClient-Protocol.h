//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSDictionary;

@protocol FileLockerClient <NSObject>
- (void)fileLocker:(const struct FileLocker *)arg1 lockWasStolen:(NSDictionary *)arg2;
- (int)fileLocker:(const struct FileLocker *)arg1 actionForApparentlyAbandonedLock:(NSDictionary *)arg2;
@end

