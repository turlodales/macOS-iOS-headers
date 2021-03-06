//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebpagePreferences : NSObject <WKObject>
{
    struct ObjectStorage<API::WebsitePolicies> _websitePolicies;
    long long _preferredContentMode;
}

+ (id)defaultPreferences;
@property(nonatomic) long long preferredContentMode; // @synthesize preferredContentMode=_preferredContentMode;
@property(readonly) struct Object *_apiObject;
- (void)_setApplicationNameForUserAgentWithModernCompatibility:(id)arg1;
- (id)_applicationNameForUserAgentWithModernCompatibility;
- (void)_setAllowSiteSpecificQuirksToOverrideCompatibilityMode:(BOOL)arg1;
- (BOOL)_allowSiteSpecificQuirksToOverrideCompatibilityMode;
- (id)_customNavigatorPlatform;
- (void)_setCustomNavigatorPlatform:(id)arg1;
- (id)_customUserAgentAsSiteSpecificQuirks;
- (void)_setCustomUserAgentAsSiteSpecificQuirks:(id)arg1;
- (id)_customUserAgent;
- (void)_setCustomUserAgent:(id)arg1;
- (void)_setWebsiteDataStore:(id)arg1;
- (id)_websiteDataStore;
- (void)_setCustomHeaderFields:(id)arg1;
- (id)_customHeaderFields;
- (unsigned long long)_popUpPolicy;
- (void)_setPopUpPolicy:(unsigned long long)arg1;
- (unsigned long long)_deviceOrientationAndMotionAccessPolicy;
- (void)_setDeviceOrientationAndMotionAccessPolicy:(unsigned long long)arg1;
- (long long)_autoplayPolicy;
- (void)_setAutoplayPolicy:(long long)arg1;
- (unsigned long long)_allowedAutoplayQuirks;
- (void)_setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (BOOL)_contentBlockersEnabled;
- (void)_setContentBlockersEnabled:(BOOL)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

