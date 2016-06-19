//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLocale, NSPersonNameComponentsFormatter, NSSet;

__attribute__((visibility("hidden")))
@interface _NSPersonNameComponentsStyleFormatter : NSObject
{
    NSSet *_abbreviatedKeys;
    _NSPersonNameComponentsStyleFormatter *_fallbackStyleFormatter;
    NSSet *_keysOfInterest;
    BOOL _shouldFallBack;
    BOOL _isEnabled;
    long long _ordering;
    NSLocale *_locale;
    NSArray *_orderedTemplate;
    NSArray *_fallbackDescriptor;
    NSPersonNameComponentsFormatter *_masterFormatter;
}

@property(retain) _NSPersonNameComponentsStyleFormatter *fallbackStyleFormatter; // @synthesize fallbackStyleFormatter=_fallbackStyleFormatter;
@property(readonly, copy) NSPersonNameComponentsFormatter *masterFormatter; // @synthesize masterFormatter=_masterFormatter;
- (void)dealloc;
@property(readonly, copy) NSArray *fallbackDescriptor;
- (void)_releaseIvars;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3;
- (id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(BOOL)arg3;
- (id)_orderedNonEmptyKeysFromComponents:(id)arg1;
- (id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2;
@property(readonly) NSArray *orderedTemplate;
@property long long ordering;
- (BOOL)fullComponentsAreValid:(id)arg1;
@property(readonly) NSArray *orderedKeysOfInterest;
@property(readonly) BOOL isEnabled;
@property(readonly) BOOL shouldFallBack;
@property(readonly) NSSet *keysOfInterest;
@property(readonly) NSSet *abbreviatedKeys;
- (id)initWithMasterFormatter:(id)arg1;

@end

