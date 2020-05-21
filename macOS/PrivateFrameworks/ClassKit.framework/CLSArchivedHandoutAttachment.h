//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import "CLSRelationable.h"

@class CLSArchivedHandout, NSArray, NSString, NSURL;

@interface CLSArchivedHandoutAttachment : CLSObject <CLSRelationable>
{
    int _shareType;
    int _permissionType;
    NSURL *_URL;
    NSArray *_contextPath;
    NSString *_contextSummary;
    NSString *_contextCustomTypeName;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_contentStoreIdentifier;
    long long _displayOrder;
    long long _contextType;
    int _type;
    NSArray *_assets;
    NSString *_storeIdentifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)relations;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *contentStoreIdentifier; // @synthesize contentStoreIdentifier=_contentStoreIdentifier;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *contextCustomTypeName; // @synthesize contextCustomTypeName=_contextCustomTypeName;
@property(readonly, nonatomic) NSString *contextSummary; // @synthesize contextSummary=_contextSummary;
@property(readonly, nonatomic) NSArray *contextPath; // @synthesize contextPath=_contextPath;
@property(readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) long long displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly, nonatomic) long long contextType; // @synthesize contextType=_contextType;
@property(readonly, nonatomic) int permissionType; // @synthesize permissionType=_permissionType;
@property(readonly, nonatomic) int shareType; // @synthesize shareType=_shareType;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)setContentStoreIdentifier:(id)arg1;
- (void)setStoreIdentifier:(id)arg1;
- (void)setPermissionType:(int)arg1;
- (void)setDisplayOrder:(long long)arg1;
- (void)setContextType:(long long)arg1;
- (void)setContextCustomTypeName:(id)arg1;
- (void)setContextSummary:(id)arg1;
- (void)setContextPath:(id)arg1;
- (void)setShareType:(int)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setAssets:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(int)arg1 title:(id)arg2;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CLSArchivedHandout *parent; // @dynamic parent;
@property(readonly, nonatomic) NSString *parentObjectID; // @dynamic parentObjectID;
@property(readonly) Class superclass;

@end

