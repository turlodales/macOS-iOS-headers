//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMutableCopying.h"
#import "WFCloudKitItem.h"
#import "WFLoggableObject.h"
#import "WFSortableGalleryObject.h"

@class CKRecordID, NSDate, NSDictionary, NSNumber, NSString, WFFileRepresentation, WFWorkflowIcon, WFWorkflowRecord;

@interface WFGalleryWorkflow : NSObject <WFCloudKitItem, WFLoggableObject, WFSortableGalleryObject, NSMutableCopying>
{
    WFWorkflowRecord *_workflowRecord;
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_shortDescription;
    NSString *_longDescription;
    NSNumber *_searchable;
    NSDate *_createdAt;
    NSDate *_modifiedAt;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
    WFFileRepresentation *_shortcutFile;
    WFFileRepresentation *_iconFile;
    NSNumber *_iconColor;
    NSNumber *_iconGlyph;
}

+ (id)properties;
+ (id)recordType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *iconGlyph; // @synthesize iconGlyph=_iconGlyph;
@property(retain, nonatomic) NSNumber *iconColor; // @synthesize iconColor=_iconColor;
@property(readonly, nonatomic) WFFileRepresentation *iconFile; // @synthesize iconFile=_iconFile;
@property(readonly, nonatomic) WFFileRepresentation *shortcutFile; // @synthesize shortcutFile=_shortcutFile;
@property(readonly, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;
@property(readonly, nonatomic) CKRecordID *base; // @synthesize base=_base;
@property(readonly, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, nonatomic) NSDate *modifiedAt; // @synthesize modifiedAt=_modifiedAt;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSNumber *searchable; // @synthesize searchable=_searchable;
@property(readonly, nonatomic) NSString *longDescription; // @synthesize longDescription=_longDescription;
@property(readonly, nonatomic) NSString *shortDescription; // @synthesize shortDescription=_shortDescription;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) CKRecordID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSDictionary *propertiesForEventLogging;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)ensureFileAssets;
@property(readonly, nonatomic) WFWorkflowRecord *workflowRecord; // @synthesize workflowRecord=_workflowRecord;
@property(readonly, nonatomic) WFWorkflowIcon *icon;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)sharingURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

