//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSDate, NSString;

@interface RankingInfo : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(nonatomic) short inputMethod; // @dynamic inputMethod;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *rankedList; // @dynamic rankedList;
@property(copy, nonatomic) NSString *recipientId; // @dynamic recipientId;
@property(copy, nonatomic) NSString *response; // @dynamic response;
@property(nonatomic) short source; // @dynamic source;
@property(copy, nonatomic) NSDate *timestamp; // @dynamic timestamp;

@end

