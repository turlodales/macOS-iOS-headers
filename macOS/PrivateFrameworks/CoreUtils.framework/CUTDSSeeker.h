//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CUTDSXPCClientInterface.h"
#import "NSSecureCoding.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>, NSString, NSXPCConnection;

@interface CUTDSSeeker : NSObject <CUTDSXPCClientInterface, NSSecureCoding>
{
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    NSXPCConnection *_xpcCnx;
    BOOL _directedOnly;
    BOOL _passive;
    int _dataLinkType;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _endpointFoundHandler;
    CDUnknownBlockType _endpointLostHandler;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    NSString *_serviceType;
    NSString *_xpcServiceName;
    NSMutableSet *_endpoints;
    unsigned long long _tdsHashProvide;
    unsigned long long _tdsHashSeek;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long tdsHashSeek; // @synthesize tdsHashSeek=_tdsHashSeek;
@property(nonatomic) unsigned long long tdsHashProvide; // @synthesize tdsHashProvide=_tdsHashProvide;
@property(retain, nonatomic) NSMutableSet *endpoints; // @synthesize endpoints=_endpoints;
@property(copy, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) BOOL passive; // @synthesize passive=_passive;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointLostHandler; // @synthesize endpointLostHandler=_endpointLostHandler;
@property(copy, nonatomic) CDUnknownBlockType endpointFoundHandler; // @synthesize endpointFoundHandler=_endpointFoundHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) BOOL directedOnly; // @synthesize directedOnly=_directedOnly;
@property(nonatomic) int dataLinkType; // @synthesize dataLinkType=_dataLinkType;
- (void)xpcTDSSeekerEndpointLost:(id)arg1;
- (void)xpcTDSSeekerEndpointFound:(id)arg1;
- (void)xpcTDSProviderStateChanged:(unsigned int)arg1;
- (void)updateEndpointsForDevices:(id)arg1;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_interrupted;
- (void)_ensureXPCStarted;
- (void)_activateXPCWithCompletion:(CDUnknownBlockType)arg1 reactivate:(BOOL)arg2;
- (void)_activateDirectWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

