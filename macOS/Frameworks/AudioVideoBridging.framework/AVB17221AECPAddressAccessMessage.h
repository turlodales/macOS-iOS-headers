//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AECPMessage.h>

@class NSArray;

@interface AVB17221AECPAddressAccessMessage : AVB17221AECPMessage
{
    NSArray *tlvs;
}

+ (id)responseMessage;
+ (id)commandMessage;
@property(copy) NSArray *tlvs; // @synthesize tlvs;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

