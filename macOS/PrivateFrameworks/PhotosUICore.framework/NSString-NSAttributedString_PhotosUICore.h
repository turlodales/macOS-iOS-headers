//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@class NSArray;

@interface NSString (NSAttributedString_PhotosUICore)
@property(readonly, nonatomic) NSString *px_stringConvertedToHTMLString;
- (long long)digits;
- (id)stringByRemovingDigits;
- (BOOL)containsDigits;
- (struct _NSRange)rangeOfDigits;
- (id)px_stringByAppendingDescriptionDetails:(id)arg1;
- (id)px_stringByAppendingDescriptionDetailsWithFormat:(id)arg1;
@property(readonly, nonatomic) BOOL px_endsWithFullStopOrEquivalentPunctuationMark;
@property(readonly, nonatomic) NSArray *px_integerValues;
@property(readonly, nonatomic) struct _NSRange px_firstLetterRange;
@property(readonly, nonatomic) NSString *px_stringByIndentingNewLines;
@property(readonly, nonatomic) long long px_platformAgnosticHash;
- (id)px_stringByDeletingCharactersInSet:(id)arg1;
- (BOOL)px_hasStringIgnoringCaseAndDiacritics:(id)arg1;
- (BOOL)px_hasPrefixIgnoringCaseAndDiacritics:(id)arg1;
- (id)px_stringByApplyingCapitalization:(long long)arg1;
@end

