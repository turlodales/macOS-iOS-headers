//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxyDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString, geo_isolater;
@protocol _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>
{
    id <_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    geo_isolater *_networkDefaultsIsolation;
}

+ (id)sharedNetworkDefaults;
+ (void)_ib_disableServerConnection;
+ (BOOL)useLocalProxy;
+ (void)setUseLocalProxy:(BOOL)arg1;
- (void).cxx_destruct;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (void)allKeysAndValues:(CDUnknownBlockType)arg1;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (BOOL)_needsUpdate;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

