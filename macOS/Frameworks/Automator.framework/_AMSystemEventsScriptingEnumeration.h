//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

#import "_AMSystemEventsGenericMethods.h"

@class NSString;

@interface _AMSystemEventsScriptingEnumeration : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly) BOOL hidden;
- (id)id;
@property(readonly, copy) NSString *name;
- (id)scriptingEnumerators;

@end

