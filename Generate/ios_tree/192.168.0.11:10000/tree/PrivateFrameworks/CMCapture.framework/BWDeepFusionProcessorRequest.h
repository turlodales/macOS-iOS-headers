/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeepFusionProcessorRequest : NSObject {
    <BWDeepFusionProcessorControllerDelegate> * _delegate;
    int  _demosaicedRawErr;
    int  _err;
    BWDeepFusionProcessorInput * _input;
    <IBPDeepFusionOutput> * _output;
}

@property (nonatomic, readonly) <BWDeepFusionProcessorControllerDelegate> *delegate;
@property (nonatomic) int demosaicedRawErr;
@property (nonatomic) int err;
@property (nonatomic, readonly) BWDeepFusionProcessorInput *input;
@property (nonatomic, readonly) <IBPDeepFusionOutput> *output;

- (void)dealloc;
- (id)delegate;
- (int)demosaicedRawErr;
- (id)description;
- (int)err;
- (id)initWithInput:(id)arg1 output:(id)arg2 delegate:(id)arg3;
- (id)input;
- (id)output;
- (bool)receivedAllBuffers;
- (bool)receivedAllInferences;
- (void)setDemosaicedRawErr:(int)arg1;
- (void)setErr:(int)arg1;

@end
