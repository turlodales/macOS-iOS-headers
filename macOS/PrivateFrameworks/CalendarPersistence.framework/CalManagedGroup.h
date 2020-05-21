//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalManagedNode.h>

#import "CalendarSourceModelProtocol.h"

@class NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;

@interface CalManagedGroup : CalManagedNode <CalendarSourceModelProtocol>
{
}

+ (id)otherGroupLocalizedTitle;
+ (id)entityName;
- (id)enclosingSource;
@property(readonly, nonatomic) BOOL requiresOpeningAttachmentAsLink;
- (BOOL)supportsEmailValidation;
- (BOOL)supportsTaskCalendarCreation;
@property(readonly, nonatomic) BOOL supportsSharingScheduling;
@property(readonly, nonatomic) BOOL supportsPrivateEvents;
@property(readonly, nonatomic) BOOL supportsPhoneNumbers;
@property(readonly, nonatomic) BOOL supportsManagedAttachments;
@property(readonly, nonatomic) BOOL supportsLikenessPropagation;
@property(readonly, nonatomic) BOOL supportsJunkReporting;
@property(readonly, nonatomic) BOOL supportsFreebusy;
- (BOOL)supportsEventCalendarCreation;
@property(readonly, nonatomic) BOOL supportsDropBoxAttachments;
@property(readonly, nonatomic) BOOL supportsAttendeeComments;
@property(readonly, nonatomic) NSSet *ownerAddresses;
- (BOOL)isEnabledForReminders;
- (BOOL)isEnabledForEvents;
@property(readonly, nonatomic) int displayOrder;
- (BOOL)isDelegate;
@property(readonly, retain, nonatomic) NSString *typeString;
@property(readonly, retain, nonatomic) NSString *providerIdentifier;
@property(readonly, retain, nonatomic) NSString *sourceIdentifier;
@property(readonly, copy, nonatomic) NSString *externalSourceIdentifier;
- (long long)compare:(id)arg1;
- (id)reminderCalendars;
- (id)eventCalendars;
- (id)filteredNonEventCalendars:(BOOL)arg1 nonReminderCalendars:(BOOL)arg2 subscriptionCalendars:(BOOL)arg3 sharedToMeCalendars:(BOOL)arg4;
- (id)properties;
- (long long)notificationCountForClass:(Class)arg1;
- (void)setChecked:(long long)arg1;
- (long long)checked;
- (id)color;
- (BOOL)isColorEditable;
- (BOOL)isRenameable;
@property(readonly) BOOL isRemote;
- (void)awakeFromInsert;
- (void)prefetchRelationshipsForDelete;
@property(readonly, nonatomic) NSURL *serverURL;
@property(readonly, nonatomic) NSString *dropBoxPathString;
@property(readonly, nonatomic) BOOL supportsUnbind;
- (id)iCalendarDocumentWithID:(id)arg1 name:(id)arg2 description:(id)arg3 color:(id)arg4 options:(unsigned long long)arg5;

// Remaining properties
@property(retain) NSSet *calendars; // @dynamic calendars;
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property BOOL isExpanded; // @dynamic isExpanded;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

