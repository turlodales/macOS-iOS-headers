//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSUUID;

__attribute__((visibility("hidden")))
@interface NWRemoteConnectionWriteRequest : NSObject
{
    NSData *_data;
    NSUUID *_clientID;
}

- (void).cxx_destruct;
@property(retain) NSUUID *clientID; // @synthesize clientID=_clientID;
@property(retain) NSData *data; // @synthesize data=_data;
- (id)initWithData:(id)arg1 clientID:(id)arg2;

@end

