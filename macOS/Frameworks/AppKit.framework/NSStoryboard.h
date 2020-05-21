//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSStoryboard : NSObject
{
    id _privateStoryboardData;
}

+ (id)mainStoryboard;
+ (id)storyboardWithName:(id)arg1 bundle:(id)arg2;
- (id)debugDescription;
- (id)description;
- (BOOL)_hasInitialController;
- (id)instantiateInitialControllerWithCreator:(CDUnknownBlockType)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)instantiateInitialController;
- (id)instantiateInitialControllerWithCreator:(CDUnknownBlockType)arg1;
- (id)_instantiateControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2 storyboardSegueTemplate:(id)arg3 sender:(id)arg4;
- (id)instantiateControllerWithIdentifier:(id)arg1;
- (id)instantiateControllerWithIdentifier:(id)arg1 creator:(CDUnknownBlockType)arg2;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)arg1 storyboardSegueTemplate:(id)arg2 sender:(id)arg3;
- (id)instantiateControllerReferencedByPlaceholderWithIdentifier:(id)arg1;
- (id)uniqueIDForControllerIdentifier:(id)arg1;
- (id)_referencedStoryboardForExternalReferenceInfo:(id)arg1;
- (id)nibForControllerWithIdentifier:(id)arg1;
- (id)nibForStoryboardNibNamed:(id)arg1;
- (id)storyboardBundle;
- (id)containingBundle;
- (void)_instantiateMainMenu:(id)arg1;
- (BOOL)containsNibNamed:(id)arg1;
- (id)name;
- (id)storyboardFileName;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;
- (id)initWithBundle:(id)arg1 storyboardFileName:(id)arg2 identifierToNibNameMap:(id)arg3 identifierToExternalStoryboardReferenceMap:(id)arg4 identifierToUUIDMap:(id)arg5 designatedEntryPointIdentifier:(id)arg6 mainMenu:(id)arg7;

@end

