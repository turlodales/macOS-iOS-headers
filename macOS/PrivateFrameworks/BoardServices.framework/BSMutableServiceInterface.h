//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <BoardServices/BSServiceInterface.h>

@class BSObjCProtocol, NSString;

@interface BSMutableServiceInterface : BSServiceInterface
{
}

+ (id)interfaceWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long clientMessagingExpectation; // @dynamic clientMessagingExpectation;
@property(copy, nonatomic) BSObjCProtocol *client; // @dynamic client;
@property(copy, nonatomic) BSObjCProtocol *server; // @dynamic server;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

