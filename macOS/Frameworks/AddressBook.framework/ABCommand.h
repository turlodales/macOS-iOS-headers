//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABAddressBook;

@interface ABCommand : NSObject
{
    BOOL _save;
    ABAddressBook *_addressBook;
}

+ (id)bundle;
- (id)addressBook;
- (BOOL)performWithActionName:(id)arg1;
- (id)undoer;
- (id)_undoManager;
- (void)redoIt;
- (void)undoIt;
- (BOOL)doIt;
- (BOOL)save;
- (void)setSave:(BOOL)arg1;
- (id)initWithAddressBook:(id)arg1;
- (id)init;

@end

