//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface OBBundleManager : NSObject
{
}

+ (id)sharedManager;
- (id)bundleWithIdentifier:(id)arg1;
- (id)bundlesWithIdentifiers:(id)arg1;
- (id)orderedPrivacyBundlesWithPrivacyPaneBundle:(BOOL)arg1;
- (id)orderedPrivacyBundles;
- (id)_allPrivacyBundles;
- (id)allBundles;
- (id)_bundleSearchPath;

@end

