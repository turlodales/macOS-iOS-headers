//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKDiscoveryWebServiceResponse.h>

@class PKDiscoveryManifest;

@interface PKDiscoveryManifestResponse : PKDiscoveryWebServiceResponse
{
    PKDiscoveryManifest *_manifest;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PKDiscoveryManifest *manifest; // @synthesize manifest=_manifest;
- (id)initWithManifest:(id)arg1;
- (id)initWithData:(id)arg1;

@end

