//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCloudSharingServiceDelegate.h"
#import "UINSCloudSharingController.h"

@class CKContainer, CKShare, NSArray, NSSharingService, NSString;

__attribute__((visibility("hidden")))
@interface UINSCloudSharingController : NSObject <UINSCloudSharingController, NSCloudSharingServiceDelegate>
{
    id <UINSCloudSharingControllerDelegate> _delegate;
    id <UINSWindow> _window;
    unsigned long long _availablePermissions;
    CDUnknownBlockType _preparationHandler;
    CKShare *_share;
    CKContainer *_container;
    NSSharingService *_sharingService;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSSharingService *sharingService; // @synthesize sharingService=_sharingService;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) CKShare *share; // @synthesize share=_share;
@property(copy, nonatomic) CDUnknownBlockType preparationHandler; // @synthesize preparationHandler=_preparationHandler;
@property(nonatomic) unsigned long long availablePermissions; // @synthesize availablePermissions=_availablePermissions;
@property(nonatomic) __weak id <UINSWindow> window; // @synthesize window=_window;
@property(nonatomic) __weak id <UINSCloudSharingControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sharingService:(id)arg1 didStopSharing:(id)arg2;
- (void)sharingService:(id)arg1 didSaveShare:(id)arg2;
- (unsigned long long)optionsForSharingService:(id)arg1 shareProvider:(id)arg2;
- (void)sharingService:(id)arg1 didCompleteForItems:(id)arg2 error:(id)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (void)present;
- (BOOL)_commonInit;
- (id)initWithShare:(id)arg1 container:(id)arg2;
- (id)initWithPreparationHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

