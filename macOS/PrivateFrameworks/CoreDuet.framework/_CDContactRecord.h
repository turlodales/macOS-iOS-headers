//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, _CDContact;

@interface _CDContactRecord : NSManagedObject
{
    _CDContact *contact;
}

- (void).cxx_destruct;
@property(retain) _CDContact *contact; // @synthesize contact;

// Remaining properties
@property(nonatomic) double creationDate; // @dynamic creationDate;
@property(retain, nonatomic) NSString *customIdentifier; // @dynamic customIdentifier;
@property(retain, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) int displayType; // @dynamic displayType;
@property(nonatomic) double firstIncomingRecipientDate; // @dynamic firstIncomingRecipientDate;
@property(nonatomic) double firstIncomingSenderDate; // @dynamic firstIncomingSenderDate;
@property(nonatomic) double firstOutgoingRecipientDate; // @dynamic firstOutgoingRecipientDate;
@property(retain, nonatomic) NSString *identifier; // @dynamic identifier;
@property(nonatomic) int incomingRecipientCount; // @dynamic incomingRecipientCount;
@property(nonatomic) int incomingSenderCount; // @dynamic incomingSenderCount;
@property(retain, nonatomic) NSSet *interactionRecipient; // @dynamic interactionRecipient;
@property(retain, nonatomic) NSSet *interactionSender; // @dynamic interactionSender;
@property(nonatomic) double lastIncomingRecipientDate; // @dynamic lastIncomingRecipientDate;
@property(nonatomic) double lastIncomingSenderDate; // @dynamic lastIncomingSenderDate;
@property(nonatomic) double lastOutgoingRecipientDate; // @dynamic lastOutgoingRecipientDate;
@property(nonatomic) int outgoingRecipientCount; // @dynamic outgoingRecipientCount;
@property(retain, nonatomic) NSString *personId; // @dynamic personId;
@property(nonatomic) int personIdType; // @dynamic personIdType;
@property(nonatomic) int type; // @dynamic type;

@end

