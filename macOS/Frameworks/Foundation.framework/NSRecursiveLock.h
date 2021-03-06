//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@class NSString;

@interface NSRecursiveLock : NSObject <NSLocking>
{
    void *_priv;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (BOOL)isLocking;
@property(copy) NSString *name;
- (id)description;
- (void)unlock;
- (BOOL)tryLock;
- (BOOL)lockBeforeDate:(id)arg1;
- (void)lock;
- (void)dealloc;
- (id)init;

@end

