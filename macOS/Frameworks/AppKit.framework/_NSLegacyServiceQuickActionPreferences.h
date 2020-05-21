//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_NSQuickActionPreferences.h"

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _NSLegacyServiceQuickActionPreferences : NSObject <_NSQuickActionPreferences>
{
    NSString *_legacyServicePresentationMode;
    NSMutableSet *_legacyServiceActions;
}

+ (id)preferencesWithPresentation:(id)arg1;
- (void).cxx_destruct;
- (void)save;
- (void)setActive:(BOOL)arg1 forQuickAction:(id)arg2;
- (id)applyActive:(id)arg1;
- (id)initWithLegacyServicePresentationMode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

