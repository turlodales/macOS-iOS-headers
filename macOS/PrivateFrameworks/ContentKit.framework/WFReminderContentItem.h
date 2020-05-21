//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKReminder;

@interface WFReminderContentItem : WFCalendarItemContentItem
{
}

+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)ownedTypes;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (BOOL)hasLibrary;
+ (id)propertyBuilders;
+ (id)itemWithEKReminder:(id)arg1 fromEventStore:(id)arg2;
- (BOOL)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
@property(readonly, nonatomic) EKReminder *reminder;
- (BOOL)getListAltText:(CDUnknownBlockType)arg1;

@end

