//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import "HMFLogging.h"

@class NSString;

@interface HMFAssertion : HMFObject <HMFLogging>
{
    BOOL _valid;
    NSString *_name;
}

+ (id)logCategory;
+ (id)bundleIdentifier;
- (void).cxx_destruct;
@property(getter=isValid) BOOL valid; // @synthesize valid=_valid;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
- (id)logIdentifier;
- (void)mark;
- (void)invalidate;
@property(readonly, copy) NSString *uniqueDescription;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

