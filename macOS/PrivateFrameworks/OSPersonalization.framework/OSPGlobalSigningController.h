//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class OSPRequest;

@interface OSPGlobalSigningController : NSObject
{
    OSPRequest *_request;
}

- (void).cxx_destruct;
@property(retain) OSPRequest *request; // @synthesize request=_request;
- (void)globallySignForAllDevicesAndVariantsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequest:(id)arg1;

@end

