/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleScalableAvatarView : PXSmartScaleView {
    UIImageView * _imageView;
    double  _imageViewCornerRadius;
    <PXPerson> * _person;
    bool  _useCornerRadius;
    bool  _useRoundAvatar;
}

@property (retain) UIImageView *imageView;
@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic) bool useCornerRadius;
@property (nonatomic) bool useRoundAvatar;

- (void).cxx_destruct;
- (void)_updateImageAndWait:(bool)arg1;
- (void)_updateImageViewCornerWithRadius:(double)arg1;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)person;
- (void)setImageView:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPersonAndWaitForImage:(id)arg1;
- (void)setUseCornerRadius:(bool)arg1;
- (void)setUseRoundAvatar:(bool)arg1;
- (void)updateImage;
- (bool)useCornerRadius;
- (bool)useRoundAvatar;
- (void)viewScaleDidChange;

@end
