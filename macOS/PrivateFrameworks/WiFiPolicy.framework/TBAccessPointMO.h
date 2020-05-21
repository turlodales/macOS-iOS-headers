//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

#import "NSCoding.h"
#import "NSSecureCoding.h"
#import "TBAccessPoint.h"

@class NSDate, NSString, TBNetworkMO;

@interface TBAccessPointMO : NSManagedObject <TBAccessPoint, NSSecureCoding, NSCoding>
{
}

+ (void)removeAllAccessPointsInMOC:(id)arg1;
+ (id)generateNewAccessPointObjectFromMOC:(id)arg1;
+ (id)entityName;
+ (BOOL)supportsSecureCoding;
+ (id)fetchRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) id <TBScore> popularityScore;
@property(readonly, nonatomic) id <TBScore> qualityScore;
@property(readonly, nonatomic, getter=isEdge) BOOL edge;
@property(readonly, nonatomic, getter=isTCPGood) BOOL TCPGood;
@property(readonly, nonatomic) NSString *BSSID;
@property(readonly, nonatomic) double longitude;
@property(readonly, nonatomic) double latitude;

// Remaining properties
@property(copy, nonatomic) NSString *bssid; // @dynamic bssid;
@property(copy, nonatomic) NSDate *created; // @dynamic created;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lat; // @dynamic lat;
@property(nonatomic) double lng; // @dynamic lng;
@property(retain, nonatomic) TBNetworkMO *network; // @dynamic network;
@property(nonatomic) int popularityScoreValue; // @dynamic popularityScoreValue;
@property(nonatomic) int qualityScoreValue; // @dynamic qualityScoreValue;
@property(readonly) Class superclass;
@property(nonatomic) BOOL tcpGood; // @dynamic tcpGood;

@end

