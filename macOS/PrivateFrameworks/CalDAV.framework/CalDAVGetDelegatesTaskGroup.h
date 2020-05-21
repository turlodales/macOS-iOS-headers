//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup
{
    int _state;
    NSMutableArray *_nestedGroupPrincipalURLs;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *nestedGroupPrincipalURLs; // @synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;
- (void)task:(id)arg1 didFinishWithError:(id)arg2;
- (void)startTaskGroup;
- (void)_getChildProperties;
- (void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2;
- (void)_expandProperties;
- (void)_finishWithError:(id)arg1 state:(int)arg2;
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;

@end

