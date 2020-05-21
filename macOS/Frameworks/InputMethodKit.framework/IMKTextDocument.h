//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InputMethodKit/IMKAbstractTextDocument.h>

@class NSMutableString;

@interface IMKTextDocument : IMKAbstractTextDocument
{
    IMKTextDocument *_composingTextInternal;
    NSMutableString *_committedText;
    struct _NSRange _selectedRange;
}

+ (id)keyPathsForValuesAffectingText;
+ (id)textDocumentWithTextDocument:(id)arg1 surroundingCharactersToCopy:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) struct _NSRange selectedRange; // @synthesize selectedRange=_selectedRange;
@property(readonly, nonatomic) NSMutableString *committedText; // @synthesize committedText=_committedText;
- (BOOL)_hasComposingText;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)selectCodeUnits:(unsigned long long)arg1 after:(long long)arg2;
- (void)selectCodeUnits:(unsigned long long)arg1 before:(long long)arg2;
- (void)selectCharacters:(unsigned long long)arg1 after:(long long)arg2;
- (void)selectCharacters:(unsigned long long)arg1 before:(long long)arg2;
- (void)insertCharacters:(id)arg1 atCursorPosition:(unsigned long long)arg2;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 afterCursorPosition:(unsigned long long)arg2;
- (void)clearAllContents;
- (unsigned long long)moveCursorByCharacterCount:(long long)arg1;
- (id)recomposeCharacters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (id)recomposeCharacters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (void)commitComposingText;
- (void)replaceCharactersAtCursor:(unsigned long long)arg1 withCharacters:(id)arg2;
- (void)insertCharacters:(id)arg1 after:(long long)arg2;
- (void)insertCharacters:(id)arg1 before:(long long)arg2;
- (void)insertCharactersAtCursor:(id)arg1;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 after:(long long)arg2;
- (unsigned long long)deleteCharacters:(unsigned long long)arg1 before:(long long)arg2;
- (BOOL)hasContentBefore:(long long)arg1;
- (id)characters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (id)characters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (BOOL)isEmpty;
- (BOOL)hasSelection;
- (id)selectedText;
@property(readonly, nonatomic) IMKTextDocument *composingText;
@property(readonly, nonatomic) struct _NSRange composingTextRange;
@property(nonatomic) unsigned long long cursorPosition;
@property(readonly, nonatomic) unsigned long long selectedTextEndPosition;
@property(readonly, nonatomic) unsigned long long composingTextEndPosition;
@property(readonly, nonatomic) unsigned long long composingTextStartPosition;
@property(readonly, nonatomic) IMKTextDocument *composingTextInternal; // @synthesize composingTextInternal=_composingTextInternal;
@property(readonly, nonatomic) unsigned long long length;
- (void)dealloc;
- (id)initWithTraits:(id)arg1 candidateMenu:(id)arg2;
- (id)initWithTextDocument:(id)arg1 surroundingCharactersToCopy:(unsigned long long)arg2;

@end

