//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OADClient.h"
#import "OADTextClient.h"

@class EDAnchor, EDComment, EDSheet, EDTextBox, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient>
{
    EDSheet *mSheet;
    id mClientState;
    EDAnchor *mAnchor;
    EDTextBox *mTextBox;
    EDComment *mComment;
    NSMutableDictionary *mTableModels;
    struct CGRect mBounds;
    _Bool mIsBoundsSet;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)hasText;
- (void)setComment:(id)arg1;
- (id)comment;
- (void)setTextBox:(id)arg1;
- (id)textBox;
- (void)setTableModels:(id)arg1;
- (id)tableModels;
- (void)setSheet:(id)arg1;
- (id)sheet;
- (struct CGRect)bounds;
- (BOOL)hasBounds;
- (void)setBounds:(struct CGRect)arg1;
- (_Bool)areBoundsSet;
- (void)setAnchor:(id)arg1;
- (id)anchor;
- (void)setClientState:(id)arg1;
- (id)clientState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

