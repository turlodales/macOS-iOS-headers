//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SGSearchableItemHelper : NSObject
{
}

+ (id)deserializeAttributesAndBody:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (BOOL)mailItemIsTooBig:(id)arg1;
+ (BOOL)mailItemIsInTrash:(id)arg1;
+ (BOOL)mailItemIsInSent:(id)arg1;
+ (BOOL)mailItemIsInDrafts:(id)arg1;
+ (BOOL)mailItemIsSPAM:(id)arg1;
+ (BOOL)mailItemIsValid:(id)arg1;
+ (BOOL)mailItemIsRecent:(id)arg1;
+ (BOOL)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (BOOL)searchableItemIsOutgoing:(id)arg1;
+ (BOOL)searchableItemIsEmpty:(id)arg1;
+ (BOOL)mailItemIsFromSupportedAccount:(id)arg1;
+ (BOOL)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (BOOL)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (id)mailItemMessageIdHeaderValues:(id)arg1;
+ (BOOL)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2;

@end

