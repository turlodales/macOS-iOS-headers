//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PTDomainInfo, PTProxySettingsDefinition, PTTestRecipeInfo;

@protocol PTDomainServer <NSObject>
- (void)registerRootSettingsProxyDefinition:(PTProxySettingsDefinition *)arg1 forDomainID:(NSString *)arg2;
- (void)registerTestRecipeWithInfo:(PTTestRecipeInfo *)arg1;
- (void)registerDomainWithInfo:(PTDomainInfo *)arg1;
@end

