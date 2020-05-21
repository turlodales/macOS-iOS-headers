//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortStringWithPrefix;
- (id)MLSortString;
- (id)copyWithoutInsignificantCharacters;
- (id)copyWithoutInsignificantPrefixAndCharacters;
- (id)_copyWithoutInsignificantPrefix:(BOOL)arg1 andCharacters:(BOOL)arg2;
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(BOOL)arg1 andCharacters:(BOOL)arg2;
- (id)sanitizedString;
- (BOOL)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;
- (id)ml_stringValueForSQL;
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;
@end

