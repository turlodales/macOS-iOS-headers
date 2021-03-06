/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFAbstractControlStatusItem : HFStatusItem

+ (bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;
+ (bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;

- (id)_aggregatedValueSourceWithServiceItems:(id)arg1;
- (id)_buildControlItemsForServices:(id)arg1;
- (id)_buildServiceItemsForServices:(id)arg1;
- (id)_primaryServiceDescriptorForServices:(id)arg1;
- (id)serviceTypes;
- (id)standardResultsForBatchReadResponse:(id)arg1 serviceTypes:(id)arg2;
- (bool)supportsInvalidation;

@end
