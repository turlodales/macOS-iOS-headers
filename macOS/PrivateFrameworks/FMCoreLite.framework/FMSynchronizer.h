//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_semaphore;

@interface FMSynchronizer : NSObject
{
    BOOL _timeoutOccurred;
    double _timeout;
    NSString *_info;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(retain, nonatomic) NSString *info; // @synthesize info=_info;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(nonatomic) BOOL timeoutOccurred; // @synthesize timeoutOccurred=_timeoutOccurred;
- (void)wait;
- (void)signal;
- (id)initWithDescription:(id)arg1 andTimeout:(double)arg2;

@end

