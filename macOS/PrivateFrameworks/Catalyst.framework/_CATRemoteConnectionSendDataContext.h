//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_CATRemoteConnectionSendContext.h"

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface _CATRemoteConnectionSendDataContext : NSObject <_CATRemoteConnectionSendContext>
{
    NSData *mEncodedData;
    NSData *_data;
    id _userInfo;
    unsigned long long _bytesWritten;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long bytesWritten; // @synthesize bytesWritten=_bytesWritten;
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSData *data; // @synthesize data=_data;
- (id)bufferedDataWithError:(id *)arg1;
- (unsigned long long)headerLength;
@property(readonly, nonatomic) unsigned long long clientBytesWritten;
@property(readonly, nonatomic) BOOL hasBytesRemaining;
- (id)initWithData:(id)arg1 userInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

