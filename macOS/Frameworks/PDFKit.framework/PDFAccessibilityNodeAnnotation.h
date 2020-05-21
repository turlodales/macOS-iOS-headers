//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

@class PDFAccessibilityAssociationInfo, PDFAnnotation;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityNodeAnnotation : PDFAccessibilityNode
{
    PDFAnnotation *_annotation;
    PDFAccessibilityAssociationInfo *_associationInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PDFAccessibilityAssociationInfo *associationInfo; // @synthesize associationInfo=_associationInfo;
@property(nonatomic) __weak PDFAnnotation *annotation; // @synthesize annotation=_annotation;
- (id)description;
- (id)accessibilityNodeRepresentation;
- (id)nextNodeWithAnnotationType:(id)arg1;
- (long long)accessibilityLineForIndex:(long long)arg1;
- (struct CGRect)accessibilityFrameForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForIndex:(long long)arg1;
- (struct _NSRange)accessibilityRangeForPosition:(struct CGPoint)arg1;
- (id)accessibilityStringForRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilityRangeForLine:(long long)arg1;
- (id)accessibilityAttributedStringForRange:(struct _NSRange)arg1;
- (id)accessibilitySelectedTextRanges;
- (void)setAccessibilitySelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)accessibilitySelectedTextRange;
- (id)accessibilitySelectedText;
- (long long)accessibilityNumberOfCharacters;
- (struct _NSRange)accessibilityVisibleCharacterRange;
- (id)accessibilitySharedTextUIElements;
- (struct _NSRange)accessibilitySharedCharacterRange;
- (long long)accessibilityInsertionPointLineNumber;
- (BOOL)accessibilityPerformPress;
- (void)setAccessibilityFocused:(BOOL)arg1;
- (BOOL)isAccessibilityFocused;
- (void)setAccessibilityEnabled:(BOOL)arg1;
- (BOOL)isAccessibilityEnabled;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityChildren;
- (id)accessibilityRows;
- (id)accessibilityURL;
- (id)accessibilityTitleUIElement;
- (void)setAccessibilityValue:(id)arg1;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (id)_textView;
- (id)_pageView;
- (id)_control;
- (BOOL)_isPressableWidget;
- (BOOL)isTextWidget;
- (BOOL)hasEquivalentTextNodeRepresentation;
- (BOOL)isValidAccessibilityElement;
- (BOOL)isAnnotationType:(id)arg1;
- (struct _NSRange)textRange;
- (struct CGPDFTaggedNode *)_associatedImageNodeRef;
- (id)_annotationText;
- (id)_annotationSelection;
- (id)textNodeRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPage:(id)arg1 annotation:(id)arg2;

@end

