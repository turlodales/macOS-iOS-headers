/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXScoreInterpreterCache : NSObject {
    NSArray * _interpreters;
}

@property (nonatomic, readonly) NSArray *interpreters;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initInternal;
- (id)interpreters;
- (void)resetCache;
- (id)scoreInterpreterForConsumerSubType:(unsigned char)arg1;

@end
