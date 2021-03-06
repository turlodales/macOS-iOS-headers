/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAccessibilityLimits : NSObject {
    NSHashTable * _associatedViews;
    NSString * _maximumContentSizeCategory;
    NSString * _minimumContentSizeCategory;
}

@property (nonatomic, copy) NSString *maximumContentSizeCategory;
@property (nonatomic, copy) NSString *minimumContentSizeCategory;

- (void).cxx_destruct;
- (void)_associateView:(id)arg1;
- (void)_dissociateView:(id)arg1;
- (id)_limitedTraitCollection:(id)arg1;
- (void)_notifyAllAssociatedViews;
- (id)maximumContentSizeCategory;
- (id)minimumContentSizeCategory;
- (void)setMaximumContentSizeCategory:(id)arg1;
- (void)setMinimumContentSizeCategory:(id)arg1;

@end
