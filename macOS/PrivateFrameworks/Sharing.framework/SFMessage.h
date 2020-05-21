//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSDictionary, NSSet, NSUUID, SFDevice, SFSession;

@interface SFMessage : NSObject <NSSecureCoding>
{
    NSUUID *_identifier;
    SFDevice *_peerDevice;
    BOOL _expectsResponse;
    NSData *_bodyData;
    CDUnknownBlockType _completionHandler;
    NSDictionary *_headerFields;
    SFSession *_session;
    NSSet *_deviceIDs;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSSet *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(retain, nonatomic) SFSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SFDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property(copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDictionary *headerFields; // @synthesize headerFields=_headerFields;
@property(nonatomic) BOOL expectsResponse; // @synthesize expectsResponse=_expectsResponse;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(copy, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
- (void)invalidate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

