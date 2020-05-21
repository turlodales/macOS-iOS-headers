//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFAction.h>

#import "PFResourceAccessClient.h"

@class NSString;

@interface PFResourceAccessAction : PFAction <PFResourceAccessClient>
{
}

- (int)executeRedo;
- (int)executeUndo;
- (int)executeAction;
- (int)executeRedo:(CDUnknownBlockType)arg1;
- (int)executeUndo:(CDUnknownBlockType)arg1;
- (int)executeAction:(CDUnknownBlockType)arg1;
- (void)resourceWillShutdown:(id)arg1;
- (void)endResourceAccess;
- (BOOL)beginResourceAccess;
- (id)resourceObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

