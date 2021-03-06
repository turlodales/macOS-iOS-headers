/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKMetalView : UIView {
    CABackdropLayer * _backdropLayer;
    bool  _doubleBuffered;
    struct CGSize { 
        double width; 
        double height; 
    }  _fixedPixelSize;
    bool  _isFixedPixelSize;
    CAMetalLayer * _metalLayer;
    unsigned long long  _pixelFormat;
    bool  _useLuminanceColorFilter;
}

@property (nonatomic) bool doubleBuffered;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } drawableSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } fixedPixelSize;
@property (nonatomic, readonly) bool isDrawableAvailable;
@property (nonatomic, readonly) bool isFixedPixelSize;
@property (nonatomic, readonly) CAMetalLayer *metalLayer;
@property (nonatomic, readonly) unsigned long long pixelFormat;
@property (nonatomic) bool presentsWithTransaction;
@property (nonatomic) bool useLuminanceColorFilter;

- (void).cxx_destruct;
- (void)accessibilityInvertColorsStatusDidChange:(id)arg1;
- (bool)doubleBuffered;
- (struct CGSize { double x1; double x2; })drawableSize;
- (struct CGSize { double x1; double x2; })fixedPixelSize;
- (void)flushDrawables;
- (void)initLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andPixelSize:(struct CGSize { double x1; double x2; })arg2 pixelFormat:(unsigned long long)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 pixelFormat:(unsigned long long)arg2;
- (void)installLuminanceColorFilter;
- (bool)isDrawableAvailable;
- (bool)isFixedPixelSize;
- (id)metalLayer;
- (struct CGImage { }*)newLuminanceMap;
- (unsigned long long)pixelFormat;
- (bool)presentsWithTransaction;
- (void)resizeDrawableIfNecessary;
- (void)setDoubleBuffered:(bool)arg1;
- (void)setFixedPixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPresentsWithTransaction:(bool)arg1;
- (void)setUseLuminanceColorFilter:(bool)arg1;
- (bool)useLuminanceColorFilter;

@end
