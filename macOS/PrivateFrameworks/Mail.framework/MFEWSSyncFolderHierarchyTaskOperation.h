//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Mail/MFEWSNetworkTaskOperation.h>

@class NSString;

@interface MFEWSSyncFolderHierarchyTaskOperation : MFEWSNetworkTaskOperation
{
    id <MFEWSSyncFolderHierarchyTaskOperationDelegate> _delegate;
    NSString *_currentSyncState;
}

+ (id)_newRequestWithSyncState:(id)arg1;
- (void).cxx_destruct;
@property(copy) NSString *currentSyncState; // @synthesize currentSyncState=_currentSyncState;
@property(nonatomic) __weak id <MFEWSSyncFolderHierarchyTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)_folderIsHidden:(id)arg1;
- (void)main;
- (id)init;
- (id)initWithInitialSyncState:(id)arg1;

@end

