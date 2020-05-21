//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarAgentLink/CalStoreRemoteManagedNode.h>

@class CalStoreRemoteManagedGroup;

@interface CalStoreRemoteManagedCalendar : CalStoreRemoteManagedNode
{
    CalStoreRemoteManagedGroup *_group;
    BOOL _isEventContainer;
    BOOL _isTaskContainer;
    BOOL _shouldShowInPrimaryAccounts;
}

+ (BOOL)supportsSecureCoding;
+ (id)fetchObjectsWithPredicate:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldShowInPrimaryAccounts; // @synthesize shouldShowInPrimaryAccounts=_shouldShowInPrimaryAccounts;
@property(nonatomic) BOOL isEventContainer; // @synthesize isEventContainer=_isEventContainer;
@property(nonatomic) BOOL isTaskContainer; // @synthesize isTaskContainer=_isTaskContainer;
@property(retain, nonatomic) CalStoreRemoteManagedGroup *group; // @synthesize group=_group;
- (void)encodeWithCoder:(id)arg1;
- (id)saveWithError:(id *)arg1;
- (BOOL)removeWithError:(id *)arg1;
- (BOOL)isLocal;
- (BOOL)hasCapability:(int)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

