//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData;

@interface ChangeRecord : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(nonatomic) unsigned long long appVersion; // @dynamic appVersion;
@property(copy, nonatomic) NSData *clientDataVrfoutput; // @dynamic clientDataVrfoutput;
@property(copy, nonatomic) NSData *deviceIdVrfoutput; // @dynamic deviceIdVrfoutput;
@property(nonatomic) unsigned long long mutationMs; // @dynamic mutationMs;
@property(nonatomic) int mutationType; // @dynamic mutationType;
@property(copy, nonatomic) NSData *uriVrfoutput; // @dynamic uriVrfoutput;

@end

