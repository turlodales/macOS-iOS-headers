/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDContextMenuConfiguration : UIContextMenuConfiguration {
    bool  expandPreviewOnInteraction;
    NSURL * interactionURL;
    id /* block */  interactionViewControllerProvider;
    bool  prefersActionMenuStyle;
}

@property (nonatomic) bool expandPreviewOnInteraction;
@property (nonatomic, retain) NSURL *interactionURL;
@property (nonatomic, copy) id /* block */ interactionViewControllerProvider;
@property (nonatomic) bool prefersActionMenuStyle;

+ (id)configurationWithIdentifier:(id)arg1 previewProvider:(id /* block */)arg2 actionProvider:(id /* block */)arg3;

- (void).cxx_destruct;
- (bool)expandPreviewOnInteraction;
- (id)interactionURL;
- (id /* block */)interactionViewControllerProvider;
- (bool)performPreviewActionForMenuWithAnimator:(id)arg1;
- (bool)prefersActionMenuStyle;
- (void)setExpandPreviewOnInteraction:(bool)arg1;
- (void)setInteractionURL:(id)arg1;
- (void)setInteractionViewControllerProvider:(id /* block */)arg1;
- (void)setPrefersActionMenuStyle:(bool)arg1;

@end
