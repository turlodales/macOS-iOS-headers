//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray, NSString;

@interface QueryRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(nonatomic) int application; // @dynamic application;
@property(retain, nonatomic) NSMutableArray *devicesArray; // @dynamic devicesArray;
@property(readonly, nonatomic) unsigned long long devicesArray_Count; // @dynamic devicesArray_Count;
@property(copy, nonatomic) NSString *uri; // @dynamic uri;
@property(nonatomic) int version; // @dynamic version;

@end

