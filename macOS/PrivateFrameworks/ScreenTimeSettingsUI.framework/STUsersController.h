//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFetchedResultsControllerDelegate.h"

@class NSArray, NSFetchedResultsController, NSImage, NSManagedObjectContext, NSString, STCoreUser;

@interface STUsersController : NSObject <NSFetchedResultsControllerDelegate>
{
    unsigned long long _selectedIndex;
    NSImage *_selectedUserImage;
    NSManagedObjectContext *_managedObjectContext;
    NSFetchedResultsController *_localUserController;
    NSFetchedResultsController *_childUserController;
    NSFetchedResultsController *_settingsController;
}

+ (id)keyPathsForValuesAffectingSelectedUser;
+ (id)keyPathsForValuesAffectingUsers;
+ (id)keyPathsForValuesAffectingLocalUser;
- (void).cxx_destruct;
@property(retain) NSFetchedResultsController *settingsController; // @synthesize settingsController=_settingsController;
@property(retain, nonatomic) NSFetchedResultsController *childUserController; // @synthesize childUserController=_childUserController;
@property(retain, nonatomic) NSFetchedResultsController *localUserController; // @synthesize localUserController=_localUserController;
@property(readonly) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property(copy) NSImage *selectedUserImage; // @synthesize selectedUserImage=_selectedUserImage;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controllerWillChangeContent:(id)arg1;
- (void)notifyServerOfScreenTimeEnabled:(BOOL)arg1 forUser:(id)arg2;
- (void)refresh;
- (void)refreshSelectedUserImage;
@property(readonly) STCoreUser *selectedUser;
@property(readonly, copy) NSArray *users;
@property(readonly) STCoreUser *localUser;
- (id)initWithManagedObjectContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

