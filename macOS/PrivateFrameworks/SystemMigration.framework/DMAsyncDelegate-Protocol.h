//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSString;

@protocol DMAsyncDelegate
- (void)dmAsyncFinishedForDisk:(struct __DADisk *)arg1 mainError:(int)arg2 detailError:(int)arg3 dictionary:(NSDictionary *)arg4;
- (void)dmAsyncMessageForDisk:(struct __DADisk *)arg1 string:(NSString *)arg2 dictionary:(NSDictionary *)arg3;
- (void)dmAsyncProgressForDisk:(struct __DADisk *)arg1 barberPole:(BOOL)arg2 percent:(float)arg3;
- (void)dmAsyncStartedForDisk:(struct __DADisk *)arg1;

@optional
- (void)dmInterruptibilityChanged:(BOOL)arg1;
@end

