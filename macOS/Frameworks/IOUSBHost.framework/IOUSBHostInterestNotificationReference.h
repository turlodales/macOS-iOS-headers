//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject
{
    BOOL _interestNotificationPortDestroyed;
    IOUSBHostObject *_hostObject;
    NSRecursiveLock *_interestNotificationLock;
}

- (void).cxx_destruct;
@property(retain) NSRecursiveLock *interestNotificationLock; // @synthesize interestNotificationLock=_interestNotificationLock;
@property BOOL interestNotificationPortDestroyed; // @synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed;
@property __weak IOUSBHostObject *hostObject; // @synthesize hostObject=_hostObject;
- (id)initWithHostObject:(id)arg1;

@end

