//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSString;

@interface AFPluginManager : NSObject
{
    NSString *_path;
    NSArray *_domainKeys;
    CDUnknownBlockType _factoryInitializationBlock;
    NSMutableDictionary *_domainKeyDictionary;
    BOOL _hasLoadedBundles;
}

+ (id)pluginManagerForPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)description;
- (void)_registerBundle:(id)arg1;
- (void)_loadBundlesIfNeeded;
- (void)preloadBundles;
- (void)enumerateFactoryInstancesForDomainKey:(id)arg1 groupIdentifier:(id)arg2 classIdentifier:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)initWithPath:(id)arg1 domainKeys:(id)arg2 factoryInitializationBlock:(CDUnknownBlockType)arg3;

@end

