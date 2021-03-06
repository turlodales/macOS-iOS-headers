//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarPersistence/CALPropertyValue.h>

@class NSManagedObjectID;

@interface CALAddress : CALPropertyValue
{
    id _container;
    BOOL _isCalendarUserAddress;
    BOOL _isMe;
    NSManagedObjectID *_managedObjectID;
}

+ (id)addressWithAddressServicesUID:(id)arg1;
+ (id)addressWithMailString:(id)arg1;
+ (id)addressWithURL:(id)arg1;
+ (id)addressWithNoMail;
- (void).cxx_destruct;
@property(retain) NSManagedObjectID *managedObjectID; // @synthesize managedObjectID=_managedObjectID;
@property(retain) id container; // @synthesize container=_container;
- (id)addressForCommonName;
- (id)addressForMail;
- (id)justEmailAddress;
- (id)addressURIAsString;
- (BOOL)hasMail;
- (id)member;
- (void)setMember:(id)arg1;
- (id)delegatedTo;
- (void)setDelegatedTo:(id)arg1;
- (id)delegatedFrom;
- (void)setDelegatedFrom:(id)arg1;
- (id)sentBy;
- (void)setSentBy:(id)arg1;
- (id)email;
- (void)setEmail:(id)arg1;
- (BOOL)isSelfInvited;
- (void)setIsSelfInvited:(BOOL)arg1;
- (int)role;
- (void)setRole:(int)arg1;
- (void)removeRole;
- (int)scheduleAgent;
- (void)setScheduleAgent:(int)arg1;
- (int)scheduleStatus;
- (void)setScheduleStatus:(int)arg1;
- (int)participationStatus;
- (void)setParticipationStatus:(int)arg1;
- (int)userType;
- (void)setUserType:(int)arg1;
- (void)removeUserType;
- (id)directoryEntry;
- (void)setDirectoryEntry:(id)arg1;
- (id)commonName;
- (void)setCommonName:(id)arg1;
- (BOOL)scheduleForceSend;
- (void)setScheduleForceSend:(BOOL)arg1;
- (BOOL)rsvp;
- (void)setRSVP:(BOOL)arg1;
- (id)address;
- (BOOL)isSimilarTo:(id)arg1;
- (BOOL)isSameAddressAs:(id)arg1;
- (id)init;
- (id)initWithMailString:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithAddressServicesUID:(id)arg1;

@end

