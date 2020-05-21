//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NWDatagramConnection, NWEndpoint, NWParameters, NWPath;

@interface NWUDPSession : NSObject
{
    BOOL _viable;
    BOOL _hasBetterPath;
    long long _state;
    NWEndpoint *_endpoint;
    NWEndpoint *_resolvedEndpoint;
    NWPath *_currentPath;
    NWDatagramConnection *_connection;
    unsigned long long _maxReadDatagrams;
    CDUnknownBlockType _readHandler;
    unsigned long long _internalMTU;
    NWParameters *_parameters;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property unsigned long long internalMTU; // @synthesize internalMTU=_internalMTU;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property unsigned long long maxReadDatagrams; // @synthesize maxReadDatagrams=_maxReadDatagrams;
@property(retain) NWDatagramConnection *connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NWPath *currentPath; // @synthesize currentPath=_currentPath;
@property(nonatomic) BOOL hasBetterPath; // @synthesize hasBetterPath=_hasBetterPath;
@property(nonatomic, getter=isViable) BOOL viable; // @synthesize viable=_viable;
@property(retain, nonatomic) NWEndpoint *resolvedEndpoint; // @synthesize resolvedEndpoint=_resolvedEndpoint;
@property(readonly) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *localPort;
- (void)cancel;
- (void)writeDatagram:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writeMultipleDatagrams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setReadHandler:(CDUnknownBlockType)arg1 maxDatagrams:(unsigned long long)arg2;
- (void)readInternal;
@property(readonly, nonatomic) unsigned long long maximumDatagramLength;
- (void)tryNextResolvedEndpoint;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (void)dealloc;
- (id)initWithUpgradeForSession:(id)arg1;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;
- (void)setupEventHandler;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithConnection:(id)arg1;

@end

