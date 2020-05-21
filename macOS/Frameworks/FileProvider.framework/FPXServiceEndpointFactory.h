//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFileProviderServiceEndpointCreating.h"

@class FPXDomainContext, NSDictionary;

__attribute__((visibility("hidden")))
@interface FPXServiceEndpointFactory : NSObject <NSFileProviderServiceEndpointCreating>
{
    NSDictionary *_serviceSources;
    FPXDomainContext *_domainContext;
}

- (void).cxx_destruct;
- (void)getListenerEndpointForServiceName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceSources:(id)arg1 domainContext:(id)arg2;

@end

