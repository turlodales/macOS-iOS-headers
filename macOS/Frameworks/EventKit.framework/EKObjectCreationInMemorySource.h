//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKit/EKObjectCreationInMemoryObject.h>

#import "EKProtocolCalendarSource.h"

@class NSDictionary, NSManagedObjectID, NSSet, NSString, NSURL;

@interface EKObjectCreationInMemorySource : EKObjectCreationInMemoryObject <EKProtocolCalendarSource>
{
    BOOL _isDelegate;
    BOOL _isEnabledForEvents;
    BOOL _isEnabledForReminders;
    BOOL _isWritable;
    BOOL _supportsAttendeeComments;
    BOOL _supportsDropBoxAttachments;
    BOOL _supportsEmailValidation;
    BOOL _supportsEventCalendarCreation;
    BOOL _supportsFreebusy;
    BOOL _supportsLikenessPropagation;
    BOOL _supportsManagedAttachments;
    BOOL _supportsPrivateEvents;
    BOOL _supportsSharingScheduling;
    BOOL _supportsTaskCalendarCreation;
    BOOL _supportsUnbind;
    int _displayOrder;
    NSString *_externalSourceIdentifier;
    NSString *_dropBoxPathString;
    NSSet *_ownerAddresses;
    NSString *_providerIdentifier;
    NSURL *_serverURL;
    NSString *_sourceIdentifier;
    NSString *_title;
    NSString *_typeString;
}

+ (Class)meltedClass;
+ (Class)frozenClass;
@property(retain, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) BOOL supportsUnbind; // @synthesize supportsUnbind=_supportsUnbind;
@property(nonatomic) BOOL supportsTaskCalendarCreation; // @synthesize supportsTaskCalendarCreation=_supportsTaskCalendarCreation;
@property(nonatomic) BOOL supportsSharingScheduling; // @synthesize supportsSharingScheduling=_supportsSharingScheduling;
@property(nonatomic) BOOL supportsPrivateEvents; // @synthesize supportsPrivateEvents=_supportsPrivateEvents;
@property(nonatomic) BOOL supportsManagedAttachments; // @synthesize supportsManagedAttachments=_supportsManagedAttachments;
@property(nonatomic) BOOL supportsLikenessPropagation; // @synthesize supportsLikenessPropagation=_supportsLikenessPropagation;
@property(nonatomic) BOOL supportsFreebusy; // @synthesize supportsFreebusy=_supportsFreebusy;
@property(nonatomic) BOOL supportsEventCalendarCreation; // @synthesize supportsEventCalendarCreation=_supportsEventCalendarCreation;
@property(nonatomic) BOOL supportsEmailValidation; // @synthesize supportsEmailValidation=_supportsEmailValidation;
@property(nonatomic) BOOL supportsDropBoxAttachments; // @synthesize supportsDropBoxAttachments=_supportsDropBoxAttachments;
@property(nonatomic) BOOL supportsAttendeeComments; // @synthesize supportsAttendeeComments=_supportsAttendeeComments;
@property(retain, nonatomic) NSString *sourceIdentifier; // @synthesize sourceIdentifier=_sourceIdentifier;
@property(retain, nonatomic) NSURL *serverURL; // @synthesize serverURL=_serverURL;
@property(retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(retain, nonatomic) NSSet *ownerAddresses; // @synthesize ownerAddresses=_ownerAddresses;
@property(nonatomic) BOOL isWritable; // @synthesize isWritable=_isWritable;
@property(nonatomic) BOOL isEnabledForReminders; // @synthesize isEnabledForReminders=_isEnabledForReminders;
@property(nonatomic) BOOL isEnabledForEvents; // @synthesize isEnabledForEvents=_isEnabledForEvents;
@property(nonatomic) BOOL isDelegate; // @synthesize isDelegate=_isDelegate;
@property(retain, nonatomic) NSString *dropBoxPathString; // @synthesize dropBoxPathString=_dropBoxPathString;
@property(nonatomic) int displayOrder; // @synthesize displayOrder=_displayOrder;
@property(copy, nonatomic) NSString *externalSourceIdentifier; // @synthesize externalSourceIdentifier=_externalSourceIdentifier;
- (void).cxx_destruct;
- (BOOL)isNew;
- (id)uniqueIdentifier;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) BOOL canBeConvertedToFullObject;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isPartialObject;
@property(readonly, nonatomic) NSManagedObjectID *managedObjectID;
@property(readonly, nonatomic) NSDictionary *preFrozenRelationshipObjects;
@property(readonly) Class superclass;

@end

