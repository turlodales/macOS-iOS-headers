//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBApplicationDelegate.h"

@class NSError;

@interface _AMSBRetainingApplicationDelegate : NSObject <SBApplicationDelegate>
{
    NSError *_error;
}

+ (id)applicationDelegate;
@property(retain) NSError *error; // @synthesize error=_error;
- (id)eventDidFail:(const struct AEDesc *)arg1 withError:(id)arg2;
- (void)dealloc;

@end

