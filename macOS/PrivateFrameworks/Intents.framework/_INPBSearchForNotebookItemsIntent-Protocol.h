//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, _INPBDataString, _INPBDateTimeRange, _INPBIntentMetadata, _INPBLocation;

@protocol _INPBSearchForNotebookItemsIntent <NSObject>
@property(readonly, nonatomic) BOOL hasTitle;
@property(retain, nonatomic) _INPBDataString *title;
@property(readonly, nonatomic) unsigned long long temporalEventTriggerTypesCount;
@property(readonly, nonatomic) int *temporalEventTriggerTypes;
@property(nonatomic) BOOL hasTaskPriority;
@property(nonatomic) int taskPriority;
@property(nonatomic) BOOL hasStatus;
@property(nonatomic) int status;
@property(readonly, nonatomic) BOOL hasNotebookItemIdentifier;
@property(copy, nonatomic) NSString *notebookItemIdentifier;
@property(nonatomic) BOOL hasLocationSearchType;
@property(nonatomic) int locationSearchType;
@property(readonly, nonatomic) BOOL hasLocation;
@property(retain, nonatomic) _INPBLocation *location;
@property(nonatomic) BOOL hasItemType;
@property(nonatomic) int itemType;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(nonatomic) BOOL hasIncludeAllNoteContents;
@property(nonatomic) BOOL includeAllNoteContents;
@property(readonly, nonatomic) BOOL hasGroupName;
@property(retain, nonatomic) _INPBDataString *groupName;
@property(readonly, nonatomic) BOOL hasDateTime;
@property(retain, nonatomic) _INPBDateTimeRange *dateTime;
@property(nonatomic) BOOL hasDateSearchType;
@property(nonatomic) int dateSearchType;
@property(readonly, nonatomic) BOOL hasContent;
@property(copy, nonatomic) NSString *content;
- (int)StringAsTemporalEventTriggerTypes:(NSString *)arg1;
- (NSString *)temporalEventTriggerTypesAsString:(int)arg1;
- (void)setTemporalEventTriggerTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)temporalEventTriggerTypeAtIndex:(unsigned long long)arg1;
- (void)addTemporalEventTriggerType:(int)arg1;
- (void)clearTemporalEventTriggerTypes;
- (int)StringAsTaskPriority:(NSString *)arg1;
- (NSString *)taskPriorityAsString:(int)arg1;
- (int)StringAsStatus:(NSString *)arg1;
- (NSString *)statusAsString:(int)arg1;
- (int)StringAsLocationSearchType:(NSString *)arg1;
- (NSString *)locationSearchTypeAsString:(int)arg1;
- (int)StringAsItemType:(NSString *)arg1;
- (NSString *)itemTypeAsString:(int)arg1;
- (int)StringAsDateSearchType:(NSString *)arg1;
- (NSString *)dateSearchTypeAsString:(int)arg1;
@end

