//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <InputMethodKit/IMKAbstractTextDocument.h>

@class IMKTextDocument, IMKTextDocumentTraits, NSMutableSet, NSNumber;

@interface IMKTextDocumentTextInputAdaptor : IMKAbstractTextDocument
{
    id <IMKTextInput> _textInput;
    NSMutableSet *_unreliableApps;
    CDStruct_231eade1 _textInputReliability;
    CDStruct_231eade1 _textInputReliabilityChecked;
    IMKTextDocument *_cache;
    NSNumber *_cacheStartPosition;
    BOOL _hasMoreTextBeforeCache;
    BOOL _hasMoreTextAfterCache;
    BOOL _editingInternally;
    BOOL _hasChanges;
    struct _NSRange _composingTextRangeInTextInput;
    CDUnknownBlockType _willInvalidateCacheBlock;
    CDUnknownBlockType _didInvalidateCacheBlock;
    unsigned long long _dereferenceCount;
    BOOL _alwaysShowsComposingTextAsMarkedText;
    BOOL _hasComposingTextChanges;
    BOOL _recomposing;
    BOOL _allowClientQueries;
    IMKTextDocumentTraits *_clientTraits;
}

+ (id)appsWithUnreliableTextInputImplementation;
- (void).cxx_destruct;
@property(nonatomic) BOOL allowClientQueries; // @synthesize allowClientQueries=_allowClientQueries;
@property(nonatomic, getter=isRecomposing) BOOL recomposing; // @synthesize recomposing=_recomposing;
@property(readonly, nonatomic) BOOL alwaysShowsComposingTextAsMarkedText; // @synthesize alwaysShowsComposingTextAsMarkedText=_alwaysShowsComposingTextAsMarkedText;
@property(nonatomic) unsigned long long dereferenceCount; // @synthesize dereferenceCount=_dereferenceCount;
@property(copy, nonatomic) CDUnknownBlockType didInvalidateCacheBlock; // @synthesize didInvalidateCacheBlock=_didInvalidateCacheBlock;
@property(copy, nonatomic) CDUnknownBlockType willInvalidateCacheBlock; // @synthesize willInvalidateCacheBlock=_willInvalidateCacheBlock;
@property(nonatomic) struct _NSRange composingTextRangeInTextInput; // @synthesize composingTextRangeInTextInput=_composingTextRangeInTextInput;
@property(nonatomic) BOOL hasComposingTextChanges; // @synthesize hasComposingTextChanges=_hasComposingTextChanges;
@property(nonatomic) BOOL hasChanges; // @synthesize hasChanges=_hasChanges;
@property(nonatomic, getter=isEditingInternally) BOOL editingInternally; // @synthesize editingInternally=_editingInternally;
@property(nonatomic) BOOL hasMoreTextAfterCache; // @synthesize hasMoreTextAfterCache=_hasMoreTextAfterCache;
@property(nonatomic) BOOL hasMoreTextBeforeCache; // @synthesize hasMoreTextBeforeCache=_hasMoreTextBeforeCache;
@property(readonly, nonatomic) IMKTextDocument *cache; // @synthesize cache=_cache;
@property(nonatomic) CDStruct_231eade1 textInputReliabilityChecked; // @synthesize textInputReliabilityChecked=_textInputReliabilityChecked;
@property(nonatomic) CDStruct_231eade1 textInputReliability; // @synthesize textInputReliability=_textInputReliability;
@property(readonly, nonatomic) NSMutableSet *unreliableApps; // @synthesize unreliableApps=_unreliableApps;
@property(readonly, nonatomic) __weak id <IMKTextInput> textInput; // @synthesize textInput=_textInput;
@property(readonly, nonatomic) IMKTextDocumentTraits *clientTraits; // @synthesize clientTraits=_clientTraits;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_substringFromRange:(struct _NSRange)arg1;
- (void)_insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)_deleteTextInRange:(struct _NSRange)arg1;
- (BOOL)syncCacheWithAdaptedTextInput;
- (void)_invalidateCache;
- (void)invalidateCache;
- (void)commitChanges;
- (void)endEdit;
- (void)beginEdit;
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
- (id)characters:(unsigned long long)arg1 after:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (id)characters:(unsigned long long)arg1 before:(long long)arg2 untilCharacterFromSet:(id)arg3;
- (BOOL)hasSelection;
- (id)selectedText;
- (id)composingText;
- (void)setComposingText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (void)insertText:(id)arg1 replacementRange:(struct _NSRange)arg2;
- (BOOL)_isCursorPositionKnown;
- (BOOL)_isComposingTextPositionKnown;
- (BOOL)_isCachePositionKnown;
@property(readonly, nonatomic) struct _NSRange composingTextAndSelectedTextRangeUnionInTextInput;
@property(nonatomic) BOOL showsComposingTextAsMarkedText;
@property(readonly, nonatomic) unsigned long long composingTextEndPosition;
@property(readonly, nonatomic) unsigned long long composingTextStartPosition;
@property(readonly, nonatomic) unsigned long long cursorPosition;
@property(retain, nonatomic) NSNumber *cacheStartPosition; // @synthesize cacheStartPosition=_cacheStartPosition;
- (void)addAppWithUnreliableTextInputImplementation:(id)arg1;
- (BOOL)isAppTextInputImplementationUnreliable:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)traits;
- (id)initWithTextInputToAdapt:(id)arg1 traits:(id)arg2 candidateMenu:(id)arg3 unreliableTextInputApps:(id)arg4 alwaysShowsComposingTextAsMarkedText:(BOOL)arg5;
- (id)initWithTextInputToAdapt:(id)arg1 traits:(id)arg2 candidateMenu:(id)arg3 unreliableTextInputApps:(id)arg4;
- (id)initWithTextInputToAdapt:(id)arg1 unreliableTextInputApps:(id)arg2;
- (id)initWithTextInputToAdapt:(id)arg1 traits:(id)arg2 candidateMenu:(id)arg3 alwaysShowsComposingTextAsMarkedText:(BOOL)arg4;
- (id)initWithTextInputToAdapt:(id)arg1 traits:(id)arg2 candidateMenu:(id)arg3;
- (id)initWithTextInputToAdapt:(id)arg1 traits:(id)arg2;
- (id)initWithTextInputToAdapt:(id)arg1;
- (id)initWithTraits:(id)arg1;
- (id)init;

@end

