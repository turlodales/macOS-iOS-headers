//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AAResponse.h"

@class NSArray;

@interface FASharedServicesResponse : AAResponse
{
    NSArray *_services;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *services; // @synthesize services=_services;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

