//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXMDataDetector, AXMLexiconManager, AXMSpeechFormatterCache, AXMSpellChecker, AXMTagger, NSDictionary, NSMutableDictionary;

@interface AXMTextProcessor : NSObject
{
    AXMSpellChecker *_spellChecker;
    AXMLexiconManager *_lexiconManager;
    AXMTagger *_tagger;
    AXMDataDetector *_dataDetector;
    AXMSpeechFormatterCache *_speechFormatterCache;
    NSDictionary *_globalWhitelistedWords;
    NSMutableDictionary *_localeWhitelistedWords;
}

- (void).cxx_destruct;
- (id)_preprocessText:(id)arg1 diagnostics:(id)arg2;
- (id)processText:(id)arg1 withOperation:(id)arg2;
- (id)dataDetector;
- (id)tagger;
- (id)lexiconManager;
- (id)spellChecker;
- (id)init;

@end

