//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSLocking.h"

__attribute__((visibility("hidden")))
@interface NSViewHierarchyLock : NSObject <NSLocking>
{
    void *_priv[0];
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)unlockTopMostReader;
- (void)_unlockWithExceptionHandler:(BOOL)arg1;
- (void)unlockWithExceptionHandler;
- (void)unlock;
- (BOOL)tryLockForWriting;
- (void)lockForWritingWithExceptionHandler;
- (void)lockForWriting;
- (BOOL)_lockForWriting:(BOOL)arg1 handler:(BOOL)arg2;
- (void)lock;
- (void)lockForReadingWithExceptionHandler;
- (void)lockForReading;
- (void)_lockForReadingWithExceptionHandler:(BOOL)arg1;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)_isValid;
- (void)_invalidate;
- (void)dealloc;
- (id)init;

@end

