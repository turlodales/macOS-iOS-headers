//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WBSSQLiteDatabase;

@interface WBSHistoryTagDatabaseController : NSObject
{
    WBSSQLiteDatabase *_database;
}

- (void).cxx_destruct;
- (BOOL)clearTagsFromStartDate:(id)arg1 endDate:(id)arg2 error:(id *)arg3;
- (BOOL)clearAllTagsWithError:(id *)arg1;
- (BOOL)renameTagWithID:(long long)arg1 toTitle:(id)arg2 error:(id *)arg3;
- (BOOL)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 error:(id *)arg3;
- (id)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 error:(id *)arg5;
- (id)initWithDatabase:(id)arg1;

@end

