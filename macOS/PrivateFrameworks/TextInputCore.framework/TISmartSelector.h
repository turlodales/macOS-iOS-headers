//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NLTagger, NSLocale, NSObject<OS_dispatch_queue>, NSString, TITransientLexiconManager;

@interface TISmartSelector : NSObject
{
    struct unique_ptr<KB::StaticDictionary, std::__1::default_delete<KB::StaticDictionary>> _staticDictionary;
    struct _LXLexicon *_contactDictionary;
    CDUnknownBlockType _contactObserver;
    unsigned long long _options;
    NSLocale *_locale;
    TITransientLexiconManager *_transientLexiconManager;
    NLTagger *_namedEntityTagger;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _dataChangedHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType dataChangedHandler; // @synthesize dataChangedHandler=_dataChangedHandler;
@property(retain) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(retain) NLTagger *namedEntityTagger; // @synthesize namedEntityTagger=_namedEntityTagger;
@property(retain) TITransientLexiconManager *transientLexiconManager; // @synthesize transientLexiconManager=_transientLexiconManager;
@property(retain) NSLocale *locale; // @synthesize locale=_locale;
@property unsigned long long options; // @synthesize options=_options;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 options:(unsigned long long)arg4;
- (void)loadStaticPhraseDictionary;
- (struct _NSRange)longestRangeEncapsulatingSubstringInDocument:(id)arg1 containingRange:(struct _NSRange)arg2 tokenizedRanges:(id)arg3 meetingCondition:(CDUnknownBlockType)arg4;
- (struct _NSRange)selectionRangeForTextInDocument:(id)arg1 inRange:(struct _NSRange)arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5;
@property(retain) NSString *language;
- (void)dealloc;
- (id)initWithOptions:(unsigned long long)arg1 language:(id)arg2 dataChangedHandler:(CDUnknownBlockType)arg3;

@end

