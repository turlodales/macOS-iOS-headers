//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMSpeechFormatter, NSString, NSTextCheckingResult;

@interface AXMTag : NSObject
{
    NSString *_originalText;
    AXMSpeechFormatter *_speechFormatter;
    CDStruct_573f6e06 _nlToken;
    NSString *_nlType;
    NSString *_nlLexicalClass;
    NSString *_nlLanguage;
    NSString *_nlScript;
    NSString *_nlNamedEntity;
    NSString *_nlDerivedSubtoken;
    unsigned long long _datatype;
    NSTextCheckingResult *_textCheckingResult;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isDate;
@property(readonly, nonatomic) BOOL isEmailAddress;
@property(readonly, nonatomic) BOOL isPhoneNumber;
@property(readonly, nonatomic) BOOL isCloseQuote;
@property(readonly, nonatomic) BOOL isOpenQuote;
@property(readonly, nonatomic) BOOL isSentenceTerminator;
@property(readonly, nonatomic) BOOL isWhitespace;
@property(readonly, nonatomic) BOOL isPunctuation;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) NSString *speakableText;
@property(readonly, nonatomic) NSString *originalText;
- (id)_debugType;
- (id)description;
- (id)initWithdatatype:(unsigned long long)arg1 text:(id)arg2 textCheckingResult:(id)arg3 speechFormatter:(id)arg4;
- (id)initWithNLToken:(CDStruct_573f6e06)arg1 text:(id)arg2 type:(id)arg3 lexicalClass:(id)arg4 language:(id)arg5 script:(id)arg6 namedEntity:(id)arg7 derivedSubtoken:(id)arg8 speechFormatter:(id)arg9;
- (id)_init;

@end

