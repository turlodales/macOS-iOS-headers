//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EFLocked : NSObject
{
    struct os_unfair_lock_s _lock;
    id _object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct os_unfair_lock_s *unfairLockForTesting;
- (void)setObject:(id)arg1;
- (void)performWhileLocked:(CDUnknownBlockType)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithObject:(id)arg1;

@end

