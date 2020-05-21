//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCREvent, SCROutputRequest, SCRUIElement;

@protocol SCRText <NSObject>
- (BOOL)supportsCaretBrowsing;
- (BOOL)moveToNextParagraphWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToPreviousParagraphWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToNextLineWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToPreviousLineWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToNextSentenceWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToPreviousSentenceWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToNextWordWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (BOOL)moveToPreviousWordWithOutputRequest:(SCROutputRequest *)arg1 event:(SCREvent *)arg2;
- (void)addLastWordToOutputRequest:(SCROutputRequest *)arg1;
- (void)addFirstWordToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedEndOfTextDescriptionToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedBeginningOfTextDescriptionToOutputRequest:(SCROutputRequest *)arg1;
- (void)addReachedBoundarySoundToOutputRequest:(SCROutputRequest *)arg1;
- (void)addTextBoundaryToOutputRequest:(SCROutputRequest *)arg1 uiElement:(SCRUIElement *)arg2 edge:(long long)arg3;
- (BOOL)isSelectedTextRangeSettable;
- (BOOL)isTextElement;
@end

