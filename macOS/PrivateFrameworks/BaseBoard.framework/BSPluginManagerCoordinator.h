//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject
{
    NSMutableDictionary *_managersByBundleID;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)pluginManagerForBundle:(id)arg1;
- (id)mainPluginManager;
- (void)registerPluginsFromBundle:(id)arg1;
- (void)registerPlugins;
- (id)_init;

@end

