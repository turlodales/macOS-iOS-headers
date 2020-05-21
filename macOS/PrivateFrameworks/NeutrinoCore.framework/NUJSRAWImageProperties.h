//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import "NUJSRAWImagePropertiesExport.h"

@class NSString, NUJSRAWNoiseReductionProperties;

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>
{
}

@property(readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;
@property(readonly) double tint;
@property(readonly) double temperature;
@property(readonly) NSString *decoderVersion;
@property(readonly) id <NURAWImageProperties> rawImageProperties;
- (id)initWithRAWImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

