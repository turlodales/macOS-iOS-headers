//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PTEditingServerDelegate <NSObject>
- (void)setActiveTestRecipeID:(NSString *)arg1;
- (void)sendEvent:(long long)arg1 forTestRecipeID:(NSString *)arg2;
- (void)invokeOutletAtKeyPath:(NSString *)arg1 domainID:(NSString *)arg2;
- (void)restoreDefaultValuesForDomainID:(NSString *)arg1;
- (void)applyArchiveValue:(id)arg1 forRootSettingsKeyPath:(NSString *)arg2 domainID:(NSString *)arg3;
@end

