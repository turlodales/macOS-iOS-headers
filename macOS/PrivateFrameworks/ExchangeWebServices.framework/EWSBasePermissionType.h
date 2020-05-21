//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSUserIdType, NSString;

@interface EWSBasePermissionType : NSObject <XSDefinitionProvider>
{
    BOOL _CanCreateItems;
    BOOL _CanCreateSubFolders;
    BOOL _IsFolderOwner;
    BOOL _IsFolderVisible;
    BOOL _IsFolderContact;
    EWSUserIdType *_UserId;
    long long _EditItems;
    long long _DeleteItems;
}

+ (id)definition;
- (void).cxx_destruct;
@property(nonatomic) long long DeleteItems; // @synthesize DeleteItems=_DeleteItems;
@property(nonatomic) long long EditItems; // @synthesize EditItems=_EditItems;
@property(nonatomic) BOOL IsFolderContact; // @synthesize IsFolderContact=_IsFolderContact;
@property(nonatomic) BOOL IsFolderVisible; // @synthesize IsFolderVisible=_IsFolderVisible;
@property(nonatomic) BOOL IsFolderOwner; // @synthesize IsFolderOwner=_IsFolderOwner;
@property(nonatomic) BOOL CanCreateSubFolders; // @synthesize CanCreateSubFolders=_CanCreateSubFolders;
@property(nonatomic) BOOL CanCreateItems; // @synthesize CanCreateItems=_CanCreateItems;
@property(retain, nonatomic) EWSUserIdType *UserId; // @synthesize UserId=_UserId;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

