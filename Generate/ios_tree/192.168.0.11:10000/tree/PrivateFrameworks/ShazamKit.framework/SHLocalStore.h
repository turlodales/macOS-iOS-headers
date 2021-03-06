/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
 */

@interface SHLocalStore : SHStore {
    <SHLocalStoreDelegate> * _delegate;
    long long  _density;
    NSMutableArray * _localItems;
    double  _minimumSignatureLength;
    NSArray * _referenceAudioMediaItems;
    double  _windowSeconds;
}

@property (nonatomic) <SHLocalStoreDelegate> *delegate;
@property (nonatomic, readonly) long long density;
@property (nonatomic, readonly) NSMutableArray *localItems;
@property (nonatomic, retain) NSArray *referenceAudioMediaItems;
@property (nonatomic, readonly) double windowSeconds;

+ (id)new;

- (void).cxx_destruct;
- (bool)addReferenceSignature:(id)arg1 representingMediaItems:(id)arg2 error:(id*)arg3;
- (bool)addReferenceSignaturesBundleFromPath:(id)arg1 error:(id*)arg2;
- (id)createMatcher;
- (id)delegate;
- (long long)density;
- (void)flowReferenceAudio:(id)arg1 atTime:(id)arg2 representingMediaItems:(id)arg3;
- (id)init;
- (id)initWithDensity:(long long)arg1;
- (id)initWithWindowSeconds:(double)arg1 minimumSignatureLength:(double)arg2 density:(long long)arg3;
- (id)localItems;
- (double)minimumSignatureLength;
- (id)referenceAudioMediaItems;
- (void)setDelegate:(id)arg1;
- (void)setReferenceAudioMediaItems:(id)arg1;
- (double)windowSeconds;

@end
