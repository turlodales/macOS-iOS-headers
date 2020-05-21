//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDSDestinationProtocol.h"
#import "NSCopying.h"

@class NSString;

@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>
{
}

+ (BOOL)supportsSecureCoding;
+ (id)destinationWithDeviceURI:(id)arg1;
+ (id)destinationWithRapportPublicIdentifierURI:(id)arg1;
+ (id)sentinelSelfAliasDestination;
+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithGroup:(id)arg1;
+ (id)destinationWithStrings:(id)arg1;
+ (id)destinationWithURI:(id)arg1;
+ (id)destinationWithString:(id)arg1;
+ (id)destinationWithDestinations:(id)arg1;
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;
@property(readonly) unsigned long long hash;
- (BOOL)isEqualToDestination:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic, getter=isDevice) BOOL device;
@property(readonly, nonatomic, getter=isGuest) BOOL guest;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)groupID;
- (id)destinationURIs;
- (id)normalizedURIStrings;
- (id)normalizedURIs;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

