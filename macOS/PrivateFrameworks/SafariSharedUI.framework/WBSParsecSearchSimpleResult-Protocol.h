//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WBSParsecSearchMapsResultFeedbackSenderClient.h"
#import "WBSParsecSearchResultPresentedInCard.h"

@class NSImage, NSNumber, NSString;

@protocol WBSParsecSearchSimpleResult <WBSParsecSearchResultPresentedInCard, WBSParsecSearchMapsResultFeedbackSenderClient>
@property(readonly, nonatomic) unsigned long long descriptionAlignment;
@property(readonly, nonatomic) BOOL hasSingleLineDescriptionAndTitle;
@property(readonly, nonatomic) NSString *footnote;
@property(readonly, nonatomic) BOOL descriptionTextCanWrap;
@property(readonly, nonatomic) NSNumber *descriptionMaximumNumberOfLines;
@property(readonly, nonatomic) NSString *descriptionLeadInText;
@property(readonly, nonatomic) NSNumber *titleMaximumNumberOfLines;
- (NSImage *)titleGlyphWithSession:(id <WBSParsecSearchSession>)arg1;
@end

