//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NEIKEv2IKESPI;

@interface NEIKEv2TransportClient : NSObject
{
    BOOL _wildcard;
    NEIKEv2IKESPI *_clientSPI;
    id <NEIKEv2TransportDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <NEIKEv2TransportDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL wildcard; // @synthesize wildcard=_wildcard;
@property(retain) NEIKEv2IKESPI *clientSPI; // @synthesize clientSPI=_clientSPI;
- (id)description;

@end

