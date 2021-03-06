//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSPredicate, NSString;
@protocol ABPersonListHeadlining;

@interface ABPersonEntriesList : NSObject
{
    NSMutableArray *_entries;
    NSMutableDictionary *_entriesByUID;
    NSArray *_sectionedEntries;
    NSString *_filterTerms;
    NSMutableSet *_extraUIDsForSearchResults;
    id <ABPersonListHeadlining> _headliner;
    BOOL _suspendSorting;
}

+ (id)keyPathsForValuesAffectingCountOfEntries;
@property BOOL suspendSorting; // @synthesize suspendSorting=_suspendSorting;
@property(copy) NSString *filterTerms; // @synthesize filterTerms=_filterTerms;
@property(retain) id <ABPersonListHeadlining> headliner; // @synthesize headliner=_headliner;
@property(retain) NSMutableDictionary *entriesByUID; // @synthesize entriesByUID=_entriesByUID;
@property(copy) NSArray *sectionedEntries; // @synthesize sectionedEntries=_sectionedEntries;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
- (void)removeEntriesFromReverseCache:(id)arg1;
- (void)addEntriesToReverseCache:(id)arg1;
- (void)clearExtraUniqueIdsInSearchResults;
- (void)appendExtraUniqueIdToSearchResults:(id)arg1;
@property(readonly) NSPredicate *filterPredicate;
- (void)replaceEntry:(id)arg1 inSectionedEntriesWithEntry:(id)arg2;
- (void)removeEntriesFromSectionedEntries:(id)arg1;
- (void)removeEntry:(id)arg1 fromSectionedEntries:(id)arg2;
- (void)insertEntry:(id)arg1 inSectionedEntriesAtIndex:(unsigned long long)arg2;
- (void)addEntriesToSectionedEntries:(id)arg1;
- (unsigned long long)indexOfEntry:(id)arg1;
- (void)replaceEntry:(id)arg1 withEntry:(id)arg2;
- (void)removeAllEntries;
- (void)removeEntriesInArray:(id)arg1;
- (void)removeEntry:(id)arg1;
- (void)insertEntry:(id)arg1 inEntriesAtIndex:(unsigned long long)arg2;
- (void)addEntriesFromArray:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)entryForLinkId:(id)arg1;
- (id)entryForUID:(id)arg1;
- (id)entriesForUIDs:(id)arg1;
- (void)getEntries:(id *)arg1 range:(struct _NSRange)arg2;
- (id)entriesAtIndexes:(id)arg1;
- (id)entryAtIndex:(unsigned long long)arg1;
- (id)entryInEntriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfEntries;
- (id)indexesOfEntriesWithUids:(id)arg1;
- (id)flattenedEntriesIncludingHeaders;
- (id)flattenedEntriesFromSectionedEntries:(id)arg1;
- (id)sortDescriptorsFromNameSortingPreference;
- (id)mutableEntries;
- (void)rearrangeObjects;
- (void)loadEntriesByUid:(id)arg1 rearrangeObjects:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

