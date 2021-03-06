/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
 */

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {
    void assetHandles;
    void cornerRadius;
    void feedNavImageSize;
    void scale;
}

@property (nonatomic, copy) NSDictionary *assetHandles;
@property (nonatomic, readonly) NSString *cacheIdentifier;

- (void).cxx_destruct;
- (id)assetHandles;
- (id)cacheIdentifier;
- (id)init;
- (id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(struct CGSize { double x1; double x2; })arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4;
- (void)setAssetHandles:(id)arg1;

@end
