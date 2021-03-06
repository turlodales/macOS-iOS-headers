//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAccessibilityNode.h>

#import <PDFKit/NSAccessibilityRow-Protocol.h>

@class NSString, PDFAccessibilityNodeTableRowPrivate;

__attribute__((visibility("hidden")))
@interface PDFAccessibilityNodeTableRow : PDFAccessibilityNode <NSAccessibilityRow>
{
    PDFAccessibilityNodeTableRowPrivate *_private3;
    BOOL _isHeader;
    BOOL _lackingTaggedRepresentation;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL lackingTaggedRepresentation; // @synthesize lackingTaggedRepresentation=_lackingTaggedRepresentation;
@property(nonatomic) BOOL isHeader; // @synthesize isHeader=_isHeader;
@property(readonly, copy) NSString *description;
- (void)addChildNodeRef:(struct CGPDFTaggedNode *)arg1;
- (void)buildAccessibilityHierarchy;
- (long long)accessibilityIndex;
- (id)accessibilityRole;
@property(readonly, nonatomic) long long index;
- (id)initWithParent:(id)arg1 nodeRef:(struct CGPDFTaggedNode *)arg2 index:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

