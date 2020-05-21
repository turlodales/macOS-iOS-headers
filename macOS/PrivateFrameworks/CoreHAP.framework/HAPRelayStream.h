//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HMFObject.h"

@interface HAPRelayStream : HMFObject
{
    id <HAPStreamDelegate> _delegate;
    unsigned long long _mtu;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long mtu; // @synthesize mtu=_mtu;
@property __weak id <HAPStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (id)writeData:(id)arg1 error:(id *)arg2;
- (void)close;
- (void)open;

@end

