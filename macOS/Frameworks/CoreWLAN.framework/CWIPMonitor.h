//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CWIPMonitor : NSObject
{
    NSString *_interfaceName;
    NSString *_wifiServiceID;
    NSString *_ipv4WiFiStateKey;
    NSDictionary *_ipv4WiFiStateConfig;
    NSString *_ipv4WiFiSetupKey;
    NSDictionary *_ipv4WiFiSetupConfig;
    NSString *_ipv6WiFiStateKey;
    NSDictionary *_ipv6WiFiStateConfig;
    NSString *_ipv6WiFiSetupKey;
    NSDictionary *_ipv6WiFiSetupConfig;
    NSString *_ipv4GlobalStateKey;
    NSDictionary *_ipv4GlobalStateConfig;
    NSString *_ipv4GlobalSetupKey;
    NSDictionary *_ipv4GlobalSetupConfig;
    NSString *_ipv6GlobalStateKey;
    NSDictionary *_ipv6GlobalStateConfig;
    NSString *_ipv6GlobalSetupKey;
    NSDictionary *_ipv6GlobalSetupConfig;
    unsigned int _reachabilityFlags;
    NSObject<OS_dispatch_queue> *_internalQueue;
    void *_globalStore;
    void *_networkServiceStore;
    void *_ipStore;
    void *_reachabilityRef;
}

+ (id)ipMonitorForInterfaceWithName:(id)arg1;
@property unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(copy) NSDictionary *ipv6WiFiGlobalSetupConfig; // @synthesize ipv6WiFiGlobalSetupConfig=_ipv6GlobalSetupConfig;
@property(copy) NSString *ipv6GlobalSetupKey; // @synthesize ipv6GlobalSetupKey=_ipv6GlobalSetupKey;
@property(copy) NSDictionary *ipv6WiFiGlobalStateConfig; // @synthesize ipv6WiFiGlobalStateConfig=_ipv6GlobalStateConfig;
@property(copy) NSString *ipv6GlobalStateKey; // @synthesize ipv6GlobalStateKey=_ipv6GlobalStateKey;
@property(copy) NSDictionary *ipv4WiFiGlobalSetupConfig; // @synthesize ipv4WiFiGlobalSetupConfig=_ipv4GlobalSetupConfig;
@property(copy) NSString *ipv4GlobalSetupKey; // @synthesize ipv4GlobalSetupKey=_ipv4GlobalSetupKey;
@property(copy) NSDictionary *ipv4WiFiGlobalStateConfig; // @synthesize ipv4WiFiGlobalStateConfig=_ipv4GlobalStateConfig;
@property(copy) NSString *ipv4GlobalStateKey; // @synthesize ipv4GlobalStateKey=_ipv4GlobalStateKey;
@property(copy) NSDictionary *ipv6WiFiSetupConfig; // @synthesize ipv6WiFiSetupConfig=_ipv6WiFiSetupConfig;
@property(copy) NSString *ipv6WiFiSetupKey; // @synthesize ipv6WiFiSetupKey=_ipv6WiFiSetupKey;
@property(copy) NSDictionary *ipv6WiFiStateConfig; // @synthesize ipv6WiFiStateConfig=_ipv6WiFiStateConfig;
@property(copy) NSString *ipv6WiFiStateKey; // @synthesize ipv6WiFiStateKey=_ipv6WiFiStateKey;
@property(copy) NSDictionary *ipv4WiFiSetupConfig; // @synthesize ipv4WiFiSetupConfig=_ipv4WiFiSetupConfig;
@property(copy) NSString *ipv4WiFiSetupKey; // @synthesize ipv4WiFiSetupKey=_ipv4WiFiSetupKey;
@property(copy) NSDictionary *ipv4WiFiStateConfig; // @synthesize ipv4WiFiStateConfig=_ipv4WiFiStateConfig;
@property(copy) NSString *ipv4WiFiStateKey; // @synthesize ipv4WiFiStateKey=_ipv4WiFiStateKey;
@property(copy) NSString *wifiServiceID; // @synthesize wifiServiceID=_wifiServiceID;
@property(copy) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
- (id)description;
@property(readonly) NSDictionary *ipv6StateConfig; // @dynamic ipv6StateConfig;
@property(readonly) NSDictionary *ipv6SetupConfig; // @dynamic ipv6SetupConfig;
@property(readonly) NSDictionary *ipv6GlobalStateConfig; // @dynamic ipv6GlobalStateConfig;
@property(readonly) NSDictionary *ipv6GlobalSetupConfig; // @dynamic ipv6GlobalSetupConfig;
@property(readonly) NSDictionary *ipv4StateConfig; // @dynamic ipv4StateConfig;
@property(readonly) NSDictionary *ipv4SetupConfig; // @dynamic ipv4SetupConfig;
@property(readonly) NSDictionary *ipv4GlobalStateConfig; // @dynamic ipv4GlobalStateConfig;
@property(readonly) NSDictionary *ipv4GlobalSetupConfig; // @dynamic ipv4GlobalSetupConfig;
@property(readonly) BOOL ipv6Routable; // @dynamic ipv6Routable;
@property(readonly) NSString *ipv6PrimaryServiceID; // @dynamic ipv6PrimaryServiceID;
@property(readonly) BOOL ipv6PrimaryInterface; // @dynamic ipv6PrimaryInterface;
@property(readonly) BOOL ipv4Routable; // @dynamic ipv4Routable;
@property(readonly) BOOL ipv6Available; // @dynamic ipv6Available;
@property(readonly) BOOL ipv4Available; // @dynamic ipv4Available;
@property(readonly) NSString *ipv4PrimaryServiceID; // @dynamic ipv4PrimaryServiceID;
@property(readonly) BOOL ipv4PrimaryInterface; // @dynamic ipv4PrimaryInterface;
@property(readonly) NSString *ipv6Router; // @dynamic ipv6Router;
@property(readonly) NSString *ipv4Router; // @dynamic ipv4Router;
@property(readonly) NSArray *ipv6Addresses; // @dynamic ipv6Addresses;
@property(readonly) NSArray *ipv4Addresses; // @dynamic ipv4Addresses;
@property(readonly) BOOL internetReachable; // @dynamic internetReachable;
- (unsigned int)queryNetworkReachabilityFlags;
- (id)queryGlobalIPv6SetupConfig;
- (id)queryGlobalIPv6StateConfig;
- (id)queryWiFiIPv6SetupConfig;
- (id)queryWiFiIPv6StateConfig;
- (id)queryGlobalIPv4SetupConfig;
- (id)queryGlobalIPv4StateConfig;
- (id)queryWiFiIPv4SetupConfig;
- (id)queryWiFiIPv4StateConfig;
- (id)queryWiFiNetworkServiceID;
- (void)monitorNetworkServiceID:(id)arg1;
- (id)initForInterfaceWithName:(id)arg1;
- (void)dealloc;
- (void)finalize;

@end

