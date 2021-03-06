//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSConditionLock, NSString;

@interface LDAssetQuery : NSObject
{
    NSString *_language;
    NSConditionLock *_conditionLock;
    BOOL _hasCompleted;
    BOOL _waitTimedOut;
}

- (BOOL)waitForCompletion;
- (void)runInBackground;
- (void)runInForeground;
- (void)_runInForeground:(BOOL)arg1;
@property(readonly) BOOL hasCompleted;
- (void)dealloc;
- (id)initWithLanguage:(id)arg1;

@end

