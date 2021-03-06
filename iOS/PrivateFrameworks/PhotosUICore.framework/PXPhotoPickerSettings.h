/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoPickerSettings : PXSettings {
    bool  _hideSearchBarWhenScrolling;
    bool  _useGadgetsAlbumsTab;
    bool  _useLibraryPresentation;
}

@property (nonatomic) bool hideSearchBarWhenScrolling;
@property (nonatomic) bool useGadgetsAlbumsTab;
@property (nonatomic) bool useLibraryPresentation;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (bool)hideSearchBarWhenScrolling;
- (id)parentSettings;
- (void)setDefaultValues;
- (void)setHideSearchBarWhenScrolling:(bool)arg1;
- (void)setUseGadgetsAlbumsTab:(bool)arg1;
- (void)setUseLibraryPresentation:(bool)arg1;
- (bool)useGadgetsAlbumsTab;
- (bool)useLibraryPresentation;

@end
