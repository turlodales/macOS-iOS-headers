//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTouchBarCustomizationPreviewSectionLayout, NSTouchBarCustomizationPreviewSectionLayoutItemDescription;

@protocol NSTouchBarCustomizationPreviewSectionLayoutDelegate <NSObject>
- (long long)sectionLayout:(NSTouchBarCustomizationPreviewSectionLayout *)arg1 itemStateForItemAtIndex:(long long)arg2 withFrame:(struct CGRect)arg3;
- (NSTouchBarCustomizationPreviewSectionLayoutItemDescription *)sectionLayout:(NSTouchBarCustomizationPreviewSectionLayout *)arg1 descriptionForItemAtIndex:(long long)arg2;
- (BOOL)sectionLayoutIsVisible:(NSTouchBarCustomizationPreviewSectionLayout *)arg1;
- (struct NSEdgeInsets)paddingForSectionLayout:(NSTouchBarCustomizationPreviewSectionLayout *)arg1;
- (struct CGRect)containmentRectForSectionLayout:(NSTouchBarCustomizationPreviewSectionLayout *)arg1;
- (long long)numberOfItemsForSectionLayout:(NSTouchBarCustomizationPreviewSectionLayout *)arg1;
@end

