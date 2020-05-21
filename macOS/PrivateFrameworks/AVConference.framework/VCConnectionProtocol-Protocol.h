//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@protocol VCConnectionProtocol <NSObject>
@property unsigned int downlinkBitrateCap;
@property unsigned int uplinkBitrateCap;
@property(readonly) NSString *remoteInterfaceTypeString;
@property(readonly) NSString *localInterfaceTypeString;
@property(readonly) unsigned int type;
@property int priority;
@property int remoteCellTech;
@property int localCellTech;
@property(readonly) int remoteConnectionType;
@property(readonly) int localConnectionType;
@property(readonly) NSUUID *connectionUUID;
@property(readonly) BOOL serverIsDegraded;
@property(readonly) BOOL isVPN;
@property(readonly) BOOL isRelay;
@property(readonly) int connectionId;
@property int connectionMTU;
@property(readonly) BOOL isIPv6;
@property(readonly) BOOL isRemoteOnCellular;
@property(readonly) BOOL isLocalOnCellular;
@property(readonly) BOOL isRemoteOnWiFi;
@property(readonly) BOOL isLocalOnWiFi;
- (BOOL)matchesSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (void)getSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;
- (BOOL)isOnSameInterfacesWithConnection:(id <VCConnectionProtocol>)arg1;
- (BOOL)isSameAsConnection:(id <VCConnectionProtocol>)arg1;
@end

