/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreMaterial.framework/CoreMaterial
 */

@interface MTStylingProvidingSolidColorLayer : CALayer {
    NSMutableDictionary * _cmStylingProviders;
}

@property (nonatomic, retain) NSMutableDictionary *cmStylingProviders;

- (void).cxx_destruct;
- (id)_fillDarkStyleSet;
- (id)_fillLightStyleSet;
- (id)_strokeDarkStyleSet;
- (id)_strokeLightStyleSet;
- (id)_styleSetForCategory:(id)arg1;
- (id)_styleSetForCategory:(id)arg1 withPrimaryStyleDictionary:(id)arg2 secondaryStyleDictionary:(id)arg3 tertiaryStyleDictionary:(id)arg4;
- (id)_styleSetNameForCategory:(id)arg1;
- (void)_updateVisualStylingProviderForCategory:(id)arg1;
- (void)_updateVisualStylingProviders;
- (id)cmStylingProviders;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setCmStylingProviders:(id)arg1;
- (id)visualStylingProviderForCategory:(id)arg1;

@end
