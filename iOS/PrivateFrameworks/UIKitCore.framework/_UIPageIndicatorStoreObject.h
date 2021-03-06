/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIPageIndicatorStoreObject : NSObject {
    UIImage * _customImage;
    long long  _endIndex;
    long long  _startIndex;
}

@property (nonatomic, retain) UIImage *customImage;
@property (nonatomic) long long endIndex;
@property (nonatomic) long long startIndex;

- (void).cxx_destruct;
- (id)customImage;
- (id)description;
- (long long)endIndex;
- (id)initWithImage:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (void)setCustomImage:(id)arg1;
- (void)setEndIndex:(long long)arg1;
- (void)setStartIndex:(long long)arg1;
- (id)splitAtIndex:(long long)arg1 withImage:(id)arg2;
- (long long)startIndex;
- (bool)validPageWithinBound:(long long)arg1;

@end
