//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SystemMigration/SMGroup.h>

@class SMDBEntry;

@interface SMGroup_Daemon : SMGroup
{
    SMDBEntry *_backing;
}

+ (BOOL)remoteGroupShouldOverwriteLocal:(id)arg1;
- (void).cxx_destruct;
@property(retain) SMDBEntry *backing; // @synthesize backing=_backing;
- (id)entriesForKey:(id)arg1;
- (id)nestedGroups;
- (id)groupMembership;
- (id)groupMembers;
- (id)users;
- (id)generatedUID;
- (id)groupID;
- (unsigned int)gid;
- (id)name;
- (id)_getEntry:(id)arg1 atIndex:(int)arg2;
- (id)_initWithEntry:(id)arg1 fromSystem:(id)arg2;

@end

