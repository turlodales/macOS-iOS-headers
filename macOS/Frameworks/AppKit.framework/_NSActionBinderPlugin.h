//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/_NSBinderPlugin.h>

#import "_NSActionBinderPlugin.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _NSActionBinderPlugin : _NSBinderPlugin <_NSActionBinderPlugin>
{
    long long _actionIndex;
}

+ (BOOL)isUsableWithObject:(id)arg1;
- (BOOL)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 object:(id)arg4;
- (BOOL)targetAndArgumentsAcceptableForPerformAction;
- (void)_clearCachedTransientStateOfObject:(id)arg1;
- (void)_cacheTransientStateOfObject:(id)arg1;
- (BOOL)conditionalBehaviorOffByDefault:(id)arg1;
- (BOOL)prefersEnabledOverEditable:(id)arg1;
- (BOOL)needsAction;
- (id)initWithBinder:(id)arg1 object:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

