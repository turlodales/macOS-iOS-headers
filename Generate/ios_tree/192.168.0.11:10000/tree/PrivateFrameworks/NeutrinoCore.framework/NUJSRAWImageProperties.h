/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUJSRAWImageProperties : NUJSProxy <NUJSRAWImagePropertiesExport>

@property (readonly) NSString *decoderVersion;
@property (readonly) NUJSRAWNoiseReductionProperties *noiseReductionProperties;
@property (readonly) <NURAWImageProperties> *rawImageProperties;
@property (readonly) double temperature;
@property (readonly) double tint;

- (id)decoderVersion;
- (id)initWithRAWImageProperties:(id)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)noiseReductionProperties;
- (id)rawImageProperties;
- (double)temperature;
- (double)tint;

@end
