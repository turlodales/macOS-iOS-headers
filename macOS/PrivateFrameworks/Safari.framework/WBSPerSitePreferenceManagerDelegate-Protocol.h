//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WBSPerSitePreference;

@protocol WBSPerSitePreferenceManagerDelegate <NSObject>

@optional
- (void)perSitePreferenceManager:(id <WBSPerSitePreferenceManager>)arg1 didUpdateValueForPreference:(WBSPerSitePreference *)arg2 onDomain:(NSString *)arg3 toValue:(id)arg4;
@end

