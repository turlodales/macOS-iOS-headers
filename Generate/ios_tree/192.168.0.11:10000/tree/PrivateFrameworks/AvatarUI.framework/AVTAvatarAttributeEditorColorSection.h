/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

@interface AVTAvatarAttributeEditorColorSection : NSObject <AVTAvatarAttributeEditorColorSection> {
    bool  _alwaysShowExtended;
    AVTAvatarColorVariationStore * _colorVariationStore;
    NSArray * _extendedItems;
    NSString * _identifier;
    NSString * _localizedName;
    AVTAvatarAttributeEditorSectionOptions * _options;
    NSArray * _primaryItems;
    <AVTAvatarAttributeEditorSectionSupplementalPicker> * _supplementalPicker;
}

@property (nonatomic, readonly) bool alwaysShowExtended;
@property (nonatomic, readonly) AVTAvatarColorVariationStore *colorVariationStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *extendedItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic, readonly) AVTAvatarAttributeEditorSectionOptions *options;
@property (nonatomic, readonly, copy) NSArray *primaryItems;
@property (nonatomic, readonly, copy) NSArray *sectionItems;
@property (readonly) Class superclass;
@property (nonatomic, retain) <AVTAvatarAttributeEditorSectionSupplementalPicker> *supplementalPicker;

- (void).cxx_destruct;
- (bool)alwaysShowExtended;
- (id)colorVariationStore;
- (id)description;
- (id)extendedItems;
- (id)identifier;
- (id)initWithPrimaryItems:(id)arg1 extendedItems:(id)arg2 colorVariationStore:(id)arg3 localizedName:(id)arg4 identifier:(id)arg5 alwaysShowExtended:(bool)arg6 options:(id)arg7;
- (id)localizedName;
- (id)options;
- (id)primaryItems;
- (id)sectionItems;
- (void)setLocalizedName:(id)arg1;
- (void)setSupplementalPicker:(id)arg1;
- (bool)shouldDisplaySeparatorBeforeSection:(id)arg1;
- (bool)shouldDisplayTitle;
- (id)supplementalPicker;

@end
