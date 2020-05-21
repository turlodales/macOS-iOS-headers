//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarPersistence/CalSingleSynchronousTask.h>

@class CalDAVAccountInfoProvider, NSArray, NSMutableArray, NSString;

@interface CalDAVExpandGroupOperation : CalSingleSynchronousTask
{
    CalDAVAccountInfoProvider *_accountInfoProvider;
    NSString *_groupIdentifier;
    NSMutableArray *_groupMembers;
}

+ (id)fake404;
- (void).cxx_destruct;
@property(readonly, retain) CalDAVAccountInfoProvider *accountInfoProvider; // @synthesize accountInfoProvider=_accountInfoProvider;
@property(readonly) NSArray *groupMembers; // @synthesize groupMembers=_groupMembers;
@property(retain) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)getGroupMembersSynchronously;
- (void)expandCDGroup:(id)arg1;
- (id)initWithAccountInfoProvider:(id)arg1 groupIdentifier:(id)arg2;

@end

