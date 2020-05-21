//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMKKeyboardState, NSString;

@interface IMKInputContext : NSObject
{
    IMKKeyboardState *_keyboardState;
    id <IMKTextDocument> _documentContent;
    NSString *_languageCode;
    IMKInputContext *_composingContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, nonatomic) IMKInputContext *composingContext; // @synthesize composingContext=_composingContext;
@property(readonly, nonatomic) id <IMKTextDocument> documentContent; // @synthesize documentContent=_documentContent;
@property(readonly, nonatomic) IMKKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
- (id)contextWithLanguageCode:(id)arg1;
- (id)contextWithComposingContext:(id)arg1;
- (id)contextWithDocumentContent:(id)arg1;
- (id)initWithKeyboardState:(id)arg1;
- (id)initWithKeyboardState:(id)arg1 content:(id)arg2 composingContext:(id)arg3 languageCode:(id)arg4;

@end

